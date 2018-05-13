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

   /* for (int i = 0; i < L.numElem(); ++i) {
        x = L[i];
        cout << x << " - ";
    }

    /*
    //ListaPosArray l;
    ListaPosLSE l;
    l.iniciar();
    l.insertar(12,l.traducePos(1));
    l.insertar(27,l.traducePos(2));
    l.insertar(44,l.traducePos(3));
    l.listar();
    cout << "intercambiando..." << endl;
    l.intercambiar(l.traducePos(1), l.traducePos(3));
     l.listar();

    l.listar();
    //cout << l.recuperar(l.siguente(l.primera()));
    cout << l.recuperar(l.ultima()) << endl;
    */
    return 0;
}