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
            } else {
                c++;
            }
        }

    }

}


int ListaOrdArray::numElem() {
    return this->numElementos;
}


void ListaOrdArray::imprimir() {
    for (int i = 0; i < numElementos; ++i) {
        cout << lista[i] << "-";
    }
}