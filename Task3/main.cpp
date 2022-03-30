#include <QApplication>
#include "remotemainwindow.h"
#include "./ui_remote.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  RemoteMainWindow window(nullptr);
  Ui::MainWindow remote;
  remote.setupUi(&window);
  window.volume = remote.lcdNumber;
  window.channel = remote.lcdNumber_2;
  window.resize(250, 680);
  window.show();
  return QApplication::exec();
}
