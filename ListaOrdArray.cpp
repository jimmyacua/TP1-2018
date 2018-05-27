#include "ListaOrdArray.h"

void ListaOrdArray::iniciar() {
    this->rear = -1;
    this->numElementos = 0;
}

void ListaOrdArray::destruir() {}

void ListaOrdArray::vaciar() {
    this->rear = -1;
    this->numElementos = 0;
}

bool ListaOrdArray::vacio() {
    return this->numElementos == 0;
}


void ListaOrdArray::insertar(int e) {
    if (numElementos == 0){
        lista[0] = e;
        numElementos++;
        rear++;
    } else {
        int c = 0;
        while(c < numElementos){
            if(lista[c]>e){
                for (int i = rear; i >= c; --i){
                    lista[i+1] = lista[i];
                }
                lista[c] = e;
                rear++;
                numElementos++;
                c = numElementos;
            } else if(lista[rear] == 0){
                lista[rear] = e;
                numElementos++;
                c = numElementos;
            } else if (lista[rear] < e) {
                rear++;
                lista[rear] = e;
                numElementos++;
                c = numElementos;
            }else {
                c++;
            }
        }
    }
}

void ListaOrdArray::borrar(int e) {
    bool borrado = false;
    int c = 0;
    while(c <= this->numElementos && !borrado){
        if(lista[c] != e){
            c++;
        } else {
            for(int i = c; i <= this->rear; i++){
                lista[i]=lista[i+1];
            }
            this->rear--;
            this->numElementos--;
            borrado = true;
        }
    }
}

int ListaOrdArray::primero() {
    return lista[0];
}

int ListaOrdArray::siguiente(int e) {
    int c = 0;
    bool encontrado = false;
    while (c <= this->rear && !encontrado) {
        if (lista[c] != e) {
            c++;
        } else {
            encontrado = true;
        }
    }
    return lista[c+1];
     }

int ListaOrdArray::anterior(int e) {
    if (lista[0] == e){
        return -1;
    }
    int c = 0;
    bool encontrado = false;
    while (c <= this->rear && !encontrado) {
        if (lista[c] != e) {
            c++;
        } else {
            encontrado = true;
        }
    }
    return lista[c - 1];
}

int ListaOrdArray::ultimo() {
    return lista[this->rear];
}



int ListaOrdArray::numElem() {
    return this->numElementos;
}



void ListaOrdArray::imprimir() {
    for (int i = 0; i < numElementos; ++i) {
        cout << lista[i] << "-";
    }
}