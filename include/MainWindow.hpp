#ifndef RULERMUSIC_MAINWINDOW_HPP
#define RULERMUSIC_MAINWINDOW_HPP

#include <QtGui/QScreen>
#include <QtWidgets/QMainWindow>

class MainWindow : public QMainWindow {
    Q_OBJECT
  public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
};

#endif // RULERMUSIC_MAINWINDOW_HPP