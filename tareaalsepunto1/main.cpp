#include <iostream>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include "Pentagono.h"
#include <vector>
using namespace std;

int main(){
    vector<Geometrica*> vFig;
        Geometrica* pG=0;

    int tipo = 0;
    float radio, lado, base, altura,ladop,cf;
    ladop=radio = lado = base = altura = 0.;
    cout << "PERIMETROS Y AREAS DE FIGURAS GEOMETRICAS" << endl;
    cout << "  " << endl;
    cout << "Cuantas figuras desea hacer?" << endl;
    cin>> cf;

    for (int i = 0; i < cf; i++){
        cout << "Figura para crear Circulo(1), Cuadrado(2), Triangulo(3) o "
                "Pentagono(4)" << endl;
        cin >> tipo;
        switch (tipo) {
        case 1:
            cout << "Ingrese el radio: ";
            cin >> radio;
            pG = new Circulo( radio );
            break;
        case 2:
            cout << "Ingrese el lado: ";
            cin >> lado;
            pG = new Cuadrado( lado );
            break;
        case 3:
            cout << "Ingrese el base: ";
            cin >> base;
            cout << "ahora la altura: ";
            cin >> altura;
            pG = new Triangulo( base, altura );
            break;
        case 4:
            cout << "Ingrese el lado: ";
            cin >> ladop;
            pG = new Pentagono( ladop );
            break;
        default:
            cout << "Por favor lea bien" << endl;
            break;
        }
        vFig.push_back( pG );
    }

    cout << vFig.size() << endl;

    for (int i = 0; i < vFig.size(); i++){
        cout << "Perímetro: " << vFig.at(i)->perimetro() << " y área: " << vFig.at(i)->area() << endl;
    }

    for (int i = 0; i < vFig.size(); i++){
        delete vFig.at(i);
    }


    return 0;
}
