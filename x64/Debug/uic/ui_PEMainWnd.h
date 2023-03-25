/********************************************************************************
** Form generated from reading UI file 'PEMainWnd.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEMAINWND_H
#define UI_PEMAINWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PEMainWndClass
{
public:
    QHBoxLayout *horizontalLayout_24;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_16;
    QLineEdit *lineEdit_16;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_17;
    QLineEdit *lineEdit_17;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_18;
    QLineEdit *lineEdit_18;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_19;
    QLineEdit *lineEdit_19;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_20;
    QLineEdit *lineEdit_20;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_21;
    QLineEdit *lineEdit_21;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_22;
    QLineEdit *lineEdit_22;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_15;
    QLineEdit *lineEdit_15;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_23;
    QLineEdit *lineEdit_23;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_6;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_7;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_8;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_9;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QDialog *PEMainWndClass)
    {
        if (PEMainWndClass->objectName().isEmpty())
            PEMainWndClass->setObjectName(QString::fromUtf8("PEMainWndClass"));
        PEMainWndClass->resize(612, 294);
        horizontalLayout_24 = new QHBoxLayout(PEMainWndClass);
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        groupBox = new QGroupBox(PEMainWndClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(125, 0));
        lineEdit->setMaximumSize(QSize(100, 16777215));
        lineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(false);

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font1);

        horizontalLayout_16->addWidget(label_16);

        lineEdit_16 = new QLineEdit(groupBox);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        sizePolicy.setHeightForWidth(lineEdit_16->sizePolicy().hasHeightForWidth());
        lineEdit_16->setSizePolicy(sizePolicy);
        lineEdit_16->setMinimumSize(QSize(125, 0));
        lineEdit_16->setMaximumSize(QSize(100, 16777215));
        lineEdit_16->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_16->setLayoutDirection(Qt::LeftToRight);
        lineEdit_16->setAlignment(Qt::AlignCenter);
        lineEdit_16->setReadOnly(false);

        horizontalLayout_16->addWidget(lineEdit_16);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(25, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);

        horizontalLayout_16->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_16, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setMinimumSize(QSize(125, 0));
        lineEdit_2->setMaximumSize(QSize(100, 16777215));
        lineEdit_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_2->setLayoutDirection(Qt::LeftToRight);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit_2->setReadOnly(false);

        horizontalLayout_2->addWidget(lineEdit_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font1);

        horizontalLayout_17->addWidget(label_17);

        lineEdit_17 = new QLineEdit(groupBox);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));
        sizePolicy.setHeightForWidth(lineEdit_17->sizePolicy().hasHeightForWidth());
        lineEdit_17->setSizePolicy(sizePolicy);
        lineEdit_17->setMinimumSize(QSize(125, 0));
        lineEdit_17->setMaximumSize(QSize(100, 16777215));
        lineEdit_17->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_17->setLayoutDirection(Qt::LeftToRight);
        lineEdit_17->setAlignment(Qt::AlignCenter);
        lineEdit_17->setReadOnly(false);

        horizontalLayout_17->addWidget(lineEdit_17);


        gridLayout->addLayout(horizontalLayout_17, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);
        lineEdit_3->setMinimumSize(QSize(125, 0));
        lineEdit_3->setMaximumSize(QSize(100, 16777215));
        lineEdit_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_3->setLayoutDirection(Qt::LeftToRight);
        lineEdit_3->setAlignment(Qt::AlignCenter);
        lineEdit_3->setReadOnly(false);

        horizontalLayout_3->addWidget(lineEdit_3);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font1);

        horizontalLayout_18->addWidget(label_18);

        lineEdit_18 = new QLineEdit(groupBox);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));
        sizePolicy.setHeightForWidth(lineEdit_18->sizePolicy().hasHeightForWidth());
        lineEdit_18->setSizePolicy(sizePolicy);
        lineEdit_18->setMinimumSize(QSize(125, 0));
        lineEdit_18->setMaximumSize(QSize(100, 16777215));
        lineEdit_18->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_18->setLayoutDirection(Qt::LeftToRight);
        lineEdit_18->setAlignment(Qt::AlignCenter);
        lineEdit_18->setReadOnly(false);

        horizontalLayout_18->addWidget(lineEdit_18);


        gridLayout->addLayout(horizontalLayout_18, 2, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout_4->addWidget(label_4);

        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        sizePolicy.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy);
        lineEdit_4->setMinimumSize(QSize(125, 0));
        lineEdit_4->setMaximumSize(QSize(100, 16777215));
        lineEdit_4->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_4->setLayoutDirection(Qt::LeftToRight);
        lineEdit_4->setAlignment(Qt::AlignCenter);
        lineEdit_4->setReadOnly(false);

        horizontalLayout_4->addWidget(lineEdit_4);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font1);

        horizontalLayout_19->addWidget(label_19);

        lineEdit_19 = new QLineEdit(groupBox);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));
        sizePolicy.setHeightForWidth(lineEdit_19->sizePolicy().hasHeightForWidth());
        lineEdit_19->setSizePolicy(sizePolicy);
        lineEdit_19->setMinimumSize(QSize(125, 0));
        lineEdit_19->setMaximumSize(QSize(100, 16777215));
        lineEdit_19->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_19->setLayoutDirection(Qt::LeftToRight);
        lineEdit_19->setAlignment(Qt::AlignCenter);
        lineEdit_19->setReadOnly(false);

        horizontalLayout_19->addWidget(lineEdit_19);


        gridLayout->addLayout(horizontalLayout_19, 3, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        horizontalLayout_5->addWidget(label_5);

        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        sizePolicy.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy);
        lineEdit_5->setMinimumSize(QSize(125, 0));
        lineEdit_5->setMaximumSize(QSize(100, 16777215));
        lineEdit_5->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_5->setLayoutDirection(Qt::LeftToRight);
        lineEdit_5->setAlignment(Qt::AlignCenter);
        lineEdit_5->setReadOnly(false);

        horizontalLayout_5->addWidget(lineEdit_5);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font1);

        horizontalLayout_20->addWidget(label_20);

        lineEdit_20 = new QLineEdit(groupBox);
        lineEdit_20->setObjectName(QString::fromUtf8("lineEdit_20"));
        sizePolicy.setHeightForWidth(lineEdit_20->sizePolicy().hasHeightForWidth());
        lineEdit_20->setSizePolicy(sizePolicy);
        lineEdit_20->setMinimumSize(QSize(125, 0));
        lineEdit_20->setMaximumSize(QSize(100, 16777215));
        lineEdit_20->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_20->setLayoutDirection(Qt::LeftToRight);
        lineEdit_20->setAlignment(Qt::AlignCenter);
        lineEdit_20->setReadOnly(false);

        horizontalLayout_20->addWidget(lineEdit_20);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMaximumSize(QSize(25, 16777215));
        pushButton_4->setFont(font2);

        horizontalLayout_20->addWidget(pushButton_4);


        gridLayout->addLayout(horizontalLayout_20, 4, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        horizontalLayout_6->addWidget(label_6);

        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        sizePolicy.setHeightForWidth(lineEdit_6->sizePolicy().hasHeightForWidth());
        lineEdit_6->setSizePolicy(sizePolicy);
        lineEdit_6->setMinimumSize(QSize(125, 0));
        lineEdit_6->setMaximumSize(QSize(100, 16777215));
        lineEdit_6->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_6->setLayoutDirection(Qt::LeftToRight);
        lineEdit_6->setAlignment(Qt::AlignCenter);
        lineEdit_6->setReadOnly(false);

        horizontalLayout_6->addWidget(lineEdit_6);


        gridLayout->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font1);

        horizontalLayout_21->addWidget(label_21);

        lineEdit_21 = new QLineEdit(groupBox);
        lineEdit_21->setObjectName(QString::fromUtf8("lineEdit_21"));
        sizePolicy.setHeightForWidth(lineEdit_21->sizePolicy().hasHeightForWidth());
        lineEdit_21->setSizePolicy(sizePolicy);
        lineEdit_21->setMinimumSize(QSize(125, 0));
        lineEdit_21->setMaximumSize(QSize(100, 16777215));
        lineEdit_21->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_21->setLayoutDirection(Qt::LeftToRight);
        lineEdit_21->setAlignment(Qt::AlignCenter);
        lineEdit_21->setReadOnly(false);

        horizontalLayout_21->addWidget(lineEdit_21);


        gridLayout->addLayout(horizontalLayout_21, 5, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        horizontalLayout_7->addWidget(label_7);

        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        sizePolicy.setHeightForWidth(lineEdit_7->sizePolicy().hasHeightForWidth());
        lineEdit_7->setSizePolicy(sizePolicy);
        lineEdit_7->setMinimumSize(QSize(125, 0));
        lineEdit_7->setMaximumSize(QSize(100, 16777215));
        lineEdit_7->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_7->setLayoutDirection(Qt::LeftToRight);
        lineEdit_7->setAlignment(Qt::AlignCenter);
        lineEdit_7->setReadOnly(false);

        horizontalLayout_7->addWidget(lineEdit_7);


        gridLayout->addLayout(horizontalLayout_7, 6, 0, 1, 1);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font1);

        horizontalLayout_22->addWidget(label_22);

        lineEdit_22 = new QLineEdit(groupBox);
        lineEdit_22->setObjectName(QString::fromUtf8("lineEdit_22"));
        sizePolicy.setHeightForWidth(lineEdit_22->sizePolicy().hasHeightForWidth());
        lineEdit_22->setSizePolicy(sizePolicy);
        lineEdit_22->setMinimumSize(QSize(125, 0));
        lineEdit_22->setMaximumSize(QSize(100, 16777215));
        lineEdit_22->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_22->setLayoutDirection(Qt::LeftToRight);
        lineEdit_22->setAlignment(Qt::AlignCenter);
        lineEdit_22->setReadOnly(false);

        horizontalLayout_22->addWidget(lineEdit_22);


        gridLayout->addLayout(horizontalLayout_22, 6, 1, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font1);

        horizontalLayout_15->addWidget(label_15);

        lineEdit_15 = new QLineEdit(groupBox);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        sizePolicy.setHeightForWidth(lineEdit_15->sizePolicy().hasHeightForWidth());
        lineEdit_15->setSizePolicy(sizePolicy);
        lineEdit_15->setMinimumSize(QSize(125, 0));
        lineEdit_15->setMaximumSize(QSize(100, 16777215));
        lineEdit_15->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_15->setLayoutDirection(Qt::LeftToRight);
        lineEdit_15->setAlignment(Qt::AlignCenter);
        lineEdit_15->setReadOnly(false);

        horizontalLayout_15->addWidget(lineEdit_15);


        gridLayout->addLayout(horizontalLayout_15, 7, 0, 1, 1);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font1);

        horizontalLayout_23->addWidget(label_23);

        lineEdit_23 = new QLineEdit(groupBox);
        lineEdit_23->setObjectName(QString::fromUtf8("lineEdit_23"));
        sizePolicy.setHeightForWidth(lineEdit_23->sizePolicy().hasHeightForWidth());
        lineEdit_23->setSizePolicy(sizePolicy);
        lineEdit_23->setMinimumSize(QSize(125, 0));
        lineEdit_23->setMaximumSize(QSize(100, 16777215));
        lineEdit_23->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_23->setLayoutDirection(Qt::LeftToRight);
        lineEdit_23->setAlignment(Qt::AlignCenter);
        lineEdit_23->setReadOnly(false);

        horizontalLayout_23->addWidget(lineEdit_23);


        gridLayout->addLayout(horizontalLayout_23, 7, 1, 1, 1);


        horizontalLayout_24->addWidget(groupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_6 = new QSpacerItem(17, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        pushButton_5 = new QPushButton(PEMainWndClass);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        pushButton_5->setFont(font3);
        pushButton_5->setStyleSheet(QString::fromUtf8("/*QPushButton:normal\n"
"{\n"
"    color:#000000;\n"
"    background-color:rgb(40, 85, 20);\n"
"    border-style:inset;\n"
"    padding-left:4px;\n"
"    padding-top:4px;\n"
"}\n"
" */\n"
"/*\351\274\240\346\240\207\346\202\254\346\265\256\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton:hover\n"
"{\n"
"    color:rgb(255, 255, 255);\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    padding-left:8px;\n"
"    padding-top:8px;\n"
"}\n"
"/*\345\246\202\346\236\234\346\214\211\344\270\213\344\270\216\346\202\254\346\265\256\346\203\263\345\220\214\346\227\266\344\272\247\347\224\237\346\225\210\346\236\234\357\274\214hover\345\277\205\351\241\273\345\206\231\345\234\250pressed\347\232\204\345\220\216\351\235\242*/\n"
"/*\351\274\240\346\240\207\346\214\211\344\270\213\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton:pressed\n"
"{\n"
"    color:#00ff00;\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346"
                        "\241\206\351\243\216\346\240\274*/\n"
