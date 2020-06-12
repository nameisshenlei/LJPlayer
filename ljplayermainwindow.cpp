#include "ljplayermainwindow.h"
#include "ui_ljplayermainwindow.h"

LJPlayerMainWindow::LJPlayerMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LJPlayerMainWindow)
{
    ui->setupUi(this);
}

LJPlayerMainWindow::~LJPlayerMainWindow()
{
    delete ui;
}

