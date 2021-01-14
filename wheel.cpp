#include "wheel.h"

Wheel::Wheel()
{

}

void Wheel::Wheel::paint(QPainter *painter, QImage* image)
{

    float al = t / 200.0f;
    float be = -t / radius;

    QTransform transform;// = painter->transform();
    transform.rotateRadians(al, Qt::ZAxis);

    QTransform inner_trans;// = painter->transform();
    inner_trans.rotateRadians(be, Qt::ZAxis);


    QVector3D center = transform * QVector3D(0, 200/2 - radius, 0);
    painter->drawEllipse(center.toPoint(), radius, radius);
    float fact = image->width() / 200;


    //PEN
    QVector3D direction = inner_trans * transform * QVector3D(0, 0.7, 0);
    auto ve = center + direction * radius;
    image->setPixel( ve.x() * fact + image->width()/2, ve.y() * fact + image->width()/2, qRgb(0, 0, 0));

    painter->drawLine(center.toPoint(), ve.toPoint());

    t += 0.1;
}
