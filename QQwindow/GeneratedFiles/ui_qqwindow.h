/********************************************************************************
** Form generated from reading UI file 'qqwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQWINDOW_H
#define UI_QQWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QQwindowClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidget;
    QHBoxLayout *toolBox;
    QToolButton *fileButton;
    QToolButton *imageButton;
    QSpacerItem *horizontalSpacer_2;
    QPlainTextEdit *senderBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *sendButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QQwindowClass)
    {
        if (QQwindowClass->objectName().isEmpty())
            QQwindowClass->setObjectName(QStringLiteral("QQwindowClass"));
        QQwindowClass->resize(600, 507);
        centralWidget = new QWidget(QQwindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(600, 450));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout_2->addWidget(listWidget);

        toolBox = new QHBoxLayout();
        toolBox->setSpacing(6);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        fileButton = new QToolButton(centralWidget);
        fileButton->setObjectName(QStringLiteral("fileButton"));

        toolBox->addWidget(fileButton);

        imageButton = new QToolButton(centralWidget);
        imageButton->setObjectName(QStringLiteral("imageButton"));

        toolBox->addWidget(imageButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        toolBox->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(toolBox);

        senderBox = new QPlainTextEdit(centralWidget);
        senderBox->setObjectName(QStringLiteral("senderBox"));
        senderBox->setReadOnly(false);

        verticalLayout_2->addWidget(senderBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(centralWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        sendButton = new QPushButton(centralWidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setEnabled(true);
        sendButton->setCheckable(false);

        horizontalLayout->addWidget(sendButton);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        QQwindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QQwindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        QQwindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QQwindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QQwindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QQwindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QQwindowClass->setStatusBar(statusBar);

        retranslateUi(QQwindowClass);

        sendButton->setDefault(true);
		
		centralWidget->resize(QSize(800, 800));
        QMetaObject::connectSlotsByName(QQwindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *QQwindowClass)
    {
        QQwindowClass->setWindowTitle(QApplication::translate("QQwindowClass", "QQwindow", Q_NULLPTR));
        fileButton->setText(QApplication::translate("QQwindowClass", "...", Q_NULLPTR));
        imageButton->setText(QApplication::translate("QQwindowClass", "...", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("QQwindowClass", "&Cancel", Q_NULLPTR));
        sendButton->setText(QApplication::translate("QQwindowClass", "&Send", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        sendButton->setShortcut(QApplication::translate("QQwindowClass", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class QQwindowClass: public Ui_QQwindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQWINDOW_H
