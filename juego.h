#ifndef JUEGO_H
#define JUEGO_H

#include <QKeyEvent>
#include <QMainWindow>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QWidget>
#include <QGraphicsView>
#include <QList>
#include <QString>
#include <QTextStream>
#include <QGraphicsPixmapItem>
#include <QImage>
#include <QTimer>
#include <QLabel>
#include <cuerpo.h>


class juego : public QGraphicsScene
{
public:
    juego();

private:
    cuerpo *personaje;
};

#endif // JUEGO_H
