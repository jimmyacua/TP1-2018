#include <iostream>
//#include "ListaPosArray.h"
#include "ListaPosLSE.h"

using namespace std;
int main() {
    //ListaPosArray l;
    ListaPosLSE l;
    l.iniciar();
    l.insertar(12,l.traducePos(1));
    l.insertar(27,l.traducePos(2));
    l.insertar(44,l.traducePos(3));
    l.listar();
    cout << "borrando" << endl;
    l.borrar(l.traducePos(3));
    //l.agregarAlFinal(5);

     l.listar();

    return 0;
}