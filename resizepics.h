#ifndef RESIZEPICS_H
#define RESIZEPICS_H

#include <QtWidgets/QMainWindow>
#include "ui_resizepics.h"
#include <QDir>
#include <QFileDialog>
#include <QMessageBox>

class ResizePics : public QMainWindow
{
	Q_OBJECT

public:
	ResizePics(QWidget *parent = 0);
	~ResizePics();

public slots:
	void on_pushButton_inputDir_clicked();
	void on_pushButton_outputDir_clicked();
	void on_pushButton_resize_clicked();

private:
	Ui::ResizePicsClass ui;
	QDir inputDir;
	QDir outputDir;
};

#endif // RESIZEPICS_H
