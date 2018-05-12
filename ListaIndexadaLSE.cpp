//
// Created by felipe on 11/05/18.
//

#include "ListaIndexadaLSE.h"
#include <iostream>

using namespace std;

void ListaIndexadaLSE::iniciar(){
 ultimoLleno = 0;
 cantElem = 0;
}

void ListaIndexadaLSE::destruir(){

}

void ListaIndexadaLSE::vaciar(){
    
}

bool ListaIndexadaLSE::vacia(){
    if(cantElem>0){
        return true;
    }else{
        return false;
    }
}

void ListaIndexadaLSE::insertar(int elemento,int indice){

}

void ListaIndexadaLSE::borrar(int indice){

}

void ListaIndexadaLSE::modificarElem(int elemento,int indice){

}

void ListaIndexadaLSE::intercambiar(int indiceU,int indiceD){

}

int ListaIndexadaLSE::recuperar(int indice){

}

int ListaIndexadaLSE::numElem(){
    return ultimoLleno;
}

void ListaIndexadaLSE::listar(){

}