#include <iostream>
//#include "ListaPosArray.h"
//#include "ListaPosLSE.h"
#include "ListaOrdArray.h"

using namespace std;
int main() {

    ListaOrdArray L;
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

    cout<<"siguiente 9: " << L.siguiente(9) << endl;
    cout<<"anterior 3: " << L.anterior(3) << endl;

    return 0;
}