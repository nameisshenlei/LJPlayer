#include "ljplayermainwindow.h"

#include <QApplication>

#include <QDebug>

int main(int argc, char *argv[])
{
//主函数
    qDebug() << "begin";
    QApplication a(argc, argv);
    LJPlayerMainWindow w;
    w.show();
    return a.exec();
}
