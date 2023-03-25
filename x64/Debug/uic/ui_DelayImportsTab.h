/********************************************************************************
** Form generated from reading UI file 'DelayImportsTab.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELAYIMPORTSTAB_H
#define UI_DELAYIMPORTSTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DelayImportsTabClass
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_2;

    void setupUi(QDialog *DelayImportsTabClass)
    {
        if (DelayImportsTabClass->objectName().isEmpty())
            DelayImportsTabClass->setObjectName(QString::fromUtf8("DelayImportsTabClass"));
        DelayImportsTabClass->resize(600, 400);
        gridLayout = new QGridLayout(DelayImportsTabClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(DelayImportsTabClass);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        tableWidget_2 = new QTableWidget(DelayImportsTabClass);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));

        gridLayout->addWidget(tableWidget_2, 1, 0, 1, 1);


        retranslateUi(DelayImportsTabClass);
        QObject::connect(tableWidget, SIGNAL(cellClicked(int,int)), DelayImportsTabClass, SLOT(ShowFun(int,int)));

        QMetaObject::connectSlotsByName(DelayImportsTabClass);
    } // setupUi

    void retranslateUi(QDialog *DelayImportsTabClass)
    {
        DelayImportsTabClass->setWindowTitle(QCoreApplication::translate("DelayImportsTabClass", "DelayImportsTab", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DelayImportsTabClass: public Ui_DelayImportsTabClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELAYIMPORTSTAB_H
