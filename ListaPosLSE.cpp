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
    if(nElementos == 0){
        Pos* aux = new Pos(e);
        primero = aux;
    } else{
        Pos *aux = primero;
        while(aux->sgt != p){
            aux = aux->sgt;
        }
        Pos* temp = new Pos(e);
        temp->sgt = p;
        aux->sgt = temp;
    }
    nElementos++;
}

void ListaPosLSE::borrar(pos p) {
    Pos* aux = primero;
    Pos* anterior = NULL;
    while(aux != NULL && aux != p){
        anterior = aux;
        aux = aux->sgt;
    }
    if(anterior == NULL){ //si esta de primero
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

}

void ListaPosLSE::intercambiar(pos, pos) {}

int ListaPosLSE::recuperar(pos) {}

void ListaPosLSE::modificarElem(pos, int) {}

pos ListaPosLSE::primera() {}

pos ListaPosLSE::siguente(pos) {}

pos ListaPosLSE::anterior(pos) {}

pos ListaPosLSE::ultima() {}

pos ListaPosLSE::traducePos(int e) {
    Pos* p = primero;
    int contador = 1;
    while(p != NULL && contador < e){
        p = p->sgt;
        contador++;
    }
    return p;
}

void ListaPosLSE::listar() {
    Pos* p = primero;
    while(p != NULL){
        cout << p->elemento << endl;
        p = p->sgt;
    }
}