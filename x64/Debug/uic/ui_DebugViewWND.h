/********************************************************************************
** Form generated from reading UI file 'DebugViewWND.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGVIEWWND_H
#define UI_DEBUGVIEWWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DebugViewWNDClass
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;

    void setupUi(QDialog *DebugViewWNDClass)
    {
        if (DebugViewWNDClass->objectName().isEmpty())
            DebugViewWNDClass->setObjectName(QString::fromUtf8("DebugViewWNDClass"));
        DebugViewWNDClass->resize(666, 400);
        gridLayout = new QGridLayout(DebugViewWNDClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(DebugViewWNDClass);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);


        retranslateUi(DebugViewWNDClass);

        QMetaObject::connectSlotsByName(DebugViewWNDClass);
    } // setupUi

    void retranslateUi(QDialog *DebugViewWNDClass)
    {
        DebugViewWNDClass->setWindowTitle(QCoreApplication::translate("DebugViewWNDClass", "DebugViewWND", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DebugViewWNDClass: public Ui_DebugViewWNDClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGVIEWWND_H
