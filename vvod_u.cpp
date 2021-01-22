#include "vvod_u.h"
#include <iostream>

void vvod::addZadacha() {	
	emit comeback(mui.nazvanie->text(), mui.uslovie->toPlainText(), mui.testData->toPlainText());
	mui.uslovie->clear();
	mui.nazvanie->clear();
	QString str = QString::fromUtf8(u8"������� �������� ������ � �������: � ������ ������ ������� ���������� ������ ����� ���� ����� (����� ���� ������ ����� ������� ������). ������:\nN\n������� ������\n1 1\n�������� ������\n2\n\n������� ������\n...");
	mui.testData->setText(str);
	this->close();
}


vvod::vvod(QWidget* parent) :
	QDialog(parent) {
	setlocale(LC_ALL, "Russian");
	mui.setupUi(this);
	connect(mui.add, SIGNAL(clicked()), this, SLOT(addZadacha()));
}