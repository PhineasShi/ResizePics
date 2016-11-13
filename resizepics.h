#ifndef RESIZEPICS_H
#define RESIZEPICS_H

#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>

#include <QtWidgets/QMainWindow>
#include "ui_resizepics.h"
#include <QDir>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>

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
	int row;
	int col;
	void perspectiveTransform(cv::Mat &input, cv::Mat &output, cv::Point2f corners[], int width, int height);
};

#endif // RESIZEPICS_H
