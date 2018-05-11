//
// Created by jimmy on 11/05/18.
//

#include "ListaPosLSE.h"

void ListaPosLSE::iniciar() {
//    primero = new Pos();
    nElementos = 0;
    ultimo = primero;
}

void ListaPosLSE::destruir() {}

void ListaPosLSE::vaciar() {}

bool ListaPosLSE::vacia() {
    if(nElementos == 0){
        return true;
    } else{
        return false;
    }
}

void ListaPosLSE::insertar(int e, pos p) {

}

void ListaPosLSE::borrar(pos) {}

void ListaPosLSE::agregarAlFinal(int) {}

void ListaPosLSE::intercambiar(pos, pos) {}

int ListaPosLSE::recuperar(pos) {}

void ListaPosLSE::modificarElem(pos, int) {}

pos ListaPosLSE::primera() {}

pos ListaPosLSE::siguente(pos) {}

pos ListaPosLSE::anterior(pos) {}

pos ListaPosLSE::ultima() {}