/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStandardwerte_festlegen;
    QAction *actionInfo;
    QAction *actionAktualisieren;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QLabel *labelInput;
    QGridLayout *gridLayout;
    QLineEdit *lineEditSeparator;
    QLabel *label_5;
    QLabel *label_2;
    QCheckBox *checkBoxDouble;
    QLabel *label;
    QCheckBox *checkBoxSafeFile;
    QLabel *label_3;
    QSpinBox *spinBoxSection;
    QLabel *labelOutput;
    QPlainTextEdit *plainTextOutput;
    QHBoxLayout *horizontalLayout;
    QPushButton *sortedButton;
    QPushButton *resetButton;
    QPlainTextEdit *plainTextInput;
    QMenuBar *menubar;
    QMenu *menuMen;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(532, 704);
        actionStandardwerte_festlegen = new QAction(MainWindow);
        actionStandardwerte_festlegen->setObjectName(QString::fromUtf8("actionStandardwerte_festlegen"));
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        actionAktualisieren = new QAction(MainWindow);
        actionAktualisieren->setObjectName(QString::fromUtf8("actionAktualisieren"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelInput = new QLabel(centralwidget);
        labelInput->setObjectName(QString::fromUtf8("labelInput"));

        gridLayout_2->addWidget(labelInput, 5, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEditSeparator = new QLineEdit(centralwidget);
        lineEditSeparator->setObjectName(QString::fromUtf8("lineEditSeparator"));

        gridLayout->addWidget(lineEditSeparator, 0, 1, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        checkBoxDouble = new QCheckBox(centralwidget);
        checkBoxDouble->setObjectName(QString::fromUtf8("checkBoxDouble"));

        gridLayout->addWidget(checkBoxDouble, 3, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        checkBoxSafeFile = new QCheckBox(centralwidget);
        checkBoxSafeFile->setObjectName(QString::fromUtf8("checkBoxSafeFile"));

        gridLayout->addWidget(checkBoxSafeFile, 4, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        spinBoxSection = new QSpinBox(centralwidget);
        spinBoxSection->setObjectName(QString::fromUtf8("spinBoxSection"));
        spinBoxSection->setMaximum(99999999);
        spinBoxSection->setValue(40);

        gridLayout->addWidget(spinBoxSection, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        labelOutput = new QLabel(centralwidget);
        labelOutput->setObjectName(QString::fromUtf8("labelOutput"));

        gridLayout_2->addWidget(labelOutput, 8, 0, 1, 1);

        plainTextOutput = new QPlainTextEdit(centralwidget);
        plainTextOutput->setObjectName(QString::fromUtf8("plainTextOutput"));

        gridLayout_2->addWidget(plainTextOutput, 9, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sortedButton = new QPushButton(centralwidget);
        sortedButton->setObjectName(QString::fromUtf8("sortedButton"));

        horizontalLayout->addWidget(sortedButton);

        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));

        horizontalLayout->addWidget(resetButton);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        plainTextInput = new QPlainTextEdit(centralwidget);
        plainTextInput->setObjectName(QString::fromUtf8("plainTextInput"));

        gridLayout_2->addWidget(plainTextInput, 7, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 532, 26));
        menuMen = new QMenu(menubar);
        menuMen->setObjectName(QString::fromUtf8("menuMen"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMen->menuAction());
        menuMen->addAction(actionStandardwerte_festlegen);
        menuMen->addAction(actionAktualisieren);
        menuMen->addSeparator();
        menuMen->addAction(actionInfo);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionStandardwerte_festlegen->setText(QCoreApplication::translate("MainWindow", "Standardwerte festlegen", nullptr));
        actionInfo->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        actionAktualisieren->setText(QCoreApplication::translate("MainWindow", "Aktualisieren", nullptr));
        labelInput->setText(QCoreApplication::translate("MainWindow", "Input", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Output in Datei speichern:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Doppelte Eintr\303\244ge entfernen: ", nullptr));
        checkBoxDouble->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Separator: ", nullptr));
        checkBoxSafeFile->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Absatz nach: ", nullptr));
        labelOutput->setText(QCoreApplication::translate("MainWindow", "Output", nullptr));
        sortedButton->setText(QCoreApplication::translate("MainWindow", "Sortieren", nullptr));
        resetButton->setText(QCoreApplication::translate("MainWindow", "Eintr\303\244ge l\303\266schen", nullptr));
        menuMen->setTitle(QCoreApplication::translate("MainWindow", "Men\303\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
