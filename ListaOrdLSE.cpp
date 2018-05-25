#include "ListaOrdLSE.h"

void ListaOrdLSE::iniciar() {
    this->front = nullptr;
    this->rear = nullptr;
    this->numElementos = 0;
}

void ListaOrdLSE::destruir() {
    this->limpiarLista();
}

void ListaOrdLSE::vaciar() {
    this->limpiarLista();
    this->front = nullptr;
    this->numElementos = 0;
}

bool ListaOrdLSE::vacio() {
    return this->numElementos == 0;
}

void ListaOrdLSE::insertar(int e) {
    if(this->numElementos == 0) {
        this->front = new nodo(e);
        this->rear = this->front;
        this->numElementos = 1;
    } else if(this->front->getElem() > e) {
        nodo *tmp = new nodo(e);
        tmp->sgt = this->front;
        this->front = tmp;
        this->numElementos++;
    }else if(this->rear->getElem()< e) {
        this->rear->sgt = new nodo(e);
        this->rear = this->rear->sgt;
        this->numElementos++;
    } else if(this->front->getElem() != e && this->rear->getElem() != e) {
        nodo* nodoP = this->front;
        while(nodoP->sgt->getElem()< e) {
            nodoP = nodoP->sgt;
        }
        if(nodoP->sgt->getElem() != e) {
            nodo* tmpnodo = nodoP->sgt;
            nodoP->sgt = new nodo(e);
            nodoP->sgt->sgt = tmpnodo;
            this->numElementos++;
        }
    }
    //cout << this->front->getElem();
}

void ListaOrdLSE::borrar(int e) {
    if(this->front->getElem() == e) {
        nodo* tmp = this->front;
        this->front = tmp->sgt;
        this->numElementos--;
        delete tmp;
    } else {
        nodo* posN = this->front;
        while (posN->sgt != nullptr && posN->sgt->getElem() != e) {
            posN = posN->sgt;
        }
        if(posN->sgt != nullptr) {
            nodo* tmpnodo = posN->sgt;
            posN->sgt = posN->sgt->sgt;
            if(tmpnodo == this->rear) {
                this->rear = posN;
            }
            delete tmpnodo;
            this->numElementos--;
        }
    }
}

int ListaOrdLSE::primero() const {
    return this->front->getElem();
}

int ListaOrdLSE::ultimo() const {
    return this->rear->getElem();
}

int ListaOrdLSE::siguiente(int e) const {
    nodo* pos = this->front;
    while (pos->sgt != nullptr && pos->elemento != e){
        pos = pos->sgt;
    }
    pos = pos->sgt;
    return (pos == nullptr) ? 0 : pos->elemento;
    /*nodo *tmp = this->front;
    bool encontrado = false;
    while (tmp != nullptr && !encontrado){
        if (tmp->getElem() != e){
            tmp = tmp->sgt;
        } else {
            encontrado = true;
        }
    }
    return tmp->sgt->getElem();*/
}

int ListaOrdLSE::anterior(int e) const {
    if (this->front->getElem() == e) {
        return -1;
    }
    nodo *tmp = this->front;
    while (tmp != nullptr && tmp->sgt->getElem() != e){
        tmp = tmp->sgt;
    }
    return tmp->getElem();
}


int ListaOrdLSE::numElem() {
    return this->numElementos;
}

void ListaOrdLSE::imprimir() {
    nodo *tmp = this->front;
    while(tmp != nullptr){
        cout << tmp->getElem() << " - ";
        tmp = tmp->sgt;
    }
}

void ListaOrdLSE::limpiarLista() {
    nodo* p = this->front;
    while(p != nullptr){
        nodo* tmp = p;
        p = p->sgt;
        delete tmp;
    }
}