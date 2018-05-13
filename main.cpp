#include <iostream>
//#include "ListaPosArray.h"
#include "ListaPosLSE.h"
//#include "ListaPosLDE.h"
#include "Pila.h"

using namespace std;
int main() {
    //ListaPosArray l;
    ListaPosLSE l;
    //ListaPosLDE l;
    l.iniciar();
    l.insertar(12,l.traducePos(1));
    l.insertar(27,l.traducePos(2));
    l.insertar(44,l.traducePos(3));
    l.agregarAlFinal(1);
    //l.listar();
    //cout << "intercambiando..." << endl;
    //l.intercambiar(l.traducePos(1), l.traducePos(3));
    //l.listar();
    //cout << l.recuperar(l.siguente(l.primera()));
    //cout << l.recuperar(l.anterior(l.traducePos(4))) << endl;

    Pila<pos> p;
    p.meter(l.primera());
    cout << p.tope()->elemento << endl;
    return 0;
}