#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <list>
#include <math.h>
#include "Polinomio.h"
#include "Termino.h"

using namespace std;

int main(int argc,char *argv[]){

    list<float> variable;
    list<float>::iterator pos;
    int a=0,i=1;
    float resultado;
    Polinomio pol;

    ifstream archivo;
    string path;
    path=argv[1];
    archivo.open(path);

    if(archivo.is_open()){
        while(!archivo.eof()){
            getline(archivo, path);
            if(a==0){
                pol= path;
                a++;
            }
            else{
                variable.push_back( atof( path.c_str() ) );
            }
        }
    }

    archivo.close();
    pos = variable.begin();
    Termino* temp;

    for( i ; i < variable.size() ; i++ ){
        temp= pol._polCabeza;
        while ( temp != NULL ){
            resultado = resultado + ( ( temp->getC() ) * ( pow( *pos , temp->getP() ) ) );
            temp = temp->getSiguiente();
        }
        cout<<"El resultado del polinomio evaluado en el  #"<< i << ": " << resultado << endl;
        pos ++;
        resultado=0.;
    }

}
