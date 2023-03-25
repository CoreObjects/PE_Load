/********************************************************************************
** Form generated from reading UI file 'TLSWND.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TLSWND_H
#define UI_TLSWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_TLSWNDClass
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QLineEdit *lineEdit_5;
    QLabel *label_5;
    QLineEdit *lineEdit_6;
    QLabel *label_6;
    QLineEdit *lineEdit_7;

    void setupUi(QDialog *TLSWNDClass)
    {
        if (TLSWNDClass->objectName().isEmpty())
            TLSWNDClass->setObjectName(QString::fromUtf8("TLSWNDClass"));
        TLSWNDClass->resize(264, 316);
        gridLayout_2 = new QGridLayout(TLSWNDClass);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(TLSWNDClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        groupBox->setFont(font);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font1);

        gridLayout->addWidget(lineEdit_2, 0, 1, 1, 4);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 0, 1, 4);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setFont(font1);

        gridLayout->addWidget(lineEdit_3, 1, 4, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 2, 0, 1, 3);

        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setFont(font1);

        gridLayout->addWidget(lineEdit_4, 2, 3, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 3, 0, 1, 3);

        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setFont(font1);

        gridLayout->addWidget(lineEdit_5, 3, 3, 1, 2);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 4, 0, 1, 2);

        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setFont(font1);

        gridLayout->addWidget(lineEdit_6, 4, 2, 1, 3);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setFont(font1);

        gridLayout->addWidget(lineEdit_7, 5, 1, 1, 4);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(TLSWNDClass);

        QMetaObject::connectSlotsByName(TLSWNDClass);
    } // setupUi

    void retranslateUi(QDialog *TLSWNDClass)
    {
        TLSWNDClass->setWindowTitle(QCoreApplication::translate("TLSWNDClass", "TLSWND", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TLSWNDClass", "TLS\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("TLSWNDClass", "\346\225\260\346\215\256\345\235\227\345\274\200\345\247\213VA", nullptr));
        label_2->setText(QCoreApplication::translate("TLSWNDClass", "\346\225\260\346\215\256\345\235\227\347\273\223\346\235\237VA", nullptr));
        label_4->setText(QCoreApplication::translate("TLSWNDClass", "\347\264\242\345\274\225\345\217\230\351\207\217VA", nullptr));
        label_3->setText(QCoreApplication::translate("TLSWNDClass", "\345\233\236\350\260\203\350\241\250VA", nullptr));
        label_5->setText(QCoreApplication::translate("TLSWNDClass", "\345\241\253\351\233\266\345\244\247\345\260\217", nullptr));
        label_6->setText(QCoreApplication::translate("TLSWNDClass", "\347\211\271\345\276\201\345\200\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TLSWNDClass: public Ui_TLSWNDClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TLSWND_H
