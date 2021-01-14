#ifndef WHEEL_H
#define WHEEL_H

#include <QPainter>
#include <QVector2D>
#include <QVector3D>
#include <QMatrix4x4>

class Wheel
{
public:
    Wheel();
    int radius = 200 / 6;


    void paint(QPainter *, QImage*);
    QVector3D bob = QVector3D(0, 1, 0);
    QVector3D bob2 = QVector3D(0, 0.5, 0);


private:
    float t = 0.0f;


};

#endif // WHEEL_H
