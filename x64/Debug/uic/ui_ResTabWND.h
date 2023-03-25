/********************************************************************************
** Form generated from reading UI file 'ResTabWND.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTABWND_H
#define UI_RESTABWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_ResTabWNDClass
{
public:
    QGridLayout *gridLayout_2;
    QTreeWidget *treeWidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLabel *label_7;
    QLineEdit *lineEdit_7;

    void setupUi(QDialog *ResTabWNDClass)
    {
        if (ResTabWNDClass->objectName().isEmpty())
            ResTabWNDClass->setObjectName(QString::fromUtf8("ResTabWNDClass"));
        ResTabWNDClass->resize(432, 354);
        gridLayout_2 = new QGridLayout(ResTabWNDClass);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        treeWidget = new QTreeWidget(ResTabWNDClass);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        gridLayout_2->addWidget(treeWidget, 0, 0, 3, 1);

        groupBox = new QGroupBox(ResTabWNDClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_4->addWidget(lineEdit, 0, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 1, 0, 1, 2);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_4->addWidget(lineEdit_2, 1, 2, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(ResTabWNDClass);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout_3->addWidget(lineEdit_3, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 1, 0, 1, 1);

        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout_3->addWidget(lineEdit_4, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 1, 1, 1);

        groupBox_3 = new QGroupBox(ResTabWNDClass);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        lineEdit_5 = new QLineEdit(groupBox_3);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 0, 2, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 2);

        lineEdit_6 = new QLineEdit(groupBox_3);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout->addWidget(lineEdit_6, 1, 2, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        lineEdit_7 = new QLineEdit(groupBox_3);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        gridLayout->addWidget(lineEdit_7, 2, 1, 1, 2);


        gridLayout_2->addWidget(groupBox_3, 2, 1, 1, 1);


        retranslateUi(ResTabWNDClass);
        QObject::connect(treeWidget, SIGNAL(itemClicked(QTreeWidgetItem*,int)), ResTabWNDClass, SLOT(slotClicked(QTreeWidgetItem*,int)));

        QMetaObject::connectSlotsByName(ResTabWNDClass);
    } // setupUi

    void retranslateUi(QDialog *ResTabWNDClass)
    {
        ResTabWNDClass->setWindowTitle(QCoreApplication::translate("ResTabWNDClass", "ResTabWND", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ResTabWNDClass", "\346\240\271\347\233\256\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("ResTabWNDClass", "\345\220\215\347\247\260\346\235\241\347\233\256", nullptr));
        label_2->setText(QCoreApplication::translate("ResTabWNDClass", "ID\346\235\241\347\233\256", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ResTabWNDClass", "\351\200\211\344\270\255\347\232\204\347\233\256\345\275\225", nullptr));
        label_3->setText(QCoreApplication::translate("ResTabWNDClass", "\345\220\215\347\247\260\346\235\241\347\233\256", nullptr));
        label_4->setText(QCoreApplication::translate("ResTabWNDClass", "ID\346\235\241\347\233\256", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ResTabWNDClass", "\351\200\211\344\270\255\347\232\204\351\241\271\347\233\256", nullptr));
        label_5->setText(QCoreApplication::translate("ResTabWNDClass", "RVA", nullptr));
        label_6->setText(QCoreApplication::translate("ResTabWNDClass", "\345\201\217\347\247\273", nullptr));
        label_7->setText(QCoreApplication::translate("ResTabWNDClass", "\345\244\247\345\260\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResTabWNDClass: public Ui_ResTabWNDClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTABWND_H
