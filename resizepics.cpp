#include "resizepics.h"

ResizePics::ResizePics(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

ResizePics::~ResizePics()
{

}

void ResizePics::on_pushButton_inputDir_clicked()
{
	inputDir.setPath(QFileDialog::getExistingDirectory(this, "Select MainDir", "I:/Tutor/Blurred License/·Ö¸îºÃµÄ"));
	if (inputDir.exists())
	{
		ui.lineEdit_inputDir->setText(inputDir.path());
	}
}


void ResizePics::on_pushButton_outputDir_clicked()
{
	outputDir.setPath(QFileDialog::getExistingDirectory(this, "Select SecondaryDir"));
	if (outputDir.exists())
	{
		ui.lineEdit_outputDir->setText(outputDir.path());
	}
}

void ResizePics::on_pushButton_resize_clicked()
{
	if (inputDir.isRelative() || outputDir.isRelative())
	{
		QMessageBox::warning(this, "Incomplate Dirs", "Please set all the dirs before resize operation!");
		return;
	}
	QMessageBox::information(this, "Merge Succeed", "Merge operation Succeed!");
}
