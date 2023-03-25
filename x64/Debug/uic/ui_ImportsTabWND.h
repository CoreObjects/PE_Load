/********************************************************************************
** Form generated from reading UI file 'ImportsTabWND.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTSTABWND_H
#define UI_IMPORTSTABWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ImportsTabWNDClass
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_2;

    void setupUi(QDialog *ImportsTabWNDClass)
    {
        if (ImportsTabWNDClass->objectName().isEmpty())
            ImportsTabWNDClass->setObjectName(QString::fromUtf8("ImportsTabWNDClass"));
        ImportsTabWNDClass->resize(591, 333);
        verticalLayout = new QVBoxLayout(ImportsTabWNDClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(ImportsTabWNDClass);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        tableWidget_2 = new QTableWidget(ImportsTabWNDClass);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));

        verticalLayout->addWidget(tableWidget_2);


        retranslateUi(ImportsTabWNDClass);
        QObject::connect(tableWidget, SIGNAL(cellClicked(int,int)), ImportsTabWNDClass, SLOT(slot1(int,int)));

        QMetaObject::connectSlotsByName(ImportsTabWNDClass);
    } // setupUi

    void retranslateUi(QDialog *ImportsTabWNDClass)
    {
        ImportsTabWNDClass->setWindowTitle(QCoreApplication::translate("ImportsTabWNDClass", "ImportsTabWND", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImportsTabWNDClass: public Ui_ImportsTabWNDClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTSTABWND_H
