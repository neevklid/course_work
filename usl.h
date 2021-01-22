#pragma once
#include <QMainWindow>
#include "task_w.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <qtextstream.h>


class usl : public QMainWindow {
	Q_OBJECT
public:
	usl(QWidget* parent = nullptr);
	void ST(QString tekst, QString name);
private:
	Ui_usl gui;
private slots:
	void sfile();
	void otpravka();
	void compilation();
signals:
	void comeback(QString nazvanie, QFile& ful_test);
	void gomain(QString nazvanie);
	void dores(int k, QString name, QString kod);
};
