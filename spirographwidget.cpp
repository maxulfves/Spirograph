#include "spirographwidget.h"

SpirographWidget::SpirographWidget(QWidget *parent) : QWidget(parent)
{

    this->clear();

}

void SpirographWidget::clear()
{
    for(int i = 0; i < image.width(); i++){
        for(int j = 0; j < image.height(); j++){
            image.setPixel(i, j, qRgb(255, 255, 255));
        }
    }
}

void SpirographWidget::setRadius(double value)
{
    clear();
    this->wheel.radius = value * 200/2;
}

int t = 0;
void SpirographWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);

    QTransform translationTransform(1, 0, 0, 1, width()/2, height()/2);


    painter.setTransform(translationTransform);

    int radiusO = 200;

    QRectF target = QRectF(-100, -100, 200, 200);
    QRectF source = image.rect();

    painter.drawImage(target, image, source);

    painter.drawEllipse(QPoint(0, 0), radiusO/2, radiusO/2);

    wheel.paint(&painter, &image);

    t += 1;

    update();


}

