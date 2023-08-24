#include "mainwindow.h"
#include <QPlainTextEdit>
#include <QVBoxLayout>
#include <QWidget>
#include <QGuiApplication>
#include <QScreen>
#include "inputtextedit.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    qDebug() << "start";
    showEdit = new QPlainTextEdit("1 showEdit\n2 showEdit",this);
    showEdit->setReadOnly(true);
    inputEdit = new InputTextEdit("inputEdit",this);

    QVBoxLayout * layout = new QVBoxLayout;
    layout->addWidget(showEdit);
    layout->addSpacing(5);
    layout->addWidget(inputEdit);

    layout->setStretchFactor(showEdit,6);
    layout->setStretchFactor(inputEdit,1);

    QWidget * centralWidget = new QWidget(this);
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);

    QScreen * primaryScreen = QGuiApplication::primaryScreen();
    QSize screenSize = primaryScreen->size();

    int init_width = screenSize.width()*0.5;
    int init_height = screenSize.height()*0.5;
    resize(init_width,init_height);

    setWindowTitle("InFrChat");
}

MainWindow::~MainWindow()
{
}

