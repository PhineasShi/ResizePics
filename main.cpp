#include "resizepics.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ResizePics w;
	w.show();
	return a.exec();
}
