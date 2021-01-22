#include "usl.h"
#include <iostream>
#include <qdebug.h>
#include "config.h"

void usl::ST(QString tekst, QString name) {
	gui.uslov->setText(tekst);
	gui.nazvanie->setText(name);
}

void usl::compilation() {
	emit gomain(gui.nazvanie->text());
	QFile ful_test("ful_test.txt");
	int k = 0;
	if (ful_test.open(QIODevice::ReadOnly)) {
		QString line = ful_test.readLine();
		line.chop(2);
		int times = line.toInt();
		for (int i = 0; i < times; i++) {
			emit comeback(gui.nazvanie->text(), ful_test);
			//std::system("\"C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\Common7\\Tools\\VsDevCmd.bat\" &&cl /EHsc ./tests.cpp && tests");
			std::system("\"" CL_PATH "/../../../../../../../../Common7/Tools/VsDevCmd.bat\"&cl /EHsc ./tests.cpp && tests");
			QFile outtest("outtest.txt");
			QFile output("output.txt");
			if (!output.exists() || !outtest.exists()) {
				k = 1;
				goto progress;
			}
			if (outtest.open(QIODevice::ReadOnly) && output.open(QIODevice::ReadOnly)) {
				if (output.pos() == 0) {
					k = 1;
					goto progress;
				}
				while (!output.atEnd()) {
					QString l1 = outtest.readLine();
					QString l2 = output.readLine();
					l1.chop(2);
					if (l1 != l2) {
						k = 1;
						goto progress;
					}
				}
				if (!outtest.atEnd()&&(!outtest.readLine().isEmpty())) {
					k = 1;
					goto progress;
				}
				outtest.close();
				output.close();
			}
		}
	progress:
		ful_test.close();
		QFile testing("tests.cpp");
		testing.open(QIODevice::ReadOnly);
		QString kod = testing.readAll();
		testing.close();
		emit dores(k, gui.nazvanie->text(),kod);		
	}	
}

void usl::otpravka() {
	QFile testing("tests.cpp");
	if (!testing.open(QIODevice::WriteOnly | QIODevice::Text))
		return;
	QTextStream out(&testing);
	out << gui.kod->toPlainText();
	testing.close();
	compilation();
}

void usl::sfile() {
	QFile testing(gui.lineEdit->text());
	QFile tests("tests.cpp");
	tests.remove();
	testing.copy("tests.cpp");
	testing.close();
	compilation();
}

usl::usl(QWidget* parent) :
	QMainWindow(parent) {
	setlocale(LC_ALL, "Russian");
	gui.setupUi(this);
	connect(gui.sending, SIGNAL(clicked()), this, SLOT(otpravka()));
	connect(gui.sendfile, SIGNAL(clicked()), this, SLOT(sfile()));
}