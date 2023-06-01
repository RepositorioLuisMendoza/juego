#include "juego.h"

juego::juego()
{
    QBrush l;
    QImage r;
    r.load(":/imagenes/WhatsApp Image 2023-05-21 at 2.04.17 AM.jpeg");
    l.setTextureImage(r);
    setBackgroundBrush(l);
    personaje = new cuerpo(20,30,30);
    addItem(personaje);
    //personaje->select_sprite(0,0);
    paredes_();
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(actualizar()));
    timer->start(16);

}
void juego::keyPressEvent(QKeyEvent *evento)
{

    if(evento->key()==Qt::Key_D)
    {
        personaje->Move_derecha();
    }
    if(evento->key()==Qt::Key_A)
    {
        personaje->Move_izquierda();
    }
    if (evento->key()==Qt::Key_W)
    {
        personaje->Move_arriba();
    }
    if(evento->key()==Qt::Key_S)
    {
        personaje->Move_abajo();
    }
    else if (evento->key() == Qt::Key_I) {
            // Realizar movimiento de salto en el mismo punto
            qreal originalPosy = personaje->getPosy();
            personaje->Move_arriba();
            // Esperar un tiempo para simular el salto
            QThread::msleep(500);
            personaje->setPosy(originalPosy);}

}
void juego::crear_pared(int x, int y, int ancho, int alto)
{
    paredes.push_back(new plataformas(x,y,ancho,alto));
    addItem(paredes.back());
}
void juego::paredes_()
{
    crear_pared(0,0,700,34);
    crear_pared(0,0,34,233);
    crear_pared(666,0,34,233);
    crear_pared(0,398,34,700);
    crear_pared(666,400,34,300);
}
