#include "mainwindow.h"
#include <QPlainTextEdit>
#include <QVBoxLayout>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QPlainTextEdit * showEdit = new QPlainTextEdit("1 showEdit\n2 showEdit",this);
    showEdit->setReadOnly(true);
    QPlainTextEdit * inputEdit = new QPlainTextEdit("inputEdit",this);

    QVBoxLayout * layout = new QVBoxLayout;
    layout->addWidget(showEdit);
    layout->addSpacing(5);
    layout->addWidget(inputEdit);

    layout->setStretchFactor(showEdit,6);
    layout->setStretchFactor(inputEdit,1);

    QWidget * centralWidget = new QWidget(this);
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);
}

MainWindow::~MainWindow()
{
}

