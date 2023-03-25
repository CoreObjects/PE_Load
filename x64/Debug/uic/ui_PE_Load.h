/********************************************************************************
** Form generated from reading UI file 'PE_Load.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PE_LOAD_H
#define UI_PE_LOAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PE_LoadClass
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget_Process;
    QTableWidget *tableWidget_Module;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QWidget *PE_LoadClass)
    {
        if (PE_LoadClass->objectName().isEmpty())
            PE_LoadClass->setObjectName(QString::fromUtf8("PE_LoadClass"));
        PE_LoadClass->resize(468, 582);
        gridLayout = new QGridLayout(PE_LoadClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget_Process = new QTableWidget(PE_LoadClass);
        tableWidget_Process->setObjectName(QString::fromUtf8("tableWidget_Process"));
        tableWidget_Process->setEnabled(true);
        tableWidget_Process->setMinimumSize(QSize(450, 250));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(9);
        tableWidget_Process->setFont(font);
        tableWidget_Process->setLayoutDirection(Qt::LeftToRight);
        tableWidget_Process->setGridStyle(Qt::SolidLine);
        tableWidget_Process->setSortingEnabled(true);

        gridLayout->addWidget(tableWidget_Process, 0, 0, 1, 1);

        tableWidget_Module = new QTableWidget(PE_LoadClass);
        tableWidget_Module->setObjectName(QString::fromUtf8("tableWidget_Module"));
        tableWidget_Module->setMinimumSize(QSize(400, 250));

        gridLayout->addWidget(tableWidget_Module, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(PE_LoadClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_3 = new QPushButton(PE_LoadClass);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font1);

        horizontalLayout->addWidget(pushButton_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(PE_LoadClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(0, 50));
        pushButton_2->setMaximumSize(QSize(10000000, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        pushButton_2->setFont(font2);

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(PE_LoadClass);
        QObject::connect(tableWidget_Process, SIGNAL(cellClicked(int,int)), PE_LoadClass, SLOT(SelectProcess(int,int)));
        QObject::connect(pushButton_3, SIGNAL(clicked()), PE_LoadClass, SLOT(SelectModule()));
        QObject::connect(pushButton, SIGNAL(clicked()), PE_LoadClass, SLOT(SelectFile()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), PE_LoadClass, SLOT(Quit()));

        QMetaObject::connectSlotsByName(PE_LoadClass);
    } // setupUi

    void retranslateUi(QWidget *PE_LoadClass)
    {
        PE_LoadClass->setWindowTitle(QCoreApplication::translate("PE_LoadClass", "PE_Load", nullptr));
        pushButton->setText(QCoreApplication::translate("PE_LoadClass", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        pushButton_3->setText(QCoreApplication::translate("PE_LoadClass", "\351\200\211\346\213\251\346\250\241\345\235\227", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PE_LoadClass", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PE_LoadClass: public Ui_PE_LoadClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PE_LOAD_H
