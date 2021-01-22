#include "main_window.h"
#include <iostream>
#include <QtSql>

void MainWindow::addTab(QListWidgetItem*) {
	tekstik = new usl();
	connect(tekstik, &usl::gomain, this,&MainWindow::ful);
	connect(tekstik, &usl::comeback, this, &MainWindow::in_out);
	connect(tekstik, &usl::dores, this, &MainWindow::result);
	ui.tasks->addTab(tekstik, ui.spisok->currentItem()->text());
	tekstik->ST(usloviya[ui.spisok->currentItem()->text()][0], ui.spisok->currentItem()->text());
}

void MainWindow::slotCloseTab(int index)
{
	if(index!=0)
	  delete ui.tasks->widget(index);
}

void MainWindow::del() {
	usloviya.erase(ui.spisok->currentItem()->text());
	QSqlQuery query;
	query.prepare("delete from zadachi where name=?");
	query.addBindValue((ui.spisok->currentItem()->text()));
	query.exec();
	ui.spisok->takeItem(ui.spisok->currentRow());
}


void MainWindow::vvod_zadachi() {
	n_task->show();
}

void MainWindow::show_t() {
	QPushButton* btn = qobject_cast<QPushButton*>(sender());
	if (!btn) return;
	QVariant var = btn->property("row");
	qDebug() << var;
	if (!var.isValid()) return;
	reshen = new resh(this);
	reshen->ST(var.toInt());
	reshen->show();
}

void MainWindow::dob_zadachu(QString name, QString tekst, QString test) { 
	ui.spisok->addItem(name);
	std::vector<QString> task;
	task.push_back(tekst);
	task.push_back(test);
	usloviya[name] = task;
	QSqlQuery query;
	query.prepare("insert into zadachi (name, uslovie, tests) "
		"values (:name, :uslovie, :tests)");
	query.bindValue(":name", name);
	query.bindValue(":uslovie", tekst);
	query.bindValue(":tests", test);
	query.exec();
}

void MainWindow::result(int k,QString name, QString kod) {
	int row = ui.progress->rowCount();	
	ui.progress->insertRow(row);
	QTableWidgetItem* newItem = new QTableWidgetItem(name);
	ui.progress->setItem(row, 0, newItem);
	QPushButton* btn = new QPushButton();
	btn->setText("learn more...");
	btn->setProperty("row", row);
	connect(btn, SIGNAL(clicked()),this, SLOT(show_t()));
	ui.progress->setCellWidget(row, 2, btn);
	ui.progress->setEditTriggers(QAbstractItemView::NoEditTriggers);
	if (k == 0) {
		QTableWidgetItem* ok = new QTableWidgetItem("ok");
		ui.progress->setItem(row, 1, ok);
	}
	else {
		QTableWidgetItem* failed = new QTableWidgetItem("test-failed");
		ui.progress->setItem(row, 1, failed);
	}
	QSqlQuery query;
	query.prepare("insert into resheniya (id, name, code, failed_test) "
		"values (:id, :name, :code, :failed_test)");
	query.bindValue(":name", name);
	query.bindValue(":id", row);
	query.bindValue(":code", kod);
	if (k == 0) {
		query.bindValue(":failed_test", "completed");
	}
	else {
		QFile f_t("input.txt");
		f_t.open(QIODevice::ReadOnly);
		QString fail = f_t.readAll();
		f_t.close();
		query.bindValue(":failed_test", fail);
	}
	query.exec();
	query.prepare("insert into succes (id, name, result) "
		"values (:id, :name, :result)");
	query.bindValue(":id", row);
	query.bindValue(":name", name);
	if (k == 0) {
		query.bindValue(":result", "ok");
	}
	else {
		query.bindValue(":result", "test-failed");
	}
	query.exec();
}

void MainWindow::pr(QString name, QString result) {
	int row = ui.progress->rowCount();
	ui.progress->insertRow(row);
	QTableWidgetItem* newItem = new QTableWidgetItem(name);
	ui.progress->setItem(row, 0, newItem);
	newItem = new QTableWidgetItem(result);
	ui.progress->setItem(row, 1, newItem);
	QPushButton* btn = new QPushButton();
	btn->setText("learn more...");
	btn->setProperty("row", row);
	connect(btn, SIGNAL(clicked()),this, SLOT(show_t()));
	ui.progress->setCellWidget(row, 2, btn);
	ui.progress->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void MainWindow::ful(QString name){
	QFile ful_test("ful_test.txt");
	if (!ful_test.open(QIODevice::WriteOnly | QIODevice::Text))
		return;
	QTextStream out(&ful_test);
	out << usloviya[name][1] + "\n";
	ful_test.close();
}

void MainWindow::in_out(QString name,QFile& ful_test) {
	
	QFile input("input.txt");
	QFile outtest("outtest.txt");
	QString line;
	QTextStream iout(&input);
	QTextStream oout(&outtest);
	if (input.open(QIODevice::WriteOnly | QIODevice::Text) && outtest.open(QIODevice::WriteOnly | QIODevice::Text)) {
		line = ful_test.readLine();
		line.chop(2);
		if (line == "Входные данные") {
			line = ful_test.readLine();
			line.chop(2);
			while (line != "Выходные данные") {
				iout << line + "\n";
				line = ful_test.readLine();
				line.chop(2);
			}
			input.close();
			while (!ful_test.atEnd() && !line.isEmpty())
			{		
				line = ful_test.readLine();
				line.chop(2);
				if (!line.isEmpty()) {
					oout << line + "\n";
				}
			}
		}
		outtest.close();
	}		
}

void MainWindow::ret(QString name, QString tekst, QString test) {
	ui.spisok->addItem(name);
	std::vector<QString> task;
	task.push_back(tekst);
	task.push_back(test);
	usloviya[name] = task;
}

MainWindow::MainWindow(QWidget* parent) :
	QMainWindow(parent) {
	setlocale(LC_ALL, "Russian");
	ui.setupUi(this);
	ui.tasks->removeTab(1);
	ui.tasks->setTabsClosable(true);
	connect(ui.tasks, SIGNAL(tabCloseRequested(int)), this, SLOT(slotCloseTab(int)));
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("data.db");
	db.open();
	QSqlQuery query;
	query.exec("select name, uslovie, tests from zadachi");
	while (query.next()) {
		ret(query.value(0).toString(), query.value(1).toString(), query.value(2).toString());
	}
	query.exec("select id, name, result from succes");
	while (query.next()) {
		pr(query.value(1).toString(), query.value(2).toString());
	}
	connect(ui.spisok, SIGNAL(itemDoubleClicked(QListWidgetItem*)), this, SLOT(addTab(QListWidgetItem*)));
	connect(ui.newZadacha, SIGNAL(clicked()), this, SLOT(vvod_zadachi()));
	connect(n_task, &vvod::comeback, this, &MainWindow::dob_zadachu);
	connect(ui.DeleteZadacha, SIGNAL(clicked()), this, SLOT(del()));
}
