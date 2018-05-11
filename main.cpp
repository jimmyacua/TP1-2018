#include <iostream>
#include "ListaPosArray.h"
int main() {
    ListaPosArray l;
    l.iniciar();
    l.insertar(1,1);
    l.insertar(2,2);
    l.insertar(44,1);
    l.agregarAlFinal(5);
    l.listar();
    return 0;
}