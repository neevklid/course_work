#include "vvod_u.h"
#include <iostream>

void vvod::addZadacha() {	
	emit comeback(mui.nazvanie->text(), mui.uslovie->toPlainText(), mui.testData->toPlainText());
	mui.uslovie->clear();
	mui.nazvanie->clear();
	QString str = QString::fromUtf8(u8"Введите тестовые данные в формате: в первой строке укажите количество тестов далее сами тесты (новый тест пишите через пропуск строки). Пример:\nN\nВходные данные\n1 1\nВыходные данные\n2\n\nВходные данные\n...");
	mui.testData->setText(str);
	this->close();
}


vvod::vvod(QWidget* parent) :
	QDialog(parent) {
	setlocale(LC_ALL, "Russian");
	mui.setupUi(this);
	connect(mui.add, SIGNAL(clicked()), this, SLOT(addZadacha()));
}