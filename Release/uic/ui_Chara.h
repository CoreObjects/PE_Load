/********************************************************************************
** Form generated from reading UI file 'Chara.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARA_H
#define UI_CHARA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CharaClass
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_0;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QLabel *label;

    void setupUi(QDialog *CharaClass)
    {
        if (CharaClass->objectName().isEmpty())
            CharaClass->setObjectName(QString::fromUtf8("CharaClass"));
        CharaClass->resize(300, 381);
        gridLayout = new QGridLayout(CharaClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton_0 = new QRadioButton(CharaClass);
        radioButton_0->setObjectName(QString::fromUtf8("radioButton_0"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        radioButton_0->setFont(font);

        verticalLayout->addWidget(radioButton_0);

        radioButton_1 = new QRadioButton(CharaClass);
        radioButton_1->setObjectName(QString::fromUtf8("radioButton_1"));
        radioButton_1->setFont(font);

        verticalLayout->addWidget(radioButton_1);

        radioButton_2 = new QRadioButton(CharaClass);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font);

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(CharaClass);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setFont(font);

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(CharaClass);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setFont(font);

        verticalLayout->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(CharaClass);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setFont(font);

        verticalLayout->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(CharaClass);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setFont(font);

        verticalLayout->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(CharaClass);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setFont(font);

        verticalLayout->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(CharaClass);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setFont(font);

        verticalLayout->addWidget(radioButton_8);

        radioButton_9 = new QRadioButton(CharaClass);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));
        radioButton_9->setFont(font);

        verticalLayout->addWidget(radioButton_9);

        radioButton_10 = new QRadioButton(CharaClass);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));
        radioButton_10->setFont(font);

        verticalLayout->addWidget(radioButton_10);

        radioButton_11 = new QRadioButton(CharaClass);
        radioButton_11->setObjectName(QString::fromUtf8("radioButton_11"));
        radioButton_11->setFont(font);

        verticalLayout->addWidget(radioButton_11);


        gridLayout->addLayout(verticalLayout, 0, 0, 4, 1);

        pushButton = new QPushButton(CharaClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(CharaClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 278, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        label = new QLabel(CharaClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        gridLayout->addWidget(label, 3, 1, 1, 1);


        retranslateUi(CharaClass);
        QObject::connect(pushButton, SIGNAL(clicked()), CharaClass, SLOT(OnOk()));
        QObject::connect(radioButton_0, SIGNAL(clicked()), CharaClass, SLOT(Change()));
        QObject::connect(radioButton_1, SIGNAL(clicked()), CharaClass, SLOT(Change()));
        QObject::connect(radioButton_2, SIGNAL(clicked()), CharaClass, SLOT(Change()));
        QObject::connect(radioButton_3, SIGNAL(clicked()), CharaClass, SLOT(Change()));
        QObject::connect(radioButton_4, SIGNAL(clicked()), CharaClass, SLOT(Change()));
        QObject::connect(radioButton_5, SIGNAL(clicked()), CharaClass, SLOT(Change()));
        QObject::connect(radioButton_6, SIGNAL(clicked()), CharaClass, SLOT(Change()));
        QObject::connect(radioButton_7, SIGNAL(clicked()), CharaClass, SLOT(Change()));
        QObject::connect(radioButton_8, SIGNAL(clicked()), CharaClass, SLOT(Change()));
        QObject::connect(radioButton_9, SIGNAL(clicked()), CharaClass, SLOT(Change()));
        QObject::connect(radioButton_10, SIGNAL(clicked()), CharaClass, SLOT(Change()));
        QObject::connect(radioButton_11, SIGNAL(clicked()), CharaClass, SLOT(Change()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), CharaClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(CharaClass);
    } // setupUi

    void retranslateUi(QDialog *CharaClass)
    {
        CharaClass->setWindowTitle(QCoreApplication::translate("CharaClass", "Chara", nullptr));
        radioButton_0->setText(QCoreApplication::translate("CharaClass", "\346\234\252\347\237\245", nullptr));
        radioButton_1->setText(QCoreApplication::translate("CharaClass", "\346\234\254\345\234\260", nullptr));
        radioButton_2->setText(QCoreApplication::translate("CharaClass", "Windows\345\233\276\345\275\242\347\225\214\351\235\242", nullptr));
        radioButton_3->setText(QCoreApplication::translate("CharaClass", "Windows\346\216\247\345\210\266\345\217\260", nullptr));
        radioButton_4->setText(QCoreApplication::translate("CharaClass", "OS/2\346\216\247\345\210\266\345\217\260", nullptr));
        radioButton_5->setText(QCoreApplication::translate("CharaClass", "\346\234\254\345\234\260windows9x\351\251\261\345\212\250\345\231\250", nullptr));
        radioButton_6->setText(QCoreApplication::translate("CharaClass", "WindowsCE", nullptr));
        radioButton_7->setText(QCoreApplication::translate("CharaClass", "EFI\345\272\224\347\224\250\347\250\213\345\272\217", nullptr));
        radioButton_8->setText(QCoreApplication::translate("CharaClass", "EFI\345\274\225\345\257\274\346\234\215\345\212\241\350\256\276\345\244\207", nullptr));
        radioButton_9->setText(QCoreApplication::translate("CharaClass", "EFI\350\277\220\350\241\214\346\227\266\351\251\261\345\212\250\345\231\250", nullptr));
        radioButton_10->setText(QCoreApplication::translate("CharaClass", "EFI\345\217\252\350\257\273\345\255\230\345\202\250\345\231\250", nullptr));
        radioButton_11->setText(QCoreApplication::translate("CharaClass", "X-Box", nullptr));
        pushButton->setText(QCoreApplication::translate("CharaClass", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CharaClass", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("CharaClass", "\345\275\223\345\211\215\345\200\274\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CharaClass: public Ui_CharaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARA_H
