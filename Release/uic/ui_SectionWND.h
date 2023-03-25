/********************************************************************************
** Form generated from reading UI file 'SectionWND.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECTIONWND_H
#define UI_SECTIONWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_SectionWNDClass
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;

    void setupUi(QDialog *SectionWNDClass)
    {
        if (SectionWNDClass->objectName().isEmpty())
            SectionWNDClass->setObjectName(QString::fromUtf8("SectionWNDClass"));
        SectionWNDClass->resize(668, 222);
        gridLayout = new QGridLayout(SectionWNDClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(SectionWNDClass);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setMinimumSize(QSize(650, 0));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableWidget->setSortingEnabled(true);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);


        retranslateUi(SectionWNDClass);

        QMetaObject::connectSlotsByName(SectionWNDClass);
    } // setupUi

    void retranslateUi(QDialog *SectionWNDClass)
    {
        SectionWNDClass->setWindowTitle(QCoreApplication::translate("SectionWNDClass", "SectionWND", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SectionWNDClass: public Ui_SectionWNDClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECTIONWND_H
