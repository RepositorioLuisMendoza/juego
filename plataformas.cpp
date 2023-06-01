#include "plataformas.h"

plataformas::plataformas(int x, int y,int w_, int h_)
{
    posx = x;
    posy = y;
    w = w_;
    h = h_;
}

plataformas::~plataformas()
{
   //delete pared;
}

QRectF plataformas::boundingRect() const
{
    return QRectF(posx,posy,w,h);
}

void plataformas::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(boundingRect());
}
