//
// Created by felipe on 11/05/18.
//

#include "ListaIndexadaArray.h"
#include <iostream>

using namespace std;

void ListaIndexadaArray::iniciar(){
    ultimoLleno = 0;
    cantElem = 0;
}

void ListaIndexadaArray::destruir(){
    ultimoLleno = -1;
    cantElem = 0;
}

void ListaIndexadaArray::vaciar(){
    ultimoLleno = 0;
    cantElem = 0;
}

bool ListaIndexadaArray::vacia(){
    if(cantElem == 0){
        return true;
    }else{
        return false;
    }
}

void ListaIndexadaArray::insertar(int elemento,int indice){
    int indCorrimiento = ultimoLleno;
    ultimoLleno++;
    cantElem++;
    while(indCorrimiento >= indice){
        lista[indCorrimiento+1]=lista[indCorrimiento];
        indCorrimiento--;
    }
    lista[indice]=elemento;
}

void ListaIndexadaArray::borrar(int indice){
    int indCorrimiento = indice;
    while(indCorrimiento < ultimoLleno){
        lista[indCorrimiento]=lista[indCorrimiento+1];
        indCorrimiento++;
    }
    ultimoLleno--;
    cantElem--;
}

void ListaIndexadaArray::modificarElem(int elemento,int indice){
    lista[indice] = elemento;
}

void ListaIndexadaArray::intercambiar(int indiceU,int indiceD){
    int uno = this->recuperar(indiceU);
    lista[indiceU] = lista[indiceD];
    lista[indiceD] = uno;
}

int ListaIndexadaArray::recuperar(int indice){
    return lista[indice];
}

int ListaIndexadaArray::numElem(){
    return ultimoLleno;
}

void ListaIndexadaArray::listar(){
    int contador = 1;
    while(contador<= cantElem){
        cout<<lista[contador]<<endl;
        contador++;
    }
}