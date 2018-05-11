//
// Created by jimmy on 11/05/18.
//

#include "ListaPosArray.h"
#include <iostream>

using namespace std;

void ListaPosArray::iniciar() {
    ultimo_lleno = 0;
    primero = lista[1];
    nElementos = 0;
}

void ListaPosArray::destruir(){

}

void ListaPosArray::vaciar() {}

bool ListaPosArray::vacia() {
    if(ultimo_lleno == 0){
        return true;
    }
    else{
        return false;
    }
}

void ListaPosArray::insertar(int e, pos p) {
    if(p == ultimo_lleno+1){
        lista[p] = e;
        ultimo_lleno = p;
        nElementos++;
    }
    else {
        ultimo_lleno++;
        pos cont = ultimo_lleno;
        while(cont > p){
            lista[cont] = lista[cont-1];
            cont--;
        }
        lista[p] = e;
        nElementos++;
    }

}

void ListaPosArray::agregarAlFinal(int e) {
    ultimo_lleno++;
    lista[ultimo_lleno] = e;
    nElementos++;
}

void ListaPosArray::borrar(pos p) {}

int ListaPosArray::recuperar(pos p) {}

void ListaPosArray::modificarElem(pos, int) {}

void ListaPosArray::intercambiar(pos, pos) {}

pos ListaPosArray::primera() {}

pos ListaPosArray::ultima() {}

pos ListaPosArray::siguente(pos) {}

pos ListaPosArray::anterior(pos) {}

int ListaPosArray::numElem() {}

void ListaPosArray::listar() {
    pos cont = 1;
    while(cont <= nElementos){
        cout << lista[cont] << endl;
        cont++;
    }
}