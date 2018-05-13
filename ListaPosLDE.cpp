//
// Created by jimmy on 11/05/18.
//

#include "ListaPosLDE.h"
#include <iostream>

using namespace std;

void ListaPosLDE::iniciar() {
    primero = new Pos();
    nElementos = 0;
    ultimo = primero;
}

void ListaPosLDE::destruir() {
    Pos* ant;
    Pos* temp = primero;
    while(temp != NULL){
        ant = temp;
        temp = temp->sgt;
        delete ant;
    }
}

void ListaPosLDE::vaciar() {
    Pos* ant;
    Pos* temp = primero->sgt;
    while(temp != NULL){
        ant = temp;
        temp = temp->sgt;
        delete ant;
    }
    primero = NULL;
}

bool ListaPosLDE::vacia() {
    if(nElementos == 0){
        return true;
    } else{
        return false;
    }
}

void ListaPosLDE::insertar(int e, pos p) {
    Pos *aux = new Pos(e);
    if (nElementos == 0) {
       primero = aux;
        aux->anterior = primero->anterior;
        ultimo = primero;
        nElementos++;
    } else {
        Pos* temp = primero;
        while(temp->sgt != p){
           temp = temp->sgt;
        }
        aux->sgt = p;
        aux->anterior = temp;
        temp->sgt = aux;

        nElementos++;
        //--------------------------------
        if (ultimo->sgt != NULL) {
            Pos *ult = primero;
            while (ult->sgt != NULL) {
                ult = ult->sgt;
            }
            ultimo = ult;
        }
        //-----------------------------
    }
}

void ListaPosLDE::agregarAlFinal(int e) {
    Pos* p = new Pos(e);
    ultimo->sgt = p;
    p->anterior = ultimo;
    ultimo = p;
}

void ListaPosLDE::borrar(pos p) {
    Pos* temp = p->anterior;
}

int ListaPosLDE::recuperar(pos p) {
    return p->elemento;
}

void ListaPosLDE::modificarElem(pos p, int e) {
    p->elemento = e;
}

void ListaPosLDE::intercambiar(pos p1, pos p2) {
    int temp = p2->elemento;
    p2->elemento = p1->elemento;
    p1->elemento = temp;
}

pos ListaPosLDE::primera() {
    return primero;
}

pos ListaPosLDE::siguente(pos p) {
    return p->sgt;
}

pos ListaPosLDE::anterior(pos p) {
    return p->anterior;
}

pos ListaPosLDE::ultima() {
    return ultimo;
}

int ListaPosLDE::numElem(){
    return nElementos;
}

pos ListaPosLDE::traducePos(int e) {
    Pos* p = primero;
    int contador = 1;
    while(p != NULL && contador < e){
        p = p->sgt;
        contador++;
    }
    return p;
}

void ListaPosLDE::listar() {
    Pos* p = primero;
    while(p != NULL){
        cout << p->elemento << endl;
        p = p->sgt;
    }
}