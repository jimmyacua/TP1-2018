#include "ListaOrdArray.h"

void ListaOrdArray::iniciar() {
    this->rear = 0;
    this->numElementos = 0;
}

void ListaOrdArray::destruir() {}

void ListaOrdArray::vaciar() {
    this->rear = 0;
    this->numElementos = 0;
}

bool ListaOrdArray::vacio() {
    return this->numElementos == 0;
}


void ListaOrdArray::insertar(int e) {
    int cont = 0;
    if(this->rear == 0){
        this->lista[0] = e;
        this->numElementos++;
    } else {
        if (this->lista[cont] >= e){
            this->rear++;
            for (int i = this->rear; i >cont; i--){
                this->lista[i+1] = this->lista[i];
            }
            this->lista[cont] = e;
            cont = this->rear;
            this->numElementos++;
        }
    }
    this->rear++;
}