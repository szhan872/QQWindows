#include "qqwindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QQwindow w;
	w.show();
	return a.exec();
}
