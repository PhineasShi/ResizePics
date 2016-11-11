#ifndef RESIZEPICS_H
#define RESIZEPICS_H

#include <QtWidgets/QMainWindow>
#include "ui_resizepics.h"

class ResizePics : public QMainWindow
{
	Q_OBJECT

public:
	ResizePics(QWidget *parent = 0);
	~ResizePics();

private:
	Ui::ResizePicsClass ui;
};

#endif // RESIZEPICS_H
