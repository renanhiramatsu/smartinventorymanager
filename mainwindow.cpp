#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap map("C:\\Users\\renan\\Desktop\\smarttec\\SMART_LOGOMARCAS\\smartlogo.png");
    ui->imgViewLogo->setPixmap(map.scaled(200,80,Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_inserir_clicked()
{
  QString product_name = ui->lineEdit_produto->text();
  QString repair_name = ui->lineEdit_reparo->text();
  QString technician_name = ui->lineEdit_tecnico->text();


}


