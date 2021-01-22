/********************************************************************************
** Form generated from reading UI file 'usloviya.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef USLOVIYA_H
#define USLOVIYA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_vvod
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nazvanie;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTextEdit *uslovie;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QTextEdit *testData;
    QPushButton *add;

    void setupUi(QDialog *vvod)
    {
        if (vvod->objectName().isEmpty())
            vvod->setObjectName(QStringLiteral("vvod"));
        vvod->resize(417, 362);
        verticalLayout_3 = new QVBoxLayout(vvod);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(vvod);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        nazvanie = new QLineEdit(vvod);
        nazvanie->setObjectName(QStringLiteral("nazvanie"));

        horizontalLayout->addWidget(nazvanie);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(vvod);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        uslovie = new QTextEdit(vvod);
        uslovie->setObjectName(QStringLiteral("uslovie"));

        verticalLayout->addWidget(uslovie);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(vvod);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        testData = new QTextEdit(vvod);
        testData->setObjectName(QStringLiteral("testData"));

        verticalLayout_2->addWidget(testData);


        verticalLayout_3->addLayout(verticalLayout_2);

        add = new QPushButton(vvod);
        add->setObjectName(QStringLiteral("add"));

        verticalLayout_3->addWidget(add);


        retranslateUi(vvod);

        QMetaObject::connectSlotsByName(vvod);
    } // setupUi

    void retranslateUi(QDialog *vvod)
    {
        vvod->setWindowTitle(QApplication::translate("vvod", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("vvod", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\267\320\260\320\264\320\260\321\207\320\270", Q_NULLPTR));
        label_2->setText(QApplication::translate("vvod", "\320\243\321\201\320\273\320\276\320\262\320\270\320\265 \320\267\320\260\320\264\320\260\321\207\320\270", Q_NULLPTR));
        label_3->setText(QApplication::translate("vvod", "\320\242\320\265\321\201\321\202\321\213", Q_NULLPTR));
        testData->setHtml(QApplication::translate("vvod", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\202\320\265\321\201\321\202\320\276\320\262\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \320\262 \321\204\320\276\321\200\320\274\320\260\321\202\320\265: \320\262 \320\277\320\265\321\200\320\262\320\276\320\271 \321\201\321\202\321\200\320\276\320\272\320\265 \321\203\320\272\320\260\320\266\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\202\320\265\321\201\321\202\320\276\320\262 \320\264\320\260\320\273\320\265"
                        "\320\265 \321\201\320\260\320\274\320\270 \321\202\320\265\321\201\321\202\321\213 (\320\275\320\276\320\262\321\213\320\271 \321\202\320\265\321\201\321\202 \320\277\320\270\321\210\320\270\321\202\320\265 \321\207\320\265\321\200\320\265\320\267 \320\277\321\200\320\276\320\277\321\203\321\201\320\272 \321\201\321\202\321\200\320\276\320\272\320\270). \320\237\321\200\320\270\320\274\320\265\321\200:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">N</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1 1 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-inde"
                        "nt:0px;\">2</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\321\213\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; te"
                        "xt-indent:0px;\">...</p></body></html>", Q_NULLPTR));
        add->setText(QApplication::translate("vvod", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class vvod: public Ui_vvod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // USLOVIYA_H
