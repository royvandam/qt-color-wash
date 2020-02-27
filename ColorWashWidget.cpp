#include "ColorWashWidget.h"

#include <QPainter>
#include <QApplication>

ColorWashWidget::ColorWashWidget(QWidget *parent)
    : QOpenGLWidget(parent)
    , hue_(0)
{
    startTimer(10);
}

void ColorWashWidget::paintEvent(QPaintEvent *) {
    QPainter p(this);

    auto color = QColor();
    color.setHslF(hue_, 1.0, 0.5);

    hue_ += 0.001;
    if (hue_ > 1.0) {
        hue_ = 0;
    }

    p.fillRect(0, 0, width(), height(), color);
}

void ColorWashWidget::timerEvent(QTimerEvent *) {
    update();
}

void ColorWashWidget::keyPressEvent(QKeyEvent *) {
    QApplication::exit();
}
