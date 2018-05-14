//
// Created by felipe on 11/05/18.
//

#include "ListaIndexadaLSE.h"
#include <iostream>

using namespace std;

void ListaIndexadaLSE::iniciar(){
 cantElem = 0;
 primero = new Caja();
 ultimo = primero;
}

void ListaIndexadaLSE::destruir(){
    Caja *anterior;
    Caja *temp = primero;
    while(temp != NULL){
        anterior = temp;
        temp = temp->sgt;
        delete anterior;
    }
}

void ListaIndexadaLSE::vaciar(){
    Caja *anterior;
    Caja *temp = primero->sgt;
    while(temp != NULL){
        anterior = temp;
        temp = temp->sgt;
        delete anterior;
    }
    primero = NULL;
    //primero->sgt = NULL;
}

bool ListaIndexadaLSE::vacia(){
    if((cantElem==0)||(primero==NULL)){
        return true;
    }else{
        return false;
    }
}

void ListaIndexadaLSE::insertar(int elemento,int indice){
    Caja *nuevo = new Caja(elemento);
    if(cantElem==0){
        primero = nuevo;
        ultimo = primero;
    }else{
        Caja *aux = primero;
        int contador = 2;
        while(contador < indice) {
            aux = aux->sgt;
            contador++;
        }
        if(indice==1){
            nuevo->sgt = aux;
            primero = nuevo;
        }else {
            nuevo->sgt = aux->sgt;
            aux->sgt = nuevo;
        }
    }
    if(ultimo->sgt!= nullptr){
        Caja *ult = ultimo;
        while(ult->sgt!= nullptr){
            ult = ult->sgt;
        }
        ultimo = ult;
    }
    cantElem++;
}

void ListaIndexadaLSE::borrar(int indice){
    Caja *aux = primero;
<<<<<<< HEAD
    if(indice == 1){
        primero = primero->sgt;
        delete aux;
    } else{
        int contador = 2;
        while(contador < indice -1){
            aux = aux->sgt;
            contador++;
        }
        aux->sgt = aux->sgt->sgt;
    }
    cantElem--;
    /*int contador = 2;
=======
    int contador = 2;
>>>>>>> 9ce544d92f0ca3f7f571c455b67b3b8f89b52135
    while(contador < indice) {
        aux = aux->sgt;
        contador++;
    }
    if(indice==1){
        primero = primero->sgt;
        delete aux;
        cantElem--;
    }
    Caja *elm = aux->sgt;
    int i = elm->elemento;
    aux->sgt = aux->sgt->sgt;
    if(elm->sgt== NULL){
        ultimo = aux;
    }
    delete elm;
    cantElem--;
<<<<<<< HEAD
     */
=======
>>>>>>> 9ce544d92f0ca3f7f571c455b67b3b8f89b52135
}

void ListaIndexadaLSE::modificarElem(int elemento,int indice){
    Caja *aux = primero;
<<<<<<< HEAD
    int contador = 1;
=======
    int contador = 2;
>>>>>>> 9ce544d92f0ca3f7f571c455b67b3b8f89b52135
    while(contador < indice) {
        aux = aux->sgt;
        contador++;
    }
<<<<<<< HEAD
    aux->elemento = elemento;
    //if(indice==1){
      //  primero->elemento=elemento;
    //}
    //aux->sgt->elemento = elemento;
=======
    if(indice==1){
        primero->elemento=elemento;
    }
    aux->sgt->elemento = elemento;
>>>>>>> 9ce544d92f0ca3f7f571c455b67b3b8f89b52135

}

void ListaIndexadaLSE::intercambiar(int indiceU,int indiceD){
    Caja *aux = primero;
    Caja *pri = new Caja();
    Caja *seg = new Caja();
    int contador = 1;
    while(contador <= cantElem) {
        if(contador==indiceU){
            pri = aux;
        }
        if(contador == indiceD){
            seg = aux;
        }
        aux = aux->sgt;
        contador++;
    }
    int respaldo = pri->elemento;
    pri->elemento = seg->elemento;
    seg->elemento = respaldo;
}

int ListaIndexadaLSE::recuperar(int indice){
    Caja *aux = primero;
    int contador = 2;
    while(contador < indice) {
        aux = aux->sgt;
        contador++;
    }
    if(indice==1){
        return primero->elemento;
    }
    return aux->sgt->elemento;
}

int ListaIndexadaLSE::numElem(){
    return cantElem;
}

void ListaIndexadaLSE::listar(){
    Caja *aux = primero;
    while(aux != NULL){
        cout<<aux->elemento<<endl;
        aux = aux->sgt;
    }
}