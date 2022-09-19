#include "mainwindow.h"
#include <QApplication>
#include "startdialog_hugo_naumov.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StartDialog startDialog;
    startDialog.show();
    //MainWindow w;
    //w.show();

    return a.exec();
}
