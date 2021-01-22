#pragma once
#include <QMainWindow>
#include "graphic.h"
#include <iostream>
#include "vvod_u.h"
#include <map>
#include "usl.h"
#include <string>
#include "resh.h"


class MainWindow : public QMainWindow {
	Q_OBJECT
public:
	MainWindow(QWidget* parent = nullptr);
	std::map<QString, std::vector<QString>> usloviya;
private:
	Ui_MainWindow ui;
	usl* tekstik;
	vvod* n_task = new vvod(this);
	resh* reshen;
	void dob_zadachu(QString name, QString tekst, QString test);
	void result(int k,QString name, QString kod);
	void ret(QString name, QString tekst, QString test);
	void pr(QString name, QString result);
private slots:
	void addTab(QListWidgetItem*);
	void vvod_zadachi();
	void in_out(QString name, QFile& ful_test);
	void ful(QString name);
	void show_t();
	void del();
	void slotCloseTab(int);
};