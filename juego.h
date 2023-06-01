#ifndef JUEGO_H
#define JUEGO_H
#include <QThread>
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
#include <plataformas.h>


class juego : public QGraphicsScene
{
public:
    juego();
    void paredes_ ();

protected:
    void keyPressEvent(QKeyEvent *evento);


private:
    QTimer* timer;
    cuerpo *personaje;
    QList <plataformas*> paredes;

    void crear_pared(int x, int y, int ancho, int alto);
};

#endif // JUEGO_H
