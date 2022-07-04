#ifndef QQWINDOW_H
#define QQWINDOW_H

#include <QtWidgets/QMainWindow>
#include "ui_qqwindow.h"
#include <QWidget>
#include <QMainWindow>
#include <QListWidgetItem>

class QQwindow : public QMainWindow
{
	Q_OBJECT

public:
	QQwindow(QWidget *parent = 0);
	~QQwindow();
	
	
protected:
	bool eventFilter(QObject *target, QEvent *event);


private slots:
	void on_send();
	void selectImage();
	void selectFile();

private:
	Ui::QQwindowClass ui;

	QPushButton *sendButton;
	QPushButton *closeButton;
	QToolBar *toolBar;
	QString message;
	//virtual void keyPressEvent(QKeyEvent *event);

};



#endif // QQWINDOW_H
