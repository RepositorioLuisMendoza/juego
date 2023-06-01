#ifndef PLATAFORMAS_H
#define PLATAFORMAS_H
#include <QGraphicsItem>
#include <QPainter>

class plataformas: public QGraphicsItem
{
    int w,h;
    int posx, posy;
public:
    plataformas(int x, int y,int w_, int h_);
    ~plataformas();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
};

#endif // PLATAFORMAS_H
