#pragma once

#include <QOpenGLWidget>

class ColorWashWidget
    : public QOpenGLWidget
{
    Q_OBJECT

public:
    ColorWashWidget(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *) override;
    void timerEvent(QTimerEvent *) override;
    void keyPressEvent(QKeyEvent *) override;

private:
    qreal hue_;
};
