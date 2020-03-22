#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <string>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include "Pentagono.h"
#include <math.h>

int main(int argc, char *argv[])
{
     vector<Geometrica*> vFig;
      Geometrica* pG=0;
      vector<string> vnombres;
       string nombre="";

    int tf;
    float  parametro1,parametro2;
    parametro1 =  parametro2= 0.;
    ifstream archivo;
    string path;
    path=argv[1];
    archivo.open(path);
    string figuras;


    cout<<"se abrira el archivo"<<path<<endl;

    if(archivo.is_open()){            


        while(!archivo.eof()){
             getline(archivo,path);
                  figuras=path;
                  if(figuras.size()<9){
                       cout << "   " <<endl;
                      cout<<"Estas son las figuras creadas: "<<endl;

                  }
                  else{
//                      cout<<figuras<<endl;
                      tf=(int)figuras[0]-48;
//                       cout<<tf<<endl;
                      parametro1=(float)figuras[2]-48;
//                      cout<<parametro1<<endl;
                      parametro2=(float)figuras[4]-48;
//                       cout<<parametro2<<endl;
                      switch (tf) {
                      case 1:
                          nombre="Circulo";
                          pG = new Circulo( parametro1);
                          break;
                      case 2:
                          nombre="Cuadrado ";
                          pG = new Cuadrado( parametro1);
                          break;
                      case 3:
                           nombre="Triangulo ";
                          pG = new Triangulo( parametro1, parametro2 );
                          break;
                      case 4:
                          nombre="Pentagono ";
                          pG = new Pentagono( parametro1 );
                          break;
                      default:
                          cout << "Por favor lea bien" << endl;
                          break;
                      }
                      vFig.push_back( pG );
                      vnombres.push_back( nombre);
                  }
                  }
              }
    archivo.close();

    for (int i = 0; i < vFig.size(); i++){
        cout << "   " <<endl;
        cout << "la figura es un  "  << vnombres[i]<<endl;
        cout << "-Datos de la figura" <<endl;
        cout << "Perímetro: " << vFig.at(i)->perimetro() << " y área: " << vFig.at(i)->area() << endl;
    }
    //                  for (int i = 0; i < vFig.size(); i++){
    //                      delete vFig.at(i);
    //                  }


     return 0;
}






//cout << figuras[0]<< endl;
//     cout << figuras[1]<< endl;
//      cout << figuras[2]<< endl;
//       cout << figuras[3]<< endl;
//       cout << variable<< endl;





    
