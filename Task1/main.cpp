#include <QApplication>
#include "calculatormainwindow.h"
#include "./ui_calculator.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  CalculatorMainWindow window(nullptr);
  Ui::MainWindow calculator;
  calculator.setupUi(&window);
  window.lineEdit = calculator.lineEdit;
  window.lineEdit2 = calculator.lineEdit_2;
  window.lineEdit3 = calculator.lineEdit_3;
  window.resize(250, 400);
  window.show();
  return QApplication::exec();
}
