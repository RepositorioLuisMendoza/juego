#include "juego.h"

juego::juego()
{
    QBrush l;
    QImage r;
    r.load(":/imagenes/WhatsApp Image 2023-05-21 at 2.04.17 AM.jpeg");
    l.setTextureImage(r);
    setBackgroundBrush(l);
    personaje = new cuerpo(150,7,306);
    addItem(personaje);
}
