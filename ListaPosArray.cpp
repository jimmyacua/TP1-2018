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
    ultimo_lleno = -99;
    primero = -99;
    nElementos = 0;
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

void ListaPosArray::borrar(pos p) {
    if(p == ultimo_lleno){
        ultimo_lleno--;
    } else{
        pos cont = p;
        while(cont <= ultimo_lleno){
            lista[cont] = lista[cont+1];
            cont++;
        }
        ultimo_lleno--;
    }
    nElementos--;
}

int ListaPosArray::recuperar(pos p) {
    return lista[p];
}

void ListaPosArray::modificarElem(pos p, int e) {
    lista[p] = e;
}

void ListaPosArray::intercambiar(pos p1, pos p2) {
    int e = lista[p1];
    lista[p1] = lista[p2];
    lista[p2] = e;
}

pos ListaPosArray::primera() {
    return primero;
}

pos ListaPosArray::ultima() {
    return ultimo_lleno;
}

pos ListaPosArray::siguente(pos p) {
    return lista[p+1];
}

pos ListaPosArray::anterior(pos p) {
    return  lista[p-1];
}

int ListaPosArray::numElem() {
    return nElementos;
}

void ListaPosArray::listar() {
    pos cont = 1;
    while(cont <= nElementos){
        cout << lista[cont] << endl;
        cont++;
    }
}