// CMakeProject1.cpp : Defines the entry point for the application.
//
#include <QApplication>
#include "main_window.h"
#include "CMakeProject1.h"

using namespace std;

int main(int argc, char* argv[]) {
  QApplication app(argc, argv);
  MainWindow window;
  window.show();
  return app.exec();
}
