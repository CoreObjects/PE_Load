/********************************************************************************
** Form generated from reading UI file 'DataDirWnd.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATADIRWND_H
#define UI_DATADIRWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DataDirWndClass
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_28;
    QToolButton *toolButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_23;
    QToolButton *toolButton_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_25;
    QToolButton *toolButton_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_12;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_26;
    QToolButton *toolButton_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_18;
    QToolButton *toolButton_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_13;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_29;
    QToolButton *toolButton_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_27;
    QToolButton *toolButton_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_20;
    QToolButton *toolButton_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_24;
    QToolButton *toolButton_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_17;
    QToolButton *toolButton_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_21;
    QToolButton *toolButton_11;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_14;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_30;
    QToolButton *toolButton_12;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_8;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_19;
    QToolButton *toolButton_13;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_16;
    QToolButton *toolButton_14;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_16;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_22;
    QToolButton *toolButton_15;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *DataDirWndClass)
    {
        if (DataDirWndClass->objectName().isEmpty())
            DataDirWndClass->setObjectName(QString::fromUtf8("DataDirWndClass"));
        DataDirWndClass->resize(420, 507);
        gridLayout_2 = new QGridLayout(DataDirWndClass);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer);

        label_15 = new QLabel(DataDirWndClass);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(10);
        label_15->setFont(font);

        horizontalLayout_16->addWidget(label_15);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_2);

        label_17 = new QLabel(DataDirWndClass);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font);

        horizontalLayout_16->addWidget(label_17);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_16);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(DataDirWndClass);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(60, 0));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(DataDirWndClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(100, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(11);
        lineEdit->setFont(font1);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(false);

        horizontalLayout->addWidget(lineEdit);

        lineEdit_28 = new QLineEdit(DataDirWndClass);
        lineEdit_28->setObjectName(QString::fromUtf8("lineEdit_28"));
        lineEdit_28->setMinimumSize(QSize(100, 0));
        lineEdit_28->setFont(font1);
        lineEdit_28->setAlignment(Qt::AlignCenter);
        lineEdit_28->setReadOnly(false);

        horizontalLayout->addWidget(lineEdit_28);

        toolButton = new QToolButton(DataDirWndClass);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        horizontalLayout->addWidget(toolButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(DataDirWndClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(60, 0));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(DataDirWndClass);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(100, 0));
        lineEdit_2->setFont(font1);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit_2->setReadOnly(false);

        horizontalLayout_2->addWidget(lineEdit_2);

        lineEdit_23 = new QLineEdit(DataDirWndClass);
        lineEdit_23->setObjectName(QString::fromUtf8("lineEdit_23"));
        lineEdit_23->setMinimumSize(QSize(100, 0));
        lineEdit_23->setFont(font1);
        lineEdit_23->setAlignment(Qt::AlignCenter);
        lineEdit_23->setReadOnly(false);

        horizontalLayout_2->addWidget(lineEdit_23);

        toolButton_2 = new QToolButton(DataDirWndClass);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));

        horizontalLayout_2->addWidget(toolButton_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(DataDirWndClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(60, 0));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(DataDirWndClass);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(100, 0));
        lineEdit_3->setFont(font1);
        lineEdit_3->setAlignment(Qt::AlignCenter);
        lineEdit_3->setReadOnly(false);

        horizontalLayout_3->addWidget(lineEdit_3);

        lineEdit_25 = new QLineEdit(DataDirWndClass);
        lineEdit_25->setObjectName(QString::fromUtf8("lineEdit_25"));
        lineEdit_25->setMinimumSize(QSize(100, 0));
        lineEdit_25->setFont(font1);
        lineEdit_25->setAlignment(Qt::AlignCenter);
        lineEdit_25->setReadOnly(false);

        horizontalLayout_3->addWidget(lineEdit_25);

        toolButton_3 = new QToolButton(DataDirWndClass);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));

        horizontalLayout_3->addWidget(toolButton_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_12 = new QLabel(DataDirWndClass);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(label_12);

        lineEdit_4 = new QLineEdit(DataDirWndClass);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(100, 0));
        lineEdit_4->setFont(font1);
        lineEdit_4->setAlignment(Qt::AlignCenter);
        lineEdit_4->setReadOnly(false);

        horizontalLayout_4->addWidget(lineEdit_4);

        lineEdit_26 = new QLineEdit(DataDirWndClass);
        lineEdit_26->setObjectName(QString::fromUtf8("lineEdit_26"));
        lineEdit_26->setMinimumSize(QSize(100, 0));
        lineEdit_26->setFont(font1);
        lineEdit_26->setAlignment(Qt::AlignCenter);
        lineEdit_26->setReadOnly(false);

        horizontalLayout_4->addWidget(lineEdit_26);

        toolButton_4 = new QToolButton(DataDirWndClass);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));

        horizontalLayout_4->addWidget(toolButton_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(DataDirWndClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(60, 0));

        horizontalLayout_5->addWidget(label_4);

        lineEdit_15 = new QLineEdit(DataDirWndClass);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setMinimumSize(QSize(100, 0));
        lineEdit_15->setFont(font1);
        lineEdit_15->setAlignment(Qt::AlignCenter);
        lineEdit_15->setReadOnly(false);

        horizontalLayout_5->addWidget(lineEdit_15);

        lineEdit_18 = new QLineEdit(DataDirWndClass);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));
        lineEdit_18->setMinimumSize(QSize(100, 0));
        lineEdit_18->setFont(font1);
        lineEdit_18->setAlignment(Qt::AlignCenter);
        lineEdit_18->setReadOnly(false);

        horizontalLayout_5->addWidget(lineEdit_18);

        toolButton_5 = new QToolButton(DataDirWndClass);
        toolButton_5->setObjectName(QString::fromUtf8("toolButton_5"));

        horizontalLayout_5->addWidget(toolButton_5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_13 = new QLabel(DataDirWndClass);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setMinimumSize(QSize(60, 0));

        horizontalLayout_6->addWidget(label_13);

        lineEdit_10 = new QLineEdit(DataDirWndClass);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setMinimumSize(QSize(100, 0));
        lineEdit_10->setFont(font1);
        lineEdit_10->setAlignment(Qt::AlignCenter);
        lineEdit_10->setReadOnly(false);

        horizontalLayout_6->addWidget(lineEdit_10);

        lineEdit_29 = new QLineEdit(DataDirWndClass);
        lineEdit_29->setObjectName(QString::fromUtf8("lineEdit_29"));
        lineEdit_29->setMinimumSize(QSize(100, 0));
        lineEdit_29->setFont(font1);
        lineEdit_29->setAlignment(Qt::AlignCenter);
        lineEdit_29->setReadOnly(false);

        horizontalLayout_6->addWidget(lineEdit_29);

        toolButton_6 = new QToolButton(DataDirWndClass);
        toolButton_6->setObjectName(QString::fromUtf8("toolButton_6"));

        horizontalLayout_6->addWidget(toolButton_6);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(DataDirWndClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(60, 0));

        horizontalLayout_7->addWidget(label_6);

        lineEdit_8 = new QLineEdit(DataDirWndClass);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setMinimumSize(QSize(100, 0));
        lineEdit_8->setFont(font1);
        lineEdit_8->setAlignment(Qt::AlignCenter);
        lineEdit_8->setReadOnly(false);

        horizontalLayout_7->addWidget(lineEdit_8);

        lineEdit_27 = new QLineEdit(DataDirWndClass);
        lineEdit_27->setObjectName(QString::fromUtf8("lineEdit_27"));
        lineEdit_27->setMinimumSize(QSize(100, 0));
        lineEdit_27->setFont(font1);
        lineEdit_27->setAlignment(Qt::AlignCenter);
        lineEdit_27->setReadOnly(false);

        horizontalLayout_7->addWidget(lineEdit_27);

        toolButton_7 = new QToolButton(DataDirWndClass);
        toolButton_7->setObjectName(QString::fromUtf8("toolButton_7"));

        horizontalLayout_7->addWidget(toolButton_7);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(DataDirWndClass);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setMinimumSize(QSize(60, 0));

        horizontalLayout_8->addWidget(label_9);

        lineEdit_12 = new QLineEdit(DataDirWndClass);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setMinimumSize(QSize(100, 0));
        lineEdit_12->setFont(font1);
        lineEdit_12->setAlignment(Qt::AlignCenter);
        lineEdit_12->setReadOnly(false);

        horizontalLayout_8->addWidget(lineEdit_12);

        lineEdit_20 = new QLineEdit(DataDirWndClass);
        lineEdit_20->setObjectName(QString::fromUtf8("lineEdit_20"));
        lineEdit_20->setMinimumSize(QSize(100, 0));
        lineEdit_20->setFont(font1);
        lineEdit_20->setAlignment(Qt::AlignCenter);
        lineEdit_20->setReadOnly(false);

        horizontalLayout_8->addWidget(lineEdit_20);

        toolButton_8 = new QToolButton(DataDirWndClass);
        toolButton_8->setObjectName(QString::fromUtf8("toolButton_8"));

        horizontalLayout_8->addWidget(toolButton_8);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_5 = new QLabel(DataDirWndClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(60, 0));

        horizontalLayout_9->addWidget(label_5);

        lineEdit_5 = new QLineEdit(DataDirWndClass);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(100, 0));
        lineEdit_5->setFont(font1);
        lineEdit_5->setAlignment(Qt::AlignCenter);
        lineEdit_5->setReadOnly(false);

        horizontalLayout_9->addWidget(lineEdit_5);

        lineEdit_24 = new QLineEdit(DataDirWndClass);
        lineEdit_24->setObjectName(QString::fromUtf8("lineEdit_24"));
        lineEdit_24->setMinimumSize(QSize(100, 0));
        lineEdit_24->setFont(font1);
        lineEdit_24->setAlignment(Qt::AlignCenter);
        lineEdit_24->setReadOnly(false);

        horizontalLayout_9->addWidget(lineEdit_24);

        toolButton_9 = new QToolButton(DataDirWndClass);
        toolButton_9->setObjectName(QString::fromUtf8("toolButton_9"));

        horizontalLayout_9->addWidget(toolButton_9);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_7 = new QLabel(DataDirWndClass);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(60, 0));

        horizontalLayout_10->addWidget(label_7);

        lineEdit_6 = new QLineEdit(DataDirWndClass);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_6->sizePolicy().hasHeightForWidth());
        lineEdit_6->setSizePolicy(sizePolicy1);
        lineEdit_6->setMinimumSize(QSize(100, 0));
        lineEdit_6->setFont(font1);
        lineEdit_6->setAlignment(Qt::AlignCenter);
        lineEdit_6->setReadOnly(false);

        horizontalLayout_10->addWidget(lineEdit_6);

        lineEdit_17 = new QLineEdit(DataDirWndClass);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));
        lineEdit_17->setMinimumSize(QSize(100, 0));
        lineEdit_17->setFont(font1);
        lineEdit_17->setAlignment(Qt::AlignCenter);
        lineEdit_17->setReadOnly(false);

        horizontalLayout_10->addWidget(lineEdit_17);

        toolButton_10 = new QToolButton(DataDirWndClass);
        toolButton_10->setObjectName(QString::fromUtf8("toolButton_10"));

        horizontalLayout_10->addWidget(toolButton_10);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_11 = new QLabel(DataDirWndClass);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setMinimumSize(QSize(60, 0));

        horizontalLayout_11->addWidget(label_11);

        lineEdit_13 = new QLineEdit(DataDirWndClass);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setMinimumSize(QSize(100, 0));
        lineEdit_13->setFont(font1);
        lineEdit_13->setAlignment(Qt::AlignCenter);
        lineEdit_13->setReadOnly(false);

        horizontalLayout_11->addWidget(lineEdit_13);

        lineEdit_21 = new QLineEdit(DataDirWndClass);
        lineEdit_21->setObjectName(QString::fromUtf8("lineEdit_21"));
        lineEdit_21->setMinimumSize(QSize(100, 0));
        lineEdit_21->setFont(font1);
        lineEdit_21->setAlignment(Qt::AlignCenter);
        lineEdit_21->setReadOnly(false);

        horizontalLayout_11->addWidget(lineEdit_21);

        toolButton_11 = new QToolButton(DataDirWndClass);
        toolButton_11->setObjectName(QString::fromUtf8("toolButton_11"));

        horizontalLayout_11->addWidget(toolButton_11);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_14 = new QLabel(DataDirWndClass);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        label_14->setMinimumSize(QSize(60, 0));

        horizontalLayout_12->addWidget(label_14);

        lineEdit_7 = new QLineEdit(DataDirWndClass);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setMinimumSize(QSize(100, 0));
        lineEdit_7->setFont(font1);
        lineEdit_7->setAlignment(Qt::AlignCenter);
        lineEdit_7->setReadOnly(false);

        horizontalLayout_12->addWidget(lineEdit_7);

        lineEdit_30 = new QLineEdit(DataDirWndClass);
        lineEdit_30->setObjectName(QString::fromUtf8("lineEdit_30"));
        lineEdit_30->setMinimumSize(QSize(100, 0));
        lineEdit_30->setFont(font1);
        lineEdit_30->setAlignment(Qt::AlignCenter);
        lineEdit_30->setReadOnly(false);

        horizontalLayout_12->addWidget(lineEdit_30);

        toolButton_12 = new QToolButton(DataDirWndClass);
        toolButton_12->setObjectName(QString::fromUtf8("toolButton_12"));

        horizontalLayout_12->addWidget(toolButton_12);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_8 = new QLabel(DataDirWndClass);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setMinimumSize(QSize(60, 0));

        horizontalLayout_13->addWidget(label_8);

        lineEdit_14 = new QLineEdit(DataDirWndClass);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setMinimumSize(QSize(100, 0));
        lineEdit_14->setFont(font1);
        lineEdit_14->setAlignment(Qt::AlignCenter);
        lineEdit_14->setReadOnly(false);

        horizontalLayout_13->addWidget(lineEdit_14);

        lineEdit_19 = new QLineEdit(DataDirWndClass);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));
        lineEdit_19->setMinimumSize(QSize(100, 0));
        lineEdit_19->setFont(font1);
        lineEdit_19->setAlignment(Qt::AlignCenter);
        lineEdit_19->setReadOnly(false);

        horizontalLayout_13->addWidget(lineEdit_19);

        toolButton_13 = new QToolButton(DataDirWndClass);
        toolButton_13->setObjectName(QString::fromUtf8("toolButton_13"));

        horizontalLayout_13->addWidget(toolButton_13);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_10 = new QLabel(DataDirWndClass);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setMinimumSize(QSize(60, 0));

        horizontalLayout_14->addWidget(label_10);

        lineEdit_11 = new QLineEdit(DataDirWndClass);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setMinimumSize(QSize(100, 0));
        lineEdit_11->setFont(font1);
        lineEdit_11->setAlignment(Qt::AlignCenter);
        lineEdit_11->setReadOnly(false);

        horizontalLayout_14->addWidget(lineEdit_11);

        lineEdit_16 = new QLineEdit(DataDirWndClass);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setMinimumSize(QSize(100, 0));
        lineEdit_16->setFont(font1);
        lineEdit_16->setAlignment(Qt::AlignCenter);
        lineEdit_16->setReadOnly(false);

        horizontalLayout_14->addWidget(lineEdit_16);

        toolButton_14 = new QToolButton(DataDirWndClass);
        toolButton_14->setObjectName(QString::fromUtf8("toolButton_14"));

        horizontalLayout_14->addWidget(toolButton_14);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_16 = new QLabel(DataDirWndClass);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);
        label_16->setMinimumSize(QSize(60, 0));

        horizontalLayout_15->addWidget(label_16);

        lineEdit_9 = new QLineEdit(DataDirWndClass);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setMinimumSize(QSize(100, 0));
        lineEdit_9->setFont(font1);
        lineEdit_9->setAlignment(Qt::AlignCenter);
        lineEdit_9->setReadOnly(false);

        horizontalLayout_15->addWidget(lineEdit_9);

        lineEdit_22 = new QLineEdit(DataDirWndClass);
        lineEdit_22->setObjectName(QString::fromUtf8("lineEdit_22"));
        lineEdit_22->setMinimumSize(QSize(100, 0));
        lineEdit_22->setFont(font1);
        lineEdit_22->setAlignment(Qt::AlignCenter);
        lineEdit_22->setReadOnly(false);

        horizontalLayout_15->addWidget(lineEdit_22);

        toolButton_15 = new QToolButton(DataDirWndClass);
        toolButton_15->setObjectName(QString::fromUtf8("toolButton_15"));

        horizontalLayout_15->addWidget(toolButton_15);


        verticalLayout->addLayout(horizontalLayout_15);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(DataDirWndClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(DataDirWndClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);


        retranslateUi(DataDirWndClass);
        QObject::connect(toolButton, SIGNAL(clicked()), DataDirWndClass, SLOT(EXPORTTAB()));
        QObject::connect(toolButton_2, SIGNAL(clicked()), DataDirWndClass, SLOT(IMPORTSTAB()));
        QObject::connect(toolButton_3, SIGNAL(clicked()), DataDirWndClass, SLOT(RESTAB()));
        QObject::connect(toolButton_6, SIGNAL(clicked()), DataDirWndClass, SLOT(RELOCAL()));
        QObject::connect(toolButton_7, SIGNAL(clicked()), DataDirWndClass, SLOT(DEBUGINFO()));
        QObject::connect(toolButton_10, SIGNAL(clicked()), DataDirWndClass, SLOT(TLS()));
        QObject::connect(toolButton_14, SIGNAL(clicked()), DataDirWndClass, SLOT(DelayIMPORTStab()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), DataDirWndClass, SLOT(SAVE()));
        QObject::connect(pushButton, SIGNAL(clicked()), DataDirWndClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(DataDirWndClass);
    } // setupUi

    void retranslateUi(QDialog *DataDirWndClass)
    {
        DataDirWndClass->setWindowTitle(QCoreApplication::translate("DataDirWndClass", "DataDirWnd", nullptr));
        label_15->setText(QCoreApplication::translate("DataDirWndClass", "RVA", nullptr));
        label_17->setText(QCoreApplication::translate("DataDirWndClass", "\345\244\247\345\260\217", nullptr));
        label->setText(QCoreApplication::translate("DataDirWndClass", "\345\257\274\345\207\272\350\241\250", nullptr));
        toolButton->setText(QCoreApplication::translate("DataDirWndClass", "...", nullptr));
        label_2->setText(QCoreApplication::translate("DataDirWndClass", "\345\257\274\345\205\245\350\241\250", nullptr));
        toolButton_2->setText(QCoreApplication::translate("DataDirWndClass", "...", nullptr));
        label_3->setText(QCoreApplication::translate("DataDirWndClass", "\350\265\204\346\272\220\350\241\250", nullptr));
        toolButton_3->setText(QCoreApplication::translate("DataDirWndClass", "...", nullptr));
        label_12->setText(QCoreApplication::translate("DataDirWndClass", "\344\276\213\345\244\226", nullptr));
        toolButton_4->setText(QCoreApplication::translate("DataDirWndClass", "...", nullptr));
        label_4->setText(QCoreApplication::translate("DataDirWndClass", "\345\256\211\345\205\250", nullptr));
        toolButton_5->setText(QCoreApplication::translate("DataDirWndClass", "...", nullptr));
        label_13->setText(QCoreApplication::translate("DataDirWndClass", "\351\207\215\345\256\232\344\275\215\350\241\250", nullptr));
        toolButton_6->setText(QCoreApplication::translate("DataDirWndClass", "...", nullptr));
        label_6->setText(QCoreApplication::translate("DataDirWndClass", "\350\260\203\350\257\225", nullptr));
        toolButton_7->setText(QCoreApplication::translate("DataDirWndClass", "...", nullptr));
        label_9->setText(QCoreApplication::translate("DataDirWndClass", "\347\211\210\346\235\203", nullptr));
        toolButton_8->setText(QCoreApplication::translate("DataDirWndClass", "...", nullptr));
        label_5->setText(QCoreApplication::translate("DataDirWndClass", "\345\205\250\345\261\200\346\214\207\351\222\210", nullptr));
        toolButton_9->setText(QCoreApplication::translate("DataDirWndClass", "...", nullptr));
        label_7->setText(QCoreApplication::translate("DataDirWndClass", "TLS\350\241\250", nullptr));
        toolButton_10->setText(QCoreApplication::translate("DataDirWndClass", "...", nullptr));
        label_11->setText(QCoreApplication::translate("DataDirWndClass", "\350\275\275\345\205\245\351\205\215\347\275\256", nullptr));
        toolButton_11->setText(QCoreApplication::translate("DataDirWndClass", "...", nullptr));
        label_14->setText(QCoreApplication::translate("DataDirWndClass", "\350\276\223\345\205\245\350\214\203\345\233\264", nullptr));
        toolButton_12->setText(QCoreApplication::translate("DataDirWndClass", "...", nullptr));
        label_8->setText(QCoreApplication::translate("DataDirWndClass", "IAT", nullptr));
        toolButton_13->setText(QCoreApplication::translate("DataDirWndClass", "...", nullptr));
        label_10->setText(QCoreApplication::translate("DataDirWndClass", "\345\273\266\350\277\237\345\257\274\345\205\245\350\241\250", nullptr));
        toolButton_14->setText(QCoreApplication::translate("DataDirWndClass", "...", nullptr));
        label_16->setText(QCoreApplication::translate("DataDirWndClass", "COM", nullptr));
        toolButton_15->setText(QCoreApplication::translate("DataDirWndClass", "...", nullptr));
        pushButton->setText(QCoreApplication::translate("DataDirWndClass", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DataDirWndClass", "\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataDirWndClass: public Ui_DataDirWndClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATADIRWND_H
