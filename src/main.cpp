#include <QtWidgets/QApplication>
#include <iostream>

#include "../include/MainWindow.hpp"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QSize size = app.screens()[0]->size();
    MainWindow window;
    int width = (size.width() * 0.75) > 1400 ? size.width() * 0.75 : 1400;
    int height = width * 9 / 16;
    window.resize(width, height);
    window.show();

    return app.exec();
}