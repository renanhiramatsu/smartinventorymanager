#include "mainwindow.h"
#include<QGraphicsScene>
#include <QGraphicsView>
#include <QApplication>
#include <QGraphicsPixmapItem>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowTitle("Inventario Smart");


    w.show();
    return a.exec();
}
