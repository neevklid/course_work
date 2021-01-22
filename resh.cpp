#include "resh.h"
#include <iostream>
#include <QtSql>

void resh::ST(int num) {
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("data.db");
	db.open();
	QSqlQuery query;
	query.prepare("select name, code, failed_test from resheniya where id=?");
	query.addBindValue(num);
	query.exec();
	while (query.next()) {
		sui.name ->setText(query.value(0).toString());
		sui.kod->setText(query.value(1).toString());
		sui.textBrowser->setText(query.value(2).toString());
	}
}

resh::resh(QWidget* parent) :
	QDialog(parent) {
	setlocale(LC_ALL, "Russian");
	sui.setupUi(this);
}