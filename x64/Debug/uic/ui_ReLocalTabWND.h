/********************************************************************************
** Form generated from reading UI file 'ReLocalTabWND.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELOCALTABWND_H
#define UI_RELOCALTABWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ReLocalTabWNDClass
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_2;

    void setupUi(QDialog *ReLocalTabWNDClass)
    {
        if (ReLocalTabWNDClass->objectName().isEmpty())
            ReLocalTabWNDClass->setObjectName(QString::fromUtf8("ReLocalTabWNDClass"));
        ReLocalTabWNDClass->resize(549, 356);
        verticalLayout = new QVBoxLayout(ReLocalTabWNDClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(ReLocalTabWNDClass);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        tableWidget_2 = new QTableWidget(ReLocalTabWNDClass);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));

        verticalLayout->addWidget(tableWidget_2);


        retranslateUi(ReLocalTabWNDClass);
        QObject::connect(tableWidget, SIGNAL(cellClicked(int,int)), ReLocalTabWNDClass, SLOT(ShowSUBItem(int,int)));

        QMetaObject::connectSlotsByName(ReLocalTabWNDClass);
    } // setupUi

    void retranslateUi(QDialog *ReLocalTabWNDClass)
    {
        ReLocalTabWNDClass->setWindowTitle(QCoreApplication::translate("ReLocalTabWNDClass", "ReLocalTabWND", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReLocalTabWNDClass: public Ui_ReLocalTabWNDClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELOCALTABWND_H
