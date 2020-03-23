/**
 * Project Untitled
 */


#include "Termino.h"
//#define NULL __null;

/**
 * Termino implementation
 */
Termino::Termino(float c, int p){
    _coeficiente = c;
    _potencia = p;
    _siguiente = NULL ;
}

Termino::Termino(Termino& t){
    _coeficiente = t._coeficiente;
    _potencia = t._potencia;
    _siguiente = NULL;
}
