#include "mainwindow.h"

#include "secdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SecDialog w;
    w.show();

    return a.exec();
}
