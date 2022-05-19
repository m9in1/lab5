/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mybrowser.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *input_search;
    QPushButton *searchButton;
    QPushButton *pushButton;
    mybrowser *output;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *input_ID;
    QLabel *label_3;
    QLineEdit *input_subj;
    QLabel *label_4;
    QLineEdit *input_aud;
    QLabel *label_5;
    QComboBox *box_type;
    QPushButton *button_add;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1028, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        input_search = new QLineEdit(centralwidget);
        input_search->setObjectName(QString::fromUtf8("input_search"));

        horizontalLayout->addWidget(input_search);

        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        horizontalLayout->addWidget(searchButton);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        output = new mybrowser(centralwidget);
        output->setObjectName(QString::fromUtf8("output"));
        output->setInputMethodHints(Qt::ImhNone);

        verticalLayout->addWidget(output);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        input_ID = new QLineEdit(centralwidget);
        input_ID->setObjectName(QString::fromUtf8("input_ID"));
        input_ID->setMinimumSize(QSize(99, 28));
        input_ID->setMaximumSize(QSize(12777215, 16777215));
        input_ID->setInputMethodHints(Qt::ImhPreferNumbers);

        horizontalLayout_2->addWidget(input_ID);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        input_subj = new QLineEdit(centralwidget);
        input_subj->setObjectName(QString::fromUtf8("input_subj"));

        horizontalLayout_2->addWidget(input_subj);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        input_aud = new QLineEdit(centralwidget);
        input_aud->setObjectName(QString::fromUtf8("input_aud"));

        horizontalLayout_2->addWidget(input_aud);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        box_type = new QComboBox(centralwidget);
        box_type->addItem(QString());
        box_type->addItem(QString());
        box_type->addItem(QString());
        box_type->setObjectName(QString::fromUtf8("box_type"));

        horizontalLayout_2->addWidget(box_type);

        button_add = new QPushButton(centralwidget);
        button_add->setObjectName(QString::fromUtf8("button_add"));

        horizontalLayout_2->addWidget(button_add);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1028, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(searchButton, input_ID);
        QWidget::setTabOrder(input_ID, input_aud);
        QWidget::setTabOrder(input_aud, input_subj);
        QWidget::setTabOrder(input_subj, button_add);
        QWidget::setTabOrder(button_add, output);

        retranslateUi(MainWindow);
        QObject::connect(searchButton, SIGNAL(clicked()), MainWindow, SLOT(searchLes()));
        QObject::connect(searchButton, &QPushButton::clicked, input_search, qOverload<>(&QLineEdit::clear));
        QObject::connect(button_add, SIGNAL(clicked()), MainWindow, SLOT(addLes()));
        QObject::connect(button_add, &QPushButton::clicked, input_aud, qOverload<>(&QLineEdit::clear));
        QObject::connect(button_add, &QPushButton::clicked, input_subj, qOverload<>(&QLineEdit::clear));
        QObject::connect(button_add, &QPushButton::clicked, input_ID, qOverload<>(&QLineEdit::clear));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(browse()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\320\272\320\260\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\272\320\260\320\267\320\260\321\202\321\214 \321\204\320\260\320\271\320\273...", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\220\321\203\320\264\320\270\321\202\320\276\321\200\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277", nullptr));
        box_type->setItemText(0, QCoreApplication::translate("MainWindow", "Lesson", nullptr));
        box_type->setItemText(1, QCoreApplication::translate("MainWindow", "Examenation", nullptr));
        box_type->setItemText(2, QCoreApplication::translate("MainWindow", "Lab", nullptr));

        button_add->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
