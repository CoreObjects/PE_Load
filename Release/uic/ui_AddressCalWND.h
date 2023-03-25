/********************************************************************************
** Form generated from reading UI file 'AddressCalWND.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSCALWND_H
#define UI_ADDRESSCALWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddressCalWNDClass
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;

    void setupUi(QDialog *AddressCalWNDClass)
    {
        if (AddressCalWNDClass->objectName().isEmpty())
            AddressCalWNDClass->setObjectName(QString::fromUtf8("AddressCalWNDClass"));
        AddressCalWNDClass->resize(180, 177);
        gridLayout = new QGridLayout(AddressCalWNDClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(AddressCalWNDClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(100, 0));
        lineEdit->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(100, 0));

        gridLayout_2->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(100, 0));
        lineEdit_3->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_3, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(100, 0));
        lineEdit_4->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_4, 3, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        pushButton = new QPushButton(AddressCalWNDClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);


        retranslateUi(AddressCalWNDClass);
        QObject::connect(pushButton, SIGNAL(clicked()), AddressCalWNDClass, SLOT(CAL()));

        QMetaObject::connectSlotsByName(AddressCalWNDClass);
    } // setupUi

    void retranslateUi(QDialog *AddressCalWNDClass)
    {
        AddressCalWNDClass->setWindowTitle(QCoreApplication::translate("AddressCalWNDClass", "AddressCalWND", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AddressCalWNDClass", "\345\234\260\345\235\200", nullptr));
        label->setText(QCoreApplication::translate("AddressCalWNDClass", "VA", nullptr));
        label_2->setText(QCoreApplication::translate("AddressCalWNDClass", "RVA", nullptr));
        label_3->setText(QCoreApplication::translate("AddressCalWNDClass", "\345\201\217\347\247\273\351\207\217", nullptr));
        label_4->setText(QCoreApplication::translate("AddressCalWNDClass", "\345\214\272\346\256\265", nullptr));
        pushButton->setText(QCoreApplication::translate("AddressCalWNDClass", "\346\211\247\350\241\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddressCalWNDClass: public Ui_AddressCalWNDClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSCALWND_H
