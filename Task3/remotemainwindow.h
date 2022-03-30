#ifndef TASK37_3_REMOTEMAINWINDOW_H
#define TASK37_3_REMOTEMAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLCDNumber>

class RemoteMainWindow : public QMainWindow {
Q_OBJECT
public:
    QLCDNumber *channel = nullptr, *volume = nullptr;
    explicit RemoteMainWindow(QWidget *parent = nullptr): QMainWindow(parent) {}
public slots:
    void change1() { channel->display(1); }
    void change2() { channel->display(2); }
    void change3() { channel->display(3); }
    void change4() { channel->display(4); }
    void change5() { channel->display(5); }
    void change6() { channel->display(6); }
    void change7() { channel->display(7); }
    void change8() { channel->display(8); }
    void change9() { channel->display(9); }
    void change0() { channel->display(0); }
    void chaneldown() {
      if (channel->intValue() > 0) channel->display(channel->intValue() - 1);
    }
    void chanelup() {
      if (channel->intValue() < 9) channel->display(channel->intValue() + 1);
    }
    void volumedown() {
      if (volume->intValue() > 0) volume->display(volume->intValue() - 10);
    }
    void volumeup() {
      if (volume->intValue() < 100) volume->display(volume->intValue() + 10);
    }
};

#endif
