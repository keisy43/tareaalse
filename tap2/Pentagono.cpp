/**
 * Project Untitled
 */


#include "Pentagono.h"

/**
 * Pentagono implementation
 */


/**
 * @param l
 * @param x
 * @param y
 */


Pentagono::Pentagono(float l, float x, float y) {
    _lado=l;
    setX( x );
    setY( y );

}

Pentagono::Pentagono() {

}

float Pentagono::area(){
    return ((_lado * 5)*(_lado/1.4531))/2.;
}

float Pentagono::perimetro(){
    return _lado * 5.;
}