"    padding-left:6px;\n"
"    padding-top:6px;\n"
"}\n"
" \n"
"/*\351\274\240\346\240\207\344\270\215\345\217\257\347\224\250\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton:disabled\n"
"{\n"
"    color:rgb(255, 255, 255);\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    padding-left:6px;\n"
"    padding-top:6px;\n"
"}\n"
"QPushButton\n"
"{\n"
"    color:red; /*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    background-color:qlineargradient(spread:reflect, x1:0.5, y1:1, x2:0.5, y2:0.5, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(0, 0, 0, 255));/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:rgb(10, 46,112); /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206"
                        "\345\200\222\350\247\222*/\n"
"    font:bold 18px; /*\345\255\227\344\275\223*/\n"
"    font-family: \345\215\216\346\226\207\350\241\214\346\245\267;\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
" \n"
"  \n"
"\n"
" \n"
"/*\346\214\211\351\222\256\346\240\267\345\274\217*/\n"
"QPushButton:flat\n"
"{\n"
"    border:2px solid red;\n"
"}\n"
"\n"
" \n"
""));

        verticalLayout->addWidget(pushButton_5);

        verticalSpacer = new QSpacerItem(17, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_6 = new QPushButton(PEMainWndClass);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setFont(font3);
        pushButton_6->setStyleSheet(QString::fromUtf8("/*QPushButton:normal\n"
"{\n"
"    color:#000000;\n"
"    background-color:rgb(40, 85, 20);\n"
"    border-style:inset;\n"
"    padding-left:4px;\n"
"    padding-top:4px;\n"
"}\n"
" */\n"
"/*\351\274\240\346\240\207\346\202\254\346\265\256\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton:hover\n"
"{\n"
"    color:rgb(255, 255, 255);\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    padding-left:8px;\n"
"    padding-top:8px;\n"
"}\n"
"/*\345\246\202\346\236\234\346\214\211\344\270\213\344\270\216\346\202\254\346\265\256\346\203\263\345\220\214\346\227\266\344\272\247\347\224\237\346\225\210\346\236\234\357\274\214hover\345\277\205\351\241\273\345\206\231\345\234\250pressed\347\232\204\345\220\216\351\235\242*/\n"
"/*\351\274\240\346\240\207\346\214\211\344\270\213\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton:pressed\n"
"{\n"
"    color:#00ff00;\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346"
                        "\241\206\351\243\216\346\240\274*/\n"
"    padding-left:6px;\n"
"    padding-top:6px;\n"
"}\n"
" \n"
"/*\351\274\240\346\240\207\344\270\215\345\217\257\347\224\250\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton:disabled\n"
"{\n"
"    color:rgb(255, 255, 255);\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    padding-left:6px;\n"
"    padding-top:6px;\n"
"}\n"
"QPushButton\n"
"{\n"
"    color:red; /*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    background-color:qlineargradient(spread:reflect, x1:0.5, y1:1, x2:0.5, y2:0.5, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(0, 0, 0, 255));/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:rgb(10, 46,112); /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206"
                        "\345\200\222\350\247\222*/\n"
"    font:bold 20px; /*\345\255\227\344\275\223*/\n"
"    font-family: \345\215\216\346\226\207\350\241\214\346\245\267;\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
" \n"
"  \n"
"\n"
" \n"
"/*\346\214\211\351\222\256\346\240\267\345\274\217*/\n"
"QPushButton:flat\n"
"{\n"
"    border:2px solid red;\n"
"}\n"
"\n"
" \n"
""));

        verticalLayout->addWidget(pushButton_6);

        verticalSpacer_2 = new QSpacerItem(17, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton_7 = new QPushButton(PEMainWndClass);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setFont(font3);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton:hover\n"
"{\n"
"    color:rgb(255, 255, 255);\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    padding-left:8px;\n"
"    padding-top:8px;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    color:rgb(30, 255, 199);\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    padding-left:6px;\n"
"    padding-top:6px;\n"
"}\n"
" \n"
"/*\351\274\240\346\240\207\344\270\215\345\217\257\347\224\250\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton:disabled\n"
"{\n"
"    color:rgb(255, 255, 255);\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    padding-left:6px;\n"
"    padding-top:6px;\n"
"}\n"
"QPushButton\n"
"{\n"
"    color:red; /*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    background-color:qlineargradient(spread:reflect, x1:0.5, y1:1, x2:0.5, y2:0.5, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(0, 0, 0"
                        ", 255));/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:rgb(10, 46,112); /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206\345\200\222\350\247\222*/\n"
"    font:bold 20px; /*\345\255\227\344\275\223*/\n"
"    font-family: \345\215\216\346\226\207\350\241\214\346\245\267;\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
" \n"
"  \n"
"\n"
" \n"
"/*\346\214\211\351\222\256\346\240\267\345\274\217*/\n"
"QPushButton:flat\n"
"{\n"
"    border:2px solid red;\n"
"}\n"
"\n"
" \n"
""));

        verticalLayout->addWidget(pushButton_7);

        verticalSpacer_3 = new QSpacerItem(17, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        pushButton_8 = new QPushButton(PEMainWndClass);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setFont(font3);
        pushButton_8->setStyleSheet(QString::fromUtf8("/*QPushButton:normal\n"
"{\n"
"    color:#000000;\n"
"    background-color:rgb(40, 85, 20);\n"
"    border-style:inset;\n"
"    padding-left:4px;\n"
"    padding-top:4px;\n"
"}\n"
" */\n"
"/*\351\274\240\346\240\207\346\202\254\346\265\256\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton:hover\n"
"{\n"
"    color:rgb(255, 255, 255);\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    padding-left:8px;\n"
"    padding-top:8px;\n"
"}\n"
"/*\345\246\202\346\236\234\346\214\211\344\270\213\344\270\216\346\202\254\346\265\256\346\203\263\345\220\214\346\227\266\344\272\247\347\224\237\346\225\210\346\236\234\357\274\214hover\345\277\205\351\241\273\345\206\231\345\234\250pressed\347\232\204\345\220\216\351\235\242*/\n"
"/*\351\274\240\346\240\207\346\214\211\344\270\213\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton:pressed\n"
"{\n"
"    color:#00ff00;\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346"
                        "\241\206\351\243\216\346\240\274*/\n"
"    padding-left:6px;\n"
"    padding-top:6px;\n"
"}\n"
" \n"
"/*\351\274\240\346\240\207\344\270\215\345\217\257\347\224\250\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton:disabled\n"
"{\n"
"    color:rgb(255, 255, 255);\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    padding-left:6px;\n"
"    padding-top:6px;\n"
"}\n"
"QPushButton\n"
"{\n"
"    color:red; /*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    background-color:qlineargradient(spread:reflect, x1:0.5, y1:1, x2:0.5, y2:0.5, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(0, 0, 0, 255));/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:rgb(10, 46,112); /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206"
                        "\345\200\222\350\247\222*/\n"
"    font:bold 20px; /*\345\255\227\344\275\223*/\n"
"    font-family: \345\215\216\346\226\207\350\241\214\346\245\267;\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
" \n"
"  \n"
"\n"
" \n"
"/*\346\214\211\351\222\256\346\240\267\345\274\217*/\n"
"QPushButton:flat\n"
"{\n"
"    border:2px solid red;\n"
"}\n"
"\n"
" \n"
""));

        verticalLayout->addWidget(pushButton_8);

        verticalSpacer_4 = new QSpacerItem(17, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        pushButton_9 = new QPushButton(PEMainWndClass);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setFont(font3);
        pushButton_9->setStyleSheet(QString::fromUtf8("/*QPushButton:normal\n"
"{\n"
"    color:#000000;\n"
"    background-color:rgb(40, 85, 20);\n"
"    border-style:inset;\n"
"    padding-left:4px;\n"
"    padding-top:4px;\n"
"}\n"
" */\n"
"/*\351\274\240\346\240\207\346\202\254\346\265\256\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton:hover\n"
"{\n"
"    color:rgb(255, 255, 255);\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    padding-left:8px;\n"
"    padding-top:8px;\n"
"}\n"
"/*\345\246\202\346\236\234\346\214\211\344\270\213\344\270\216\346\202\254\346\265\256\346\203\263\345\220\214\346\227\266\344\272\247\347\224\237\346\225\210\346\236\234\357\274\214hover\345\277\205\351\241\273\345\206\231\345\234\250pressed\347\232\204\345\220\216\351\235\242*/\n"
"/*\351\274\240\346\240\207\346\214\211\344\270\213\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton:pressed\n"
"{\n"
"    color:#00ff00;\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346"
                        "\241\206\351\243\216\346\240\274*/\n"
"    padding-left:6px;\n"
"    padding-top:6px;\n"
"}\n"
" \n"
"/*\351\274\240\346\240\207\344\270\215\345\217\257\347\224\250\346\227\266\347\232\204\346\225\210\346\236\234*/\n"
"QPushButton:disabled\n"
"{\n"
"    color:rgb(255, 255, 255);\n"
"    border-style:inset;/*\346\224\271\345\217\230\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    padding-left:6px;\n"
"    padding-top:6px;\n"
"}\n"
"QPushButton\n"
"{\n"
"    color:red; /*\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    background-color:qlineargradient(spread:reflect, x1:0.5, y1:1, x2:0.5, y2:0.5, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(0, 0, 0, 255));/*\350\203\214\346\231\257\350\211\262*/\n"
"    border-style:outset; /*\350\276\271\346\241\206\351\243\216\346\240\274*/\n"
"    border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"    border-color:rgb(10, 46,112); /*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"    border-radius:10px; /*\350\276\271\346\241\206"
                        "\345\200\222\350\247\222*/\n"
"    font:bold 20px; /*\345\255\227\344\275\223*/\n"
"    font-family: \345\215\216\346\226\207\350\241\214\346\245\267;\n"
"    min-width:100px;/*\346\216\247\344\273\266\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    min-height:20px;/*\346\216\247\344\273\266\346\234\200\345\260\217\351\253\230\345\272\246*/\n"
"    padding:4px;/*\345\206\205\350\276\271\350\267\235*/\n"
"}\n"
" \n"
"  \n"
"\n"
" \n"
"/*\346\214\211\351\222\256\346\240\267\345\274\217*/\n"
"QPushButton:flat\n"
"{\n"
"    border:2px solid red;\n"
"}\n"
"\n"
" \n"
""));

        verticalLayout->addWidget(pushButton_9);

        verticalSpacer_5 = new QSpacerItem(14, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);


        horizontalLayout_24->addLayout(verticalLayout);


        retranslateUi(PEMainWndClass);
        QObject::connect(pushButton, SIGNAL(clicked()), PEMainWndClass, SLOT(ShowCharacteristics()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), PEMainWndClass, SLOT(slotTZZ()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), PEMainWndClass, SLOT(slot1Section()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), PEMainWndClass, SLOT(dataDir()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), PEMainWndClass, SLOT(ADDRESSCAL()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), PEMainWndClass, SLOT(reject()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), PEMainWndClass, SLOT(SAVEPE()));

        QMetaObject::connectSlotsByName(PEMainWndClass);
    } // setupUi

    void retranslateUi(QDialog *PEMainWndClass)
    {
        PEMainWndClass->setWindowTitle(QCoreApplication::translate("PEMainWndClass", "PEMainWnd", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PEMainWndClass", "\345\237\272\346\234\254PE\345\244\264\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("PEMainWndClass", "\345\205\245\345\217\243\347\202\271\357\274\232", nullptr));
        label_16->setText(QCoreApplication::translate("PEMainWndClass", "\345\255\220\347\263\273\347\273\237\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("PEMainWndClass", "...", nullptr));
        label_2->setText(QCoreApplication::translate("PEMainWndClass", "\351\225\234\345\203\217\345\237\272\345\235\200\357\274\232", nullptr));
        label_17->setText(QCoreApplication::translate("PEMainWndClass", "\345\214\272\346\256\265\346\225\260\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("PEMainWndClass", "\351\225\234\345\203\217\345\244\247\345\260\217\357\274\232", nullptr));
        label_18->setText(QCoreApplication::translate("PEMainWndClass", "\346\227\266\351\227\264\346\227\245\346\234\237\346\240\207\345\277\227\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("PEMainWndClass", "\344\273\243\347\240\201\345\237\272\345\235\200\357\274\232", nullptr));
        label_19->setText(QCoreApplication::translate("PEMainWndClass", "\351\203\250\351\246\226\345\244\247\345\260\217\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("PEMainWndClass", "\346\225\260\346\215\256\345\237\272\345\235\200\357\274\232", nullptr));
        label_20->setText(QCoreApplication::translate("PEMainWndClass", "\347\211\271\345\276\201\345\200\274\357\274\232", nullptr));
        pushButton_4->setText(QCoreApplication::translate("PEMainWndClass", "...", nullptr));
        label_6->setText(QCoreApplication::translate("PEMainWndClass", "\345\235\227\345\257\271\351\275\220\357\274\232", nullptr));
        label_21->setText(QCoreApplication::translate("PEMainWndClass", "\346\240\241\351\252\214\345\222\214\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("PEMainWndClass", "\346\226\207\344\273\266\345\235\227\345\257\271\351\275\220\357\274\232", nullptr));
        label_22->setText(QCoreApplication::translate("PEMainWndClass", "\345\217\257\351\200\211\345\244\264\345\244\247\345\260\217\357\274\232", nullptr));
        label_15->setText(QCoreApplication::translate("PEMainWndClass", "\346\240\207\345\277\227\345\255\227\357\274\232", nullptr));
        label_23->setText(QCoreApplication::translate("PEMainWndClass", "RVA\346\225\260\345\217\212\345\244\247\345\260\217\357\274\232", nullptr));
        pushButton_5->setText(QCoreApplication::translate("PEMainWndClass", "\347\241\256\345\256\232", nullptr));
        pushButton_6->setText(QCoreApplication::translate("PEMainWndClass", "\344\277\235\345\255\230", nullptr));
        pushButton_7->setText(QCoreApplication::translate("PEMainWndClass", "\345\214\272\346\256\265", nullptr));
        pushButton_8->setText(QCoreApplication::translate("PEMainWndClass", "\347\233\256\345\275\225", nullptr));
        pushButton_9->setText(QCoreApplication::translate("PEMainWndClass", "\344\275\215\347\275\256\350\256\241\347\256\227\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PEMainWndClass: public Ui_PEMainWndClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEMAINWND_H
