#include <QApplication>
#include "ColorWashWidget.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    ColorWashWidget widget;
    widget.setMinimumSize(1280, 720);
    widget.showFullScreen();

    return a.exec();
}
