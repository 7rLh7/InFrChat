#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "inputtextedit.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
signals:
    void appendText();
private:
    QPlainTextEdit * showEdit;
    InputTextEdit * inputEdit;

};
#endif // MAINWINDOW_H
