#include "ljplayermainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LJPlayerMainWindow w;
    w.show();
    return a.exec();
}
