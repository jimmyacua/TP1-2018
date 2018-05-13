#include <iostream>
//#include "ListaPosArray.h"
//#include "ListaIndexadaArray.h"
#include "ListaIndexadaLSE.h"
using namespace  std;
int main() {
    ListaIndexadaLSE l;
    l.iniciar();
    l.insertar(1,1);
    l.insertar(2,2);
    //l.insertar(44,1);
    l.borrar(2);
    l.insertar(23,2);
    l.insertar(77,3);
    l.insertar(6,4);
    l.borrar(4);

    l.intercambiar(1,3);
    //l.agregarAlFinal(5);

    l.listar();
    cout<<"Cantidad de elementos: "<<l.numElem()<<endl;
    cout<<"Ultimo lleno: "<<l.recuperar(3)<<endl;
    l.vaciar();

    if(l.vacia()){
        cout<<"La lista esta vacia"<<endl;
    }
    l.insertar(40,1);
    l.destruir();
    l.iniciar();
    if(l.vacia()){
        cout<<"La lista esta vvacia"<<endl;
    }
    return 0;
}