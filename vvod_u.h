#pragma once
#include "usloviya.h"
#include <iostream>
#include <QDialog>


class vvod : public QDialog {
	Q_OBJECT
public:
	vvod(QWidget* parent = nullptr);
private:
	Ui_vvod mui;
private slots:
	void addZadacha();
signals:
	void comeback(QString name, QString tekst, QString test);
};

