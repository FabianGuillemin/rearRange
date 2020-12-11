/********************************************************************************
** Form generated from reading UI file 'dialogdefaultvalues.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDEFAULTVALUES_H
#define UI_DIALOGDEFAULTVALUES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_2;
    QCheckBox *checkBoxDouble;
    QLineEdit *lineEditSeparator;
    QSpinBox *spinBoxSection;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *lineEditPath;
    QCheckBox *checkBoxOutput;
    QDialogButtonBox *buttonBox;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        Dialog->setContextMenuPolicy(Qt::NoContextMenu);
        gridLayout_2 = new QGridLayout(Dialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        checkBoxDouble = new QCheckBox(Dialog);
        checkBoxDouble->setObjectName(QString::fromUtf8("checkBoxDouble"));

        gridLayout->addWidget(checkBoxDouble, 2, 1, 1, 1);

        lineEditSeparator = new QLineEdit(Dialog);
        lineEditSeparator->setObjectName(QString::fromUtf8("lineEditSeparator"));

        gridLayout->addWidget(lineEditSeparator, 0, 1, 1, 1);

        spinBoxSection = new QSpinBox(Dialog);
        spinBoxSection->setObjectName(QString::fromUtf8("spinBoxSection"));
        spinBoxSection->setMaximum(99999999);

        gridLayout->addWidget(spinBoxSection, 1, 1, 1, 1);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        lineEditPath = new QLineEdit(Dialog);
        lineEditPath->setObjectName(QString::fromUtf8("lineEditPath"));

        gridLayout->addWidget(lineEditPath, 4, 1, 1, 1);

        checkBoxOutput = new QCheckBox(Dialog);
        checkBoxOutput->setObjectName(QString::fromUtf8("checkBoxOutput"));

        gridLayout->addWidget(checkBoxOutput, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setEnabled(true);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(Dialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setReadOnly(true);
        textEdit->setOverwriteMode(false);

        verticalLayout->addWidget(textEdit);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Doppelte Eintr\303\244ge entfernen:", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Separator: ", nullptr));
        checkBoxDouble->setText(QString());
        label_3->setText(QCoreApplication::translate("Dialog", "Absatz nach: ", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "Pfad f\303\274r Dateispeicherort:", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "Output in Datei speichern:", nullptr));
        checkBoxOutput->setText(QString());
        textEdit->setHtml(QCoreApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt;\">Erkl\303\244rung und Beispiel &gt; &quot;Pfad f\303\274r Dateispeicherort&quot;:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt;\">Wenn das Feld leer bleibt, wird die Datei im Programmordner gespeicher.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt;\">Pfad kann gew\303\244hlt werden.</span><"
                        "span style=\" font-size:7pt; font-weight:600;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt; font-weight:600;\">Backslash am Ende ist zwingend!</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt;\">Beispiel: C:\\Users\\Musteruser\\Desktop\\</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt;\">Die Datei wird jeweils \303\274berschrieben.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDEFAULTVALUES_H
