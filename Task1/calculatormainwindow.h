#ifndef TASK37_1_CALCULATORMAINWINDOW_H
#define TASK37_1_CALCULATORMAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>

class CalculatorMainWindow : public QMainWindow {
    Q_OBJECT
public:
    QLineEdit *lineEdit = nullptr, *lineEdit2 = nullptr, *lineEdit3 = nullptr;
    explicit CalculatorMainWindow(QWidget *parent = nullptr): QMainWindow(parent) {}
public slots:
    void add() {
      int a = lineEdit->text().toInt(), b = lineEdit2->text().toInt();
      QString res;
      res.setNum(a + b);
      lineEdit3->setText(res);
    }
    void subtract() {
      int a = lineEdit->text().toInt(), b = lineEdit2->text().toInt();
      QString res;
      res.setNum(a - b);
      lineEdit3->setText(res);
    }
    void multiply() {
      int a = lineEdit->text().toInt(), b = lineEdit2->text().toInt();
      QString res;
      res.setNum(a * b);
      lineEdit3->setText(res);
    }
    void divide() {
      int a = lineEdit->text().toInt(), b = lineEdit2->text().toInt();
      QString res;
      if (b == 0) lineEdit3->setText("ERROR");
      else {
        res.setNum((double) a / (double) b);
        lineEdit3->setText(res);
      }
    }
};

#endif
