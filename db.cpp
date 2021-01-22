#include <string>
#include <QtSql>
#include <QApplication>
#include <iostream>
#include <QDebug>

int main() {
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("data.db");
	db.open();
	QSqlQuery query;	
	QString str = "CREATE TABLE zadachi ("
		"name varchar(100) PRIMARY KEY NOT NULL, "
		"uslovie varchar(10000), "
		"tests varchar(10000)"
		");";
	query.exec(str);
	//query.exec("drop table resheniya");
	str = "CREATE TABLE resheniya ("
		"id integer PRIMARY KEY NOT NULL, "
		"name varchar(100), "
		"code varchar(1000000), "
		"failed_test varchar(10000)"
		");";	
	query.exec(str);
	//query.exec("drop table succes");
	str = "create table succes ("
		"id integer primary key not null, "
		"name varchar(100), "
		"result varchar(15)"
		");";
	query.exec(str);
}