/**
 * Project Untitled
 */


#ifndef _POLINOMIO_H
#define _POLINOMIO_H
#include "Termino.h"
#include <string>
#include <iostream>

using namespace std;

class Polinomio {
  public:
    Polinomio();
    Polinomio(string pol);
    //Polinomio(Polinomio& pol);
    ~Polinomio();

    Polinomio& operator =(const Polinomio& p);
    Polinomio operator +(Polinomio& p);
    Polinomio operator -(Polinomio& p);
    Polinomio operator *(Polinomio& p);
    Polinomio operator /(float f);

    friend ostream& operator << (ostream& stream, Polinomio& p);

    bool    borrar();
    bool    redefinir(string pol);
    int     getOrden();
    char    getVariable();
    void    setVariable(char value);
    void    nuevoTermino(float c, int p);
    void    simplificar();
    bool    ordenar();
    string  getString() const;
    Termino*    _polCabeza;

  private:
    int         _orden;
    char        _variable;

};

#endif //_POLINOMIO_H
