//
// Created by jimmy on 11/05/18.
//

#include <iostream>
#include "ListaPosLSE.h"

using namespace std;

void ListaPosLSE::iniciar() {
    primero = new Pos();
    nElementos = 0;
    ultimo = primero;
}

void ListaPosLSE::destruir() {
    Pos* anterior;
    Pos* temp = primero;
    while(temp != 0){
        anterior = temp;
        temp = temp->sgt;
        delete anterior;
    }
}

void ListaPosLSE::vaciar() {
    Pos* anterior;
    Pos* temp = primero->sgt;
    while(temp != 0){
        anterior = temp;
        temp = temp->sgt;
        delete anterior;
    }
    primero->sgt = 0;
    nElementos = 0;
}

bool ListaPosLSE::vacia() {
    if(nElementos == 0){
        return true;
    } else{
        return false;
    }
}

void ListaPosLSE::insertar(int e, pos p) {
    if(nElementos == 0){
        Pos* aux = new Pos(e);
        primero = aux;
        ultimo = primero;
    } else if(p == primero){
            Pos* aux = new Pos(e);
            Pos* copia = primero;
            aux->sgt = copia;
            primero = aux;
    }
    else {
        Pos *aux = primero;
        while(aux->sgt != p){
            aux = aux->sgt;
        }
        Pos* temp = new Pos(e);
        temp->sgt = p;
        aux->sgt = temp;
        //--------------------------------
        if(ultimo->sgt != 0){
           Pos* ult = primero;
           while(ult->sgt != 0){
               ult = ult->sgt;
           }
           ultimo = ult;
        }
        //-----------------------------
    }
    nElementos++;
}

void ListaPosLSE::borrar(pos p) {
    Pos* aux = primero;
    Pos* anterior = 0;
    while(aux != 0 && aux != p){
        anterior = aux;
        aux = aux->sgt;
    }
    if(anterior == 0){ //puede que no está el elemento en la lista
        primero = primero->sgt;
        delete aux;
        nElementos--;
    } else{
        anterior->sgt = aux->sgt;
        delete aux;
        nElementos--;
    }

}

void ListaPosLSE::agregarAlFinal(int e) {
    Pos* p = new Pos(e);
    if(nElementos==0){
        primero = p;
    }else {
        Pos *aux = primero;
        while (aux->sgt != 0) {
            aux = aux->sgt;
        }
        aux->sgt = p;
        ultimo = p;
    }
    nElementos++;
}

void ListaPosLSE::intercambiar(pos p1, pos p2) {
    int temp = p2->elemento;
    p2->elemento = p1->elemento;
    p1->elemento = temp;
}

int ListaPosLSE::recuperar(pos p) {
    return p->elemento;

}

void ListaPosLSE::modificarElem(pos p, int e) {
    p->elemento = e;
}

pos ListaPosLSE::primera() {
    return primero;
}

pos ListaPosLSE::siguente(pos p) {
    return p->sgt;
}

pos ListaPosLSE::anterior(pos p) {
    Pos* aux = primero;
    while(aux->sgt != p && aux->sgt != 0){
        aux = aux->sgt;
    }
    if(aux->sgt == p){
        return aux;
    } else{
        return 0;
    }
}

pos ListaPosLSE::ultima() {
    return ultimo;
}

int ListaPosLSE::numElem() {
    return nElementos;
}

pos ListaPosLSE::traducePos(int e) {
    Pos* p = primero;
    int contador = 1;
    while(p != 0 && contador < e){
        p = p->sgt;
        contador++;
    }
    return p;
}

void ListaPosLSE::listar() {
    Pos* p = primero;
    while(p != 0){
        cout << p->elemento << endl;
        p = p->sgt;
    }
}