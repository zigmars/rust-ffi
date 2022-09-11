// #include <QtWidgets/QPushButton>
#include "main_window.hpp"
#include <QtWidgets/QApplication>

int main(int argc, char **argv) {
  QApplication app(argc, argv);

  MainWindow mainWindow;
  mainWindow.show();
  // QPushButton button("Hello World");
  // button.show();

  app.exec();
}
