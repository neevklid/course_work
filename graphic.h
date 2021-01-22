/********************************************************************************
** Form generated from reading UI file 'graphic.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef GRAPHIC_H
#define GRAPHIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QTabWidget *tasks;
    QWidget *perechen;
    QVBoxLayout *verticalLayout_2;
    QListWidget *spisok;
    QPushButton *newZadacha;
    QPushButton *DeleteZadacha;
    QWidget *tab_4;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *progress;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tasks = new QTabWidget(tab);
        tasks->setObjectName(QStringLiteral("tasks"));
        perechen = new QWidget();
        perechen->setObjectName(QStringLiteral("perechen"));
        verticalLayout_2 = new QVBoxLayout(perechen);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        spisok = new QListWidget(perechen);
        spisok->setObjectName(QStringLiteral("spisok"));

        verticalLayout_2->addWidget(spisok);

        newZadacha = new QPushButton(perechen);
        newZadacha->setObjectName(QStringLiteral("newZadacha"));

        verticalLayout_2->addWidget(newZadacha);

        DeleteZadacha = new QPushButton(perechen);
        DeleteZadacha->setObjectName(QStringLiteral("DeleteZadacha"));

        verticalLayout_2->addWidget(DeleteZadacha);

        tasks->addTab(perechen, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tasks->addTab(tab_4, QString());

        verticalLayout->addWidget(tasks);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        progress = new QTableWidget(tab_2);
        if (progress->columnCount() < 3)
            progress->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        progress->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        progress->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        progress->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        progress->setObjectName(QStringLiteral("progress"));

        verticalLayout_4->addWidget(progress);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_3->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tasks->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        newZadacha->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", Q_NULLPTR));
        DeleteZadacha->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", Q_NULLPTR));
        tasks->setTabText(tasks->indexOf(perechen), QApplication::translate("MainWindow", "\321\201\320\277\320\270\321\201\320\276\320\272 \320\267\320\260\320\264\320\260\321\207", Q_NULLPTR));
        tasks->setTabText(tasks->indexOf(tab_4), QApplication::translate("MainWindow", "Tab 2", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\270", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = progress->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\320\267\320\260\320\264\320\260\321\207\320\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = progress->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\320\262\320\265\321\200\320\264\320\270\320\272\321\202", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = progress->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\320\277\320\276\320\264\321\200\320\276\320\261\320\275\320\265\320\265", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\263\321\200\320\265\321\201\321\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GRAPHIC_H
