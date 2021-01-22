#pragma once
#include "reshenie.h"
#include <iostream>
#include <QDialog>


class resh : public QDialog {
	Q_OBJECT
public:
	resh(QWidget* parent = nullptr);
	void ST(int num);
private:
	Ui_resh sui;
};