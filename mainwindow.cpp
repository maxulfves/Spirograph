#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Clear canvas
void MainWindow::on_pushButton_2_clicked()
{
    this->ui->canvas->clear();
}

void MainWindow::on_inner_radius_valueChanged(double arg1)
{
    this->ui->canvas->setRadius(arg1);
}
