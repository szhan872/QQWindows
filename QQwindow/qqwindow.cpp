#include <QLineEdit>
#include <QFileDialog>
#include <QTime>

#include "qqwindow.h"


QQwindow::QQwindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.sendButton->setDefault(true);

	//listWidget style
	ui.listWidget->resize(400, 700);
	ui.listWidget->setIconSize(QSize(10, 10));
	ui.listWidget->setResizeMode(QListView::Adjust);

	//tool box style
	ui.fileButton->setIcon(QIcon(":/QQwindow/images/file.png"));
	ui.imageButton->setIcon(QIcon(":/QQwindow/images/image.png"));

	//tool button connections
	connect(ui.imageButton, SIGNAL(clicked()), this, SLOT(selectImage()));
	connect(ui.fileButton, SIGNAL(clicked()), this, SLOT(selectFile()));

	//connect(sendButton, SIGNAL(clicked()), this, SLOT(receiveMsg(senderBox, message)));
	connect(ui.sendButton, SIGNAL(clicked()), this, SLOT(on_send()));
	connect(ui.cancelButton, SIGNAL(clicked()), this, SLOT(close()));

	//connect Enter button to send
	connect(ui.senderBox, SIGNAL(returnPressed()), this, SLOT(on_send()));
	//connect Enter button in Textedit to send
	ui.senderBox->installEventFilter(this);
}

QQwindow::~QQwindow()
{
	
}

void QQwindow::on_send() {

	QTime time = QTime::currentTime();
	QString stime = time.toString();//generate stime as current time
	QString userName = "User:"+stime;
	QString msg = ui.senderBox->toPlainText();
	QListWidgetItem message = QListWidgetItem(msg);
	ui.listWidget->addItem(userName);
	//ui.listWidget->addItem(message);
	ui.listWidget->addItem(msg);
	ui.senderBox->clear();
	ui.senderBox->setFocus();
}

//rewrite eventfilter
bool QQwindow::eventFilter(QObject *target, QEvent *event)
{
	if (target == ui.senderBox)
	{
		if (event->type() == QEvent::KeyPress)
		{
			QKeyEvent *k = static_cast<QKeyEvent *>(event);
			if (k->key() == Qt::Key_Return && (QApplication::keyboardModifiers()==Qt::ControlModifier))
			{
				on_send();
				return true;
			}
			else if (k->key() == Qt::Key_Return && !(QApplication::keyboardModifiers() == Qt::ShiftModifier)) {
				on_send();
				return true;
			}
		}
	}
	return QWidget::eventFilter(target, event);
}

void QQwindow::selectImage() {
	ui.cancelButton->setEnabled(true);
	QString path = QFileDialog::getOpenFileName(this, tr("select image"), "/home", tr("Image Files(*.jpg *.png)"));
	QImage img(path);
	QListWidgetItem *item = new QListWidgetItem(path, ui.listWidget);
	item->setData(Qt::DecorationRole, QPixmap::fromImage(img));
}

void QQwindow::selectFile() {
	ui.cancelButton->setEnabled(true);
	QString path = QFileDialog::getOpenFileName(this, tr("select image"), "/home", tr("Any File(*.*)"));
	QListWidgetItem *item = new QListWidgetItem(path, ui.listWidget);
}


/*
void QQwindow::keyPressEvent(QKeyEvent *event) {
	if (event->key() == Qt::Key_Enter) {
		//on_send();
	}
}
*/