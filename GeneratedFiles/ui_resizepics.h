/********************************************************************************
** Form generated from reading UI file 'resizepics.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESIZEPICS_H
#define UI_RESIZEPICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResizePicsClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_inputDir;
    QPushButton *pushButton_inputDir;
    QLineEdit *lineEdit_outputDir;
    QPushButton *pushButton_outputDir;
    QPushButton *pushButton_resize;
    QCheckBox *checkBox_EQ;
    QCheckBox *checkBox_Bin;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_col;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *lineEdit_row;
    QLabel *label_4;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ResizePicsClass)
    {
        if (ResizePicsClass->objectName().isEmpty())
            ResizePicsClass->setObjectName(QStringLiteral("ResizePicsClass"));
        ResizePicsClass->resize(400, 200);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ResizePicsClass->sizePolicy().hasHeightForWidth());
        ResizePicsClass->setSizePolicy(sizePolicy);
        ResizePicsClass->setMinimumSize(QSize(0, 0));
        ResizePicsClass->setMaximumSize(QSize(16777215, 200));
        ResizePicsClass->setBaseSize(QSize(0, 0));
        centralWidget = new QWidget(ResizePicsClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit_inputDir = new QLineEdit(centralWidget);
        lineEdit_inputDir->setObjectName(QStringLiteral("lineEdit_inputDir"));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font.setPointSize(10);
        lineEdit_inputDir->setFont(font);
        lineEdit_inputDir->setReadOnly(true);

        gridLayout->addWidget(lineEdit_inputDir, 0, 1, 1, 1);

        pushButton_inputDir = new QPushButton(centralWidget);
        pushButton_inputDir->setObjectName(QStringLiteral("pushButton_inputDir"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_inputDir->sizePolicy().hasHeightForWidth());
        pushButton_inputDir->setSizePolicy(sizePolicy1);
        pushButton_inputDir->setFont(font);

        gridLayout->addWidget(pushButton_inputDir, 0, 0, 1, 1);

        lineEdit_outputDir = new QLineEdit(centralWidget);
        lineEdit_outputDir->setObjectName(QStringLiteral("lineEdit_outputDir"));
        lineEdit_outputDir->setFont(font);
        lineEdit_outputDir->setReadOnly(true);

        gridLayout->addWidget(lineEdit_outputDir, 1, 1, 1, 1);

        pushButton_outputDir = new QPushButton(centralWidget);
        pushButton_outputDir->setObjectName(QStringLiteral("pushButton_outputDir"));
        sizePolicy1.setHeightForWidth(pushButton_outputDir->sizePolicy().hasHeightForWidth());
        pushButton_outputDir->setSizePolicy(sizePolicy1);
        pushButton_outputDir->setFont(font);

        gridLayout->addWidget(pushButton_outputDir, 1, 0, 1, 1);

        pushButton_resize = new QPushButton(centralWidget);
        pushButton_resize->setObjectName(QStringLiteral("pushButton_resize"));
        pushButton_resize->setFont(font);

        gridLayout->addWidget(pushButton_resize, 4, 0, 1, 1);

        checkBox_EQ = new QCheckBox(centralWidget);
        checkBox_EQ->setObjectName(QStringLiteral("checkBox_EQ"));
        checkBox_EQ->setFont(font);

        gridLayout->addWidget(checkBox_EQ, 3, 0, 1, 1);

        checkBox_Bin = new QCheckBox(centralWidget);
        checkBox_Bin->setObjectName(QStringLiteral("checkBox_Bin"));
        checkBox_Bin->setFont(font);

        gridLayout->addWidget(checkBox_Bin, 2, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 0, 2, 1, 1);

        lineEdit_col = new QLineEdit(centralWidget);
        lineEdit_col->setObjectName(QStringLiteral("lineEdit_col"));
        lineEdit_col->setFont(font);
        lineEdit_col->setMaxLength(3);
        lineEdit_col->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lineEdit_col, 1, 2, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 1, 1, 1, 1);

        lineEdit_row = new QLineEdit(centralWidget);
        lineEdit_row->setObjectName(QStringLiteral("lineEdit_row"));
        lineEdit_row->setFont(font);
        lineEdit_row->setMaxLength(3);
        lineEdit_row->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lineEdit_row, 1, 0, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout_2->addWidget(label_4, 1, 3, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 1, 3, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        ResizePicsClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ResizePicsClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ResizePicsClass->setStatusBar(statusBar);

        retranslateUi(ResizePicsClass);

        QMetaObject::connectSlotsByName(ResizePicsClass);
    } // setupUi

    void retranslateUi(QMainWindow *ResizePicsClass)
    {
        ResizePicsClass->setWindowTitle(QApplication::translate("ResizePicsClass", "ResizePics", 0));
        pushButton_inputDir->setText(QApplication::translate("ResizePicsClass", "\350\276\223\345\205\245\346\226\207\344\273\266\345\244\271", 0));
        pushButton_outputDir->setText(QApplication::translate("ResizePicsClass", "\350\276\223\345\207\272\346\226\207\344\273\266\345\244\271", 0));
        pushButton_resize->setText(QApplication::translate("ResizePicsClass", "\350\275\254\346\215\242", 0));
        checkBox_EQ->setText(QApplication::translate("ResizePicsClass", "\345\235\207\350\241\241\345\214\226", 0));
        checkBox_Bin->setText(QApplication::translate("ResizePicsClass", "\347\201\260\345\272\246\345\214\226", 0));
        label_2->setText(QApplication::translate("ResizePicsClass", "\345\210\227", 0));
        label->setText(QApplication::translate("ResizePicsClass", "\350\241\214", 0));
        label_3->setText(QApplication::translate("ResizePicsClass", "pix", 0));
        label_4->setText(QApplication::translate("ResizePicsClass", "pix", 0));
    } // retranslateUi

};

namespace Ui {
    class ResizePicsClass: public Ui_ResizePicsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESIZEPICS_H
