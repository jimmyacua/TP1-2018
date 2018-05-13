#include <iostream>
//#include "ListaPosArray.h"
//#include "ListaPosLSE.h"
//#include "ListaOrdArray.h"
#include "ListaOrdLSE.h"

using namespace std;
int main() {

   // ListaOrdArray L;
    ListaOrdLSE L;
    L.iniciar();
    L.insertar(10);
    L.insertar(1);
    L.insertar(8);
    L.insertar(9);
    L.insertar(5);
    L.insertar(3);
    L.insertar(4);



    L.imprimir();

    L.borrar(10);
    L.borrar(1);

    cout<<"Borrados: " << endl;


    L.imprimir();

    cout<<"siguiente 5: " << L.siguiente(5) << endl;
    cout<<"anterior 5: " << L.anterior(5) << endl;
    cout<<"numElem " << L.numElem() << endl;

    return 0;
}