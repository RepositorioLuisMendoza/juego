#include "cuerpo.h"
#include "juego.h"

int cuerpo::getPosx() const
{
    return posx;
}

void cuerpo::setPosx(int newPosx)
{
    posx = newPosx;
}

int cuerpo::getPosy() const
{
    return posy;
}

void cuerpo::setPosy(int newPosy)
{
    posy = newPosy;
}

cuerpo::cuerpo(int r_, int x, int y)
{
    r = r_;
    posx = x;
    posy = y;
    setPos(posx, posy);
    velocidadY = 0;
    aceleracionGravedad = 1;

//    complete = new QPixmap(":/imagenes/lobito.png");
//    image = 0;
//    muerte = 0;
//    //nuevo = complete->copy(170, 0, 24 * 1, 24 * 11);
//    *complete = complete->copy(0, 0, 140 * 6, 140 * 2);
//    setPos(150, 76);
//    //ganador = new QPixmap(":/imagenes/143bb54804da15cc3a12b9a5be4d48b9.png");
//    //perdedor = new QPixmap(":/imagenes/BMO - Game over.png");
//    actual = new QPixmap;
//    time = new QTimer;
//    //connect(time, SIGNAL(timeout()), this, SLOT(actualiza_sprite()));
//    time->start(100);
}
QRectF cuerpo::boundingRect() const
{
    return QRectF(-r,-r,2*r,2*r);
}

void cuerpo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt:: yellow);
    painter->drawEllipse(boundingRect());

}
/*
void cuerpo::select_sprite(int x, int y)
{
    *actual = complete->copy(140 * x, 140 * y, 140, 140);
    setPixmap(*actual);
}

void cuerpo::actualiza_sprite(short dir)
{
    if (image <= 2)
    {
        select_sprite(0, image + 3 * dir);
        image++;
    }
    else
    {
        image = 0;
    }
}

*/
void cuerpo::Move_arriba()
{
    posy -= 1 * velocidad;
    setPos(posx, posy);
    //actualiza_sprite(3);
}

void cuerpo::Move_abajo()
{
    posy += 1 * velocidad;
    setPos(posx, posy);
    //actualiza_sprite(1);
}

void cuerpo::Move_izquierda()
{
    posx -= 1 * velocidad;
    setPos(posx, posy);
    //actualiza_sprite(2);
}

void cuerpo::Move_derecha()
{
    posx += 1 * velocidad;
    setPos(posx, posy);
    //actualiza_sprite(0);
}

/*
void cuerpo::verificacion(cuerpo* cuerpo)
{
    if (cuerpo->getPosx() < 7 && cuerpo->getPosy() > 313)
    {
        cuerpo->setX(695);
        cuerpo->setY(318);
    }
}

void cuerpo::select_sprite_muerte(int x, int y)
{
    nuevo = complete->copy(24 * x, 24 * y, 24, 24);
    setPixmap(nuevo);
}

void cuerpo::muerte_personaje()
{
    while (muerte < 11)
    {
        select_sprite_muerte(0, muerte);
        muerte++;
    }
    muerte = 0;
}

void cuerpo::ganaste()
{
    QBrush l;
    QImage r;
    r.load(":/imagenes/143bb54804da15cc3a12b9a5be4d48b9.png");
    l.setTextureImage(r);
    QGraphicsScene* scene = this->scene();
    if (scene)
        scene->setBackgroundBrush(l);
}

void cuerpo::perdiste()
{
    QBrush l;
    QImage r;

    r.load(":/imagenes/BMO - Game over.png");
    l.setTextureImage(r);
    QGraphicsScene* scene = this->scene();
    if (scene)
    scene->setBackgroundBrush(l);
}
//void cuerpo::start_parabolic(int tipe)
//{
//    int vx[5]={0,-10,10,10,-10}, vy[2]={20,-60};

//    if(!band_parabolic){
//        band_parabolic = true;
//        px=x();
//        py=y();
//        setVx(vx[tipe]);
//        setVy(vy[tipe<=2]);
//        actualizar(4-tipe);
//        c = 1;
//        time_salto->start(10);
//    }

//}

*/
