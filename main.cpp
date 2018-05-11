#include <iostream>
#include "ListaPosArray.h"

using namespace std;
int main() {
    ListaPosArray l;
    l.iniciar();
    l.insertar(1,1);
    l.insertar(2,2);
    l.insertar(44,1);
    l.agregarAlFinal(5);
    l.listar();
    cout <<  l.siguente(2);
    return 0;
}