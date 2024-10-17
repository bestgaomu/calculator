/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QGridLayout *gridLayout;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_backSpace;
    QPushButton *pushButton_7_;
    QPushButton *pushButton_8_;
    QPushButton *pushButton_9_;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_4_;
    QPushButton *pushButton_5_;
    QPushButton *pushButton_6_;
    QPushButton *pushButton_add;
    QPushButton *pushButton_1_;
    QPushButton *pushButton_2_;
    QPushButton *pushButton_3_;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_perCent;
    QPushButton *pushButton_0_;
    QPushButton *pushButton_point;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(314, 387);
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/92502/Desktop/img_cal/\350\256\241\347\256\227\345\231\250.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        Widget->setStyleSheet(QString::fromUtf8("*{\n"
"    border:1px solid rgb(185, 185, 185);\n"
"	background-color: rgb(234, 234, 234);\n"
"}\n"
"\n"
"QPushButton#pushButton_add,#pushButton_sub,#pushButton_divide,#pushButton_mult{\n"
"	background-color: rgb(255, 208, 203);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(221, 221, 221);\n"
"	border:1px solid rgb(185, 185, 185);\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setStyleSheet(QString::fromUtf8("*{\n"
"    border:none;\n"
"	background-color: rgb(255, 255, 255);\n"
"\n"
"}\n"
""));

        verticalLayout->addWidget(plainTextEdit);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButton_Clear = new QPushButton(Widget);
        pushButton_Clear->setObjectName("pushButton_Clear");
        pushButton_Clear->setStyleSheet(QString::fromUtf8("QPushButton#add,#subtraction,#division,#multiplication{\n"
"	background-color: rgb(56, 208, 203);\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("C:/Users/92502/Desktop/img_cal/c.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Clear->setIcon(icon1);

        gridLayout->addWidget(pushButton_Clear, 0, 0, 1, 1);

        pushButton_mult = new QPushButton(Widget);
        pushButton_mult->setObjectName("pushButton_mult");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("C:/Users/92502/Desktop/img_cal/jiajianchengchu-3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_mult->setIcon(icon2);

        gridLayout->addWidget(pushButton_mult, 0, 1, 1, 1);

        pushButton_divide = new QPushButton(Widget);
        pushButton_divide->setObjectName("pushButton_divide");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("C:/Users/92502/Desktop/img_cal/jiajianchengchu-.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_divide->setIcon(icon3);

        gridLayout->addWidget(pushButton_divide, 0, 2, 1, 1);

        pushButton_backSpace = new QPushButton(Widget);
        pushButton_backSpace->setObjectName("pushButton_backSpace");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("C:/Users/92502/Desktop/img_cal/tuige.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_backSpace->setIcon(icon4);

        gridLayout->addWidget(pushButton_backSpace, 0, 3, 1, 1);

        pushButton_7_ = new QPushButton(Widget);
        pushButton_7_->setObjectName("pushButton_7_");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("C:/Users/92502/Desktop/img_cal/\346\225\260\345\255\2277.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7_->setIcon(icon5);

        gridLayout->addWidget(pushButton_7_, 1, 0, 1, 1);

        pushButton_8_ = new QPushButton(Widget);
        pushButton_8_->setObjectName("pushButton_8_");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("C:/Users/92502/Desktop/img_cal/\346\225\260\345\255\2278.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8_->setIcon(icon6);

        gridLayout->addWidget(pushButton_8_, 1, 1, 1, 1);

        pushButton_9_ = new QPushButton(Widget);
        pushButton_9_->setObjectName("pushButton_9_");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("C:/Users/92502/Desktop/img_cal/shuzi9.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9_->setIcon(icon7);

        gridLayout->addWidget(pushButton_9_, 1, 2, 1, 1);

        pushButton_sub = new QPushButton(Widget);
        pushButton_sub->setObjectName("pushButton_sub");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("C:/Users/92502/Desktop/img_cal/jiajianchengchu-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_sub->setIcon(icon8);

        gridLayout->addWidget(pushButton_sub, 1, 3, 1, 1);

        pushButton_4_ = new QPushButton(Widget);
        pushButton_4_->setObjectName("pushButton_4_");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("C:/Users/92502/Desktop/img_cal/shuzi4.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4_->setIcon(icon9);

        gridLayout->addWidget(pushButton_4_, 2, 0, 1, 1);

        pushButton_5_ = new QPushButton(Widget);
        pushButton_5_->setObjectName("pushButton_5_");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("C:/Users/92502/Desktop/img_cal/shuzi5.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5_->setIcon(icon10);

        gridLayout->addWidget(pushButton_5_, 2, 1, 1, 1);

        pushButton_6_ = new QPushButton(Widget);
        pushButton_6_->setObjectName("pushButton_6_");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("C:/Users/92502/Desktop/img_cal/\346\225\260\345\255\2276.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6_->setIcon(icon11);

        gridLayout->addWidget(pushButton_6_, 2, 2, 1, 1);

        pushButton_add = new QPushButton(Widget);
        pushButton_add->setObjectName("pushButton_add");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("C:/Users/92502/Desktop/img_cal/jiajianchengchu-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_add->setIcon(icon12);

        gridLayout->addWidget(pushButton_add, 2, 3, 1, 1);

        pushButton_1_ = new QPushButton(Widget);
        pushButton_1_->setObjectName("pushButton_1_");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8("C:/Users/92502/Desktop/img_cal/shuzi1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_1_->setIcon(icon13);

        gridLayout->addWidget(pushButton_1_, 3, 0, 1, 1);

        pushButton_2_ = new QPushButton(Widget);
        pushButton_2_->setObjectName("pushButton_2_");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8("C:/Users/92502/Desktop/img_cal/shuzi2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2_->setIcon(icon14);

        gridLayout->addWidget(pushButton_2_, 3, 1, 1, 1);

        pushButton_3_ = new QPushButton(Widget);
        pushButton_3_->setObjectName("pushButton_3_");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8("C:/Users/92502/Desktop/img_cal/shuzi3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3_->setIcon(icon15);

        gridLayout->addWidget(pushButton_3_, 3, 2, 1, 1);

        pushButton_equal = new QPushButton(Widget);
        pushButton_equal->setObjectName("pushButton_equal");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8("C:/Users/92502/Desktop/img_cal/denghao.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_equal->setIcon(icon16);

        gridLayout->addWidget(pushButton_equal, 3, 3, 2, 1);

        pushButton_perCent = new QPushButton(Widget);
        pushButton_perCent->setObjectName("pushButton_perCent");
        pushButton_perCent->setMaximumSize(QSize(16777215, 28));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8("C:/Users/92502/Desktop/img_cal/baifenhao-copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_perCent->setIcon(icon17);

        gridLayout->addWidget(pushButton_perCent, 4, 0, 1, 1);

        pushButton_0_ = new QPushButton(Widget);
        pushButton_0_->setObjectName("pushButton_0_");
        QIcon icon18;
        icon18.addFile(QString::fromUtf8("C:/Users/92502/Desktop/img_cal/shuzi0.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_0_->setIcon(icon18);

        gridLayout->addWidget(pushButton_0_, 4, 1, 1, 1);

        pushButton_point = new QPushButton(Widget);
        pushButton_point->setObjectName("pushButton_point");
        QIcon icon19;
        icon19.addFile(QString::fromUtf8("C:/Users/92502/Desktop/img_cal/xiaoshudian.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_point->setIcon(icon19);

        gridLayout->addWidget(pushButton_point, 4, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\350\256\241\347\256\227\346\234\272", nullptr));
        pushButton_Clear->setText(QString());
        pushButton_mult->setText(QString());
        pushButton_divide->setText(QString());
        pushButton_backSpace->setText(QString());
        pushButton_7_->setText(QString());
        pushButton_8_->setText(QString());
        pushButton_9_->setText(QString());
        pushButton_sub->setText(QString());
        pushButton_4_->setText(QString());
        pushButton_5_->setText(QString());
        pushButton_6_->setText(QString());
        pushButton_add->setText(QString());
        pushButton_1_->setText(QString());
        pushButton_2_->setText(QString());
        pushButton_3_->setText(QString());
        pushButton_equal->setText(QString());
        pushButton_perCent->setText(QString());
        pushButton_0_->setText(QString());
        pushButton_point->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
