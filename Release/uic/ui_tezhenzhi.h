/********************************************************************************
** Form generated from reading UI file 'tezhenzhi.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEZHENZHI_H
#define UI_TEZHENZHI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_tezhenzhiClass
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QCheckBox *check1;
    QCheckBox *check2;
    QCheckBox *check3;
    QCheckBox *check4;
    QCheckBox *check5;
    QCheckBox *check6;
    QCheckBox *check7;
    QCheckBox *check8;
    QCheckBox *check9;
    QCheckBox *check10;
    QCheckBox *check11;
    QCheckBox *check12;
    QCheckBox *check13;
    QCheckBox *check14;
    QCheckBox *check15;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *tezhenzhiClass)
    {
        if (tezhenzhiClass->objectName().isEmpty())
            tezhenzhiClass->setObjectName(QString::fromUtf8("tezhenzhiClass"));
        tezhenzhiClass->resize(350, 391);
        gridLayout = new QGridLayout(tezhenzhiClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        check1 = new QCheckBox(tezhenzhiClass);
        check1->setObjectName(QString::fromUtf8("check1"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        check1->setFont(font);

        verticalLayout->addWidget(check1);

        check2 = new QCheckBox(tezhenzhiClass);
        check2->setObjectName(QString::fromUtf8("check2"));
        check2->setFont(font);

        verticalLayout->addWidget(check2);

        check3 = new QCheckBox(tezhenzhiClass);
        check3->setObjectName(QString::fromUtf8("check3"));
        check3->setFont(font);

        verticalLayout->addWidget(check3);

        check4 = new QCheckBox(tezhenzhiClass);
        check4->setObjectName(QString::fromUtf8("check4"));
        check4->setFont(font);

        verticalLayout->addWidget(check4);

        check5 = new QCheckBox(tezhenzhiClass);
        check5->setObjectName(QString::fromUtf8("check5"));
        check5->setFont(font);

        verticalLayout->addWidget(check5);

        check6 = new QCheckBox(tezhenzhiClass);
        check6->setObjectName(QString::fromUtf8("check6"));
        check6->setFont(font);

        verticalLayout->addWidget(check6);

        check7 = new QCheckBox(tezhenzhiClass);
        check7->setObjectName(QString::fromUtf8("check7"));
        check7->setFont(font);

        verticalLayout->addWidget(check7);

        check8 = new QCheckBox(tezhenzhiClass);
        check8->setObjectName(QString::fromUtf8("check8"));
        check8->setFont(font);

        verticalLayout->addWidget(check8);

        check9 = new QCheckBox(tezhenzhiClass);
        check9->setObjectName(QString::fromUtf8("check9"));
        check9->setFont(font);

        verticalLayout->addWidget(check9);

        check10 = new QCheckBox(tezhenzhiClass);
        check10->setObjectName(QString::fromUtf8("check10"));
        check10->setFont(font);

        verticalLayout->addWidget(check10);

        check11 = new QCheckBox(tezhenzhiClass);
        check11->setObjectName(QString::fromUtf8("check11"));
        check11->setFont(font);

        verticalLayout->addWidget(check11);

        check12 = new QCheckBox(tezhenzhiClass);
        check12->setObjectName(QString::fromUtf8("check12"));
        check12->setFont(font);

        verticalLayout->addWidget(check12);

        check13 = new QCheckBox(tezhenzhiClass);
        check13->setObjectName(QString::fromUtf8("check13"));
        check13->setFont(font);

        verticalLayout->addWidget(check13);

        check14 = new QCheckBox(tezhenzhiClass);
        check14->setObjectName(QString::fromUtf8("check14"));
        check14->setFont(font);

        verticalLayout->addWidget(check14);

        check15 = new QCheckBox(tezhenzhiClass);
        check15->setObjectName(QString::fromUtf8("check15"));
        check15->setFont(font);

        verticalLayout->addWidget(check15);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton = new QPushButton(tezhenzhiClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setPointSize(10);
        pushButton->setFont(font1);

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(tezhenzhiClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);

        verticalLayout_2->addWidget(pushButton_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);


        retranslateUi(tezhenzhiClass);
        QObject::connect(pushButton, SIGNAL(clicked()), tezhenzhiClass, SLOT(SetTzz()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), tezhenzhiClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(tezhenzhiClass);
    } // setupUi

    void retranslateUi(QDialog *tezhenzhiClass)
    {
        tezhenzhiClass->setWindowTitle(QCoreApplication::translate("tezhenzhiClass", "tezhenzhi", nullptr));
        check1->setText(QCoreApplication::translate("tezhenzhiClass", "\351\207\215\345\256\232\344\275\215\345\267\262\347\273\217\345\210\206\347\246\273", nullptr));
        check2->setText(QCoreApplication::translate("tezhenzhiClass", "\345\217\257\346\211\247\350\241\214\351\225\234\345\203\217", nullptr));
        check3->setText(QCoreApplication::translate("tezhenzhiClass", "\350\241\214\345\217\267\345\267\262\345\210\206\347\246\273", nullptr));
        check4->setText(QCoreApplication::translate("tezhenzhiClass", "\346\234\254\345\234\260\347\254\246\345\217\267\345\267\262\345\210\206\347\246\273", nullptr));
        check5->setText(QCoreApplication::translate("tezhenzhiClass", "\344\270\273\345\212\250WS\344\277\256\351\245\260", nullptr));
        check6->setText(QCoreApplication::translate("tezhenzhiClass", "\347\225\231\346\204\217\345\244\247\345\234\260\345\235\200", nullptr));
        check7->setText(QCoreApplication::translate("tezhenzhiClass", "\345\255\227\350\212\202\344\277\235\347\225\231\344\270\272\344\275\216", nullptr));
        check8->setText(QCoreApplication::translate("tezhenzhiClass", "\346\234\237\346\234\233\346\230\25732\344\275\215\347\263\273\347\273\237", nullptr));
        check9->setText(QCoreApplication::translate("tezhenzhiClass", "\350\260\203\350\257\225\344\277\241\346\201\257\345\267\262\345\210\206\347\246\273", nullptr));
        check10->setText(QCoreApplication::translate("tezhenzhiClass", "\344\272\244\346\215\242\345\214\272\350\277\220\350\241\214\357\274\210\345\217\257\347\247\273\345\212\250\350\256\276\345\244\207\357\274\211", nullptr));
        check11->setText(QCoreApplication::translate("tezhenzhiClass", "\344\272\244\346\215\242\345\214\272\350\277\220\350\241\214\357\274\210\347\275\221\347\273\234\357\274\211", nullptr));
        check12->setText(QCoreApplication::translate("tezhenzhiClass", "\346\226\207\344\273\266\347\263\273\347\273\237", nullptr));
        check13->setText(QCoreApplication::translate("tezhenzhiClass", "DLL", nullptr));
        check14->setText(QCoreApplication::translate("tezhenzhiClass", "\351\235\236\345\244\232\345\244\204\347\220\206\345\231\250\347\263\273\347\273\237", nullptr));
        check15->setText(QCoreApplication::translate("tezhenzhiClass", "\345\255\227\350\212\202\344\277\235\347\225\231\344\270\272\351\253\230", nullptr));
        pushButton->setText(QCoreApplication::translate("tezhenzhiClass", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("tezhenzhiClass", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tezhenzhiClass: public Ui_tezhenzhiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEZHENZHI_H
