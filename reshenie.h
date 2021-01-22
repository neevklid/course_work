/********************************************************************************
** Form generated from reading UI file 'reshenie.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef RESHENIE_H
#define RESHENIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_resh
{
public:
    QLabel *name;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *kod;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *resh)
    {
        if (resh->objectName().isEmpty())
            resh->setObjectName(QStringLiteral("resh"));
        resh->resize(567, 343);
        name = new QLabel(resh);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(20, 10, 71, 31));
        widget = new QWidget(resh);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 50, 351, 291));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        kod = new QTextBrowser(widget);
        kod->setObjectName(QStringLiteral("kod"));

        verticalLayout->addWidget(kod);

        widget1 = new QWidget(resh);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(377, 50, 181, 291));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        textBrowser = new QTextBrowser(widget1);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout_2->addWidget(textBrowser);


        retranslateUi(resh);

        QMetaObject::connectSlotsByName(resh);
    } // setupUi

    void retranslateUi(QDialog *resh)
    {
        resh->setWindowTitle(QApplication::translate("resh", "Dialog", Q_NULLPTR));
        name->setText(QApplication::translate("resh", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", Q_NULLPTR));
        label->setText(QApplication::translate("resh", "\320\232\320\276\320\264", Q_NULLPTR));
        label_2->setText(QApplication::translate("resh", "\320\235\320\265\320\277\321\200\320\276\320\271\320\264\320\265\320\275\320\275\321\213\320\271 \321\202\320\265\321\201\321\202", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class resh: public Ui_resh {};
} // namespace Ui

QT_END_NAMESPACE

#endif // RESHENIE_H
