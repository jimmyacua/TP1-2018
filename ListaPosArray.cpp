//
// Created by jimmy on 11/05/18.
//

#include "ListaPosArray.h"
#include <iostream>

using namespace std;

void ListaPosArray::iniciar() {
    ultimo_lleno = 0;
    primero = 1;
    nElementos = 0;
}

void ListaPosArray::destruir(){
    ultimo_lleno = -99;
    primero = -99;
    nElementos = 0;
}

void ListaPosArray::vaciar() {
    primero = lista[1];
    nElementos = 0;
}

bool ListaPosArray::vacia() {
    if(ultimo_lleno == 0){
        return true;
    }
    else{
        return false;
    }
}

void ListaPosArray::insertar(int e, Pos p) {
    if(p == ultimo_lleno+1){
        lista[p] = e;
        ultimo_lleno = p;
        nElementos++;
    }
    else {
        ultimo_lleno++;
        Pos cont = ultimo_lleno;
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

void ListaPosArray::borrar(Pos p) {
    if(p == ultimo_lleno){
        ultimo_lleno--;
    } else{
        Pos cont = p;
        while(cont <= ultimo_lleno){
            lista[cont] = lista[cont+1];
            cont++;
        }
        ultimo_lleno--;
    }
    nElementos--;
}

int ListaPosArray::recuperar(Pos p) {
    return lista[p];
}

void ListaPosArray::modificarElem(Pos p, int e) {
    lista[p] = e;
}

void ListaPosArray::intercambiar(Pos p1, Pos p2) {
    int e = lista[p1];
    lista[p1] = lista[p2];
    lista[p2] = e;
}

Pos ListaPosArray::primera() {
    return primero;
}

Pos ListaPosArray::ultima() {
    return ultimo_lleno;
}

Pos ListaPosArray::siguente(Pos p) {
    return p + 1;
}

Pos ListaPosArray::anterior(Pos p) {
    return p-1;
}

int ListaPosArray::numElem() {
    return nElementos;
}

void ListaPosArray::listar() {
    Pos cont = 1;
    while(cont <= nElementos){
        cout << lista[cont] << endl;
        cont++;
    }
}

Pos ListaPosArray::traducePos(int e) {
    Pos p = this->primero;
    int cont = 1;
    while(cont < e){
        p++;
        cont++;
    }
    return p;
}