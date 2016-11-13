#include "resizepics.h"

#pragma execution_character_set("utf-8")

ResizePics::ResizePics(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.lineEdit_col->setValidator(new QRegExpValidator(QRegExp("^[0-9]*[1-9][0-9]*$"), this));
	ui.lineEdit_row->setValidator(new QRegExpValidator(QRegExp("^[0-9]*[1-9][0-9]*$"),this));
}

ResizePics::~ResizePics()
{

}

void ResizePics::on_pushButton_inputDir_clicked()
{
	inputDir.setPath(QFileDialog::getExistingDirectory(this, "Select InputDir", "I:/Tutor/Blurred License/�ָ�õ�"));
	if (inputDir.exists())
	{
		ui.lineEdit_inputDir->setText(inputDir.path());
	}
}


void ResizePics::on_pushButton_outputDir_clicked()
{
	outputDir.setPath(QFileDialog::getExistingDirectory(this, "Select Out"));
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
	if (ui.lineEdit_col->text().isEmpty()||ui.lineEdit_row->text().isEmpty())
	{
		QMessageBox::warning(this, "Incomplate size", "Please set the size before resize operation!");
		return;
	}
	col = ui.lineEdit_col->text().toInt();
	row = ui.lineEdit_row->text().toInt();
	inputDir.setFilter(QDir::Dirs | QDir::NoDotAndDotDot);
	inputDir.setSorting(QDir::Name);
	QFileInfoList inputSecLvDirList = inputDir.entryInfoList();
	for (int i = 0; i < inputSecLvDirList.length(); i++)
	{
		QDir outputSecLvDir(outputDir.path() + "/" + inputSecLvDirList[i].fileName());
		if (!outputSecLvDir.exists())
		{
			outputSecLvDir.mkdir(outputSecLvDir.path());
		}
		//�����ļ����µ��ļ��м����ļ����µ��ļ�������ȥ	
		QDir inputSecLvDir(inputSecLvDirList[i].filePath());
		qDebug() << inputSecLvDirList[i].filePath();
		inputSecLvDir.setFilter(QDir::Dirs | QDir::NoDotAndDotDot);
		inputSecLvDir.setSorting(QDir::Name);
		QFileInfoList inputThirdLvDirList = inputSecLvDir.entryInfoList();		//���Sec�ĵ������ļ��нṹ
		QDir outputThirdLvDir(outputSecLvDir.path() + "/" + QString::number(row));	//�趨����ļ��еĵ������ļ���
		if (!outputThirdLvDir.exists())
		{
			outputThirdLvDir.mkdir(outputThirdLvDir.path());
		}
		for (int j = 0; j < inputThirdLvDirList.length(); j++)					//���������ļ��еĵ�������ļ��нṹ
		{
			// ignore the dirs that hold pics with row less than target row
			if (inputThirdLvDirList[j].completeBaseName().toInt()<row)
			{
				continue;
			}
			// �������ļ��еĵ������ļ����ڵ��ļ�
			outputThirdLvDir.setFilter(QDir::Files);
			outputThirdLvDir.setSorting(QDir::Name);
			QFileInfoList outputFourthLvDirList = outputThirdLvDir.entryInfoList();
			int lastFileNum = 0;
			//Get lastFileNum
			for (int k = 0; k < outputFourthLvDirList.length(); k++)
			{
				lastFileNum = lastFileNum > outputFourthLvDirList[k].completeBaseName().toInt() ? lastFileNum : outputFourthLvDirList[k].completeBaseName().toInt();
			}
			QDir inputThirdLvDir(inputThirdLvDirList[j].filePath());
			inputThirdLvDir.setFilter(QDir::Files);
			inputThirdLvDir.setSorting(QDir::Name);
			QFileInfoList inputFourthLvDirList = inputThirdLvDir.entryInfoList();
			for (int k = 0; k < inputFourthLvDirList.length(); k++)
			{
				int fileNum = inputFourthLvDirList[k].completeBaseName().toInt() + lastFileNum;
				QString fileName = QString::number(fileNum) + "." + inputFourthLvDirList[k].suffix();
				cv::Mat cv_input = cv::imread(fileName.toLocal8Bit().toStdString()),cv_output;
				cv_input = cv::imread(inputFourthLvDirList[k].filePath().toLocal8Bit().toStdString());
				cv::Point2f corners[4] = { cv::Point2f(0,0),cv::Point2f(cv_input.cols - 1,0),cv::Point2f(cv_input.cols - 1,cv_input.rows - 1),cv::Point2f(0,cv_input.rows - 1) };
				perspectiveTransform(cv_input, cv_output, corners, col, row);
				cv::imwrite(outputThirdLvDir.filePath(fileName).toLocal8Bit().toStdString(),cv_output);			
			}
		}
	}
	QMessageBox::information(this, "Resize Succeed", "Resize operation Succeed!");
}
void ResizePics::perspectiveTransform(cv::Mat &input, cv::Mat &output, cv::Point2f corners[],int width, int height)
{
	//�����ȡ���ľ�������Ŀ��
	cv::Mat *temp = new cv::Mat(height, width, input.type());
	cv::Point2f corners_trans[4] = { cv::Point2f(0,0),cv::Point2f(width - 1,0),cv::Point2f(width - 1,height - 1),cv::Point2f(0,height - 1) };	//���˳��Ϊ ���� ���� ���� ����
	cv::Mat transform = cv::getPerspectiveTransform(corners, corners_trans);	
	cv::warpPerspective(input, *temp, transform, temp->size());
	output = *temp;
}