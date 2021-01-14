#ifndef SPIROGRAPHWIDGET_H
#define SPIROGRAPHWIDGET_H

#include <QWidget>
#include <QPainter>
#include <wheel.h>

class SpirographWidget : public QWidget
{
    Q_OBJECT
public:
    SpirographWidget();

    explicit SpirographWidget(QWidget *parent);

    void clear();

    void setRadius(double value);

protected:
    void paintEvent(QPaintEvent*) override;
private:
    Wheel wheel;

    QImage image = QImage(200, 200, QImage::Format_RGB32);

};


#endif // SPIROGRAPHWIDGET_H
