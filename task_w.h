/********************************************************************************
** Form generated from reading UI file 'task_w.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef TASK_W_H
#define TASK_W_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_usl
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *nazvanie;
    QTextBrowser *uslov;
    QTabWidget *answer;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *kod;
    QPushButton *sending;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit;
    QPushButton *sendfile;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *usl)
    {
        if (usl->objectName().isEmpty())
            usl->setObjectName(QStringLiteral("usl"));
        usl->resize(800, 600);
        centralwidget = new QWidget(usl);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nazvanie = new QLabel(centralwidget);
        nazvanie->setObjectName(QStringLiteral("nazvanie"));

        verticalLayout->addWidget(nazvanie);

        uslov = new QTextBrowser(centralwidget);
        uslov->setObjectName(QStringLiteral("uslov"));

        verticalLayout->addWidget(uslov);

        answer = new QTabWidget(centralwidget);
        answer->setObjectName(QStringLiteral("answer"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        kod = new QPlainTextEdit(tab);
        kod->setObjectName(QStringLiteral("kod"));

        verticalLayout_2->addWidget(kod);

        sending = new QPushButton(tab);
        sending->setObjectName(QStringLiteral("sending"));

        verticalLayout_2->addWidget(sending);

        answer->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_3->addWidget(lineEdit);

        sendfile = new QPushButton(tab_2);
        sendfile->setObjectName(QStringLiteral("sendfile"));

        verticalLayout_3->addWidget(sendfile);

        answer->addTab(tab_2, QString());

        verticalLayout->addWidget(answer);

        usl->setCentralWidget(centralwidget);
        menubar = new QMenuBar(usl);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        usl->setMenuBar(menubar);
        statusbar = new QStatusBar(usl);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        usl->setStatusBar(statusbar);

        retranslateUi(usl);

        answer->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(usl);
    } // setupUi

    void retranslateUi(QMainWindow *usl)
    {
        usl->setWindowTitle(QApplication::translate("usl", "MainWindow", Q_NULLPTR));
        nazvanie->setText(QApplication::translate("usl", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", Q_NULLPTR));
        sending->setText(QApplication::translate("usl", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        answer->setTabText(answer->indexOf(tab), QApplication::translate("usl", "\321\202\320\265\320\272\321\201\321\202", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("usl", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \321\201\321\201\321\213\320\273\320\272\321\203 \320\275\320\260 \321\204\320\260\320\271\320\273", Q_NULLPTR));
        sendfile->setText(QApplication::translate("usl", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        answer->setTabText(answer->indexOf(tab_2), QApplication::translate("usl", "\321\204\320\260\320\271\320\273", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class usl: public Ui_usl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TASK_W_H
