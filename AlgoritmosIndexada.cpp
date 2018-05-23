//
// Created by felipe on 21/05/18.
//

#include "AlgoritmosIndexada.h"
#include <iostream>

using namespace std;

void AlgoritmosIndexada::listar(lista l){
    int contador = 1;
    while(contador <= l.numElem()){
        cout<<l.recuperar(contador)<<", ";
        contador++;
    }
}

bool AlgoritmosIndexada::simetrica(lista l){
    int derecha = l.numElem();
    int izquierda = 1;
    bool seguir = true;
    while(seguir&&(izquierda<=derecha)){
        if(l.recuperar(izquierda)==l.recuperar(derecha)){
            derecha--;
            izquierda++;
        }else{
            seguir = false;
        }
    }
    return seguir;
}

void AlgoritmosIndexada::invertir(lista l){
    int derecha = l.numElem();
    int izquierda = 1;
    bool seguir = true;
    while(izquierda<=derecha){
        l.intercambiar(izquierda,derecha);
        derecha--;
        izquierda++;
    }
}

bool AlgoritmosIndexada::buscar(int indice, lista l){
    int indiceRecorrido = 1;
    int max = l.numElem();
    bool seguir = true;
    bool encontrado = false;
    while((indiceRecorrido<=max)&&seguir){
        if(l.recuperar(indiceRecorrido)==l.recuperar(indice)){
            seguir = false;
            encontrado = true;
        }
        indiceRecorrido++;
    }
    return encontrado;
}

void AlgoritmosIndexada::eliminarRepetidos(lista l){
    int indice = 1;
    while(indice < l.numElem()){
        if(l.recuperar(indice)==l.recuperar(indice+1)){
            l.borrar(indice+1);
        }else{
            indice++;
        }
    }
}

bool AlgoritmosIndexada::subLista(lista l1,lista l2){
    int indiceL1 = 1;
    int indiceL2 = 1;
    int max = l2.numElem();
    bool esSublista = false;
    while((indiceL2<=max)&&!esSublista){
        if(l1.recuperar(indiceL1)==l2.recuperar(indiceL2)){
            bool seguir = true;
            while(seguir){
                indiceL1++;
                indiceL2++;
                if(l1.recuperar(indiceL1)==l2.recuperar(indiceL2)){
                    if((indiceL1+1)>l1.numElem()){
                        seguir = false;
                        esSublista = true;
                    }
                }else{
                    indiceL1 = 1;
                    seguir = false;
                }
            }
        }else{
            indiceL2++;
        }
    }
    return esSublista;
}

bool AlgoritmosIndexada::iguales(lista l1,lista l2){
    int indiceL1 = 1;
    int indiceL2 = 1;
    int max = l1.numElem();
    bool seguir = true;
    bool iguales = false;
    if(l1.numElem()!=l2.numElem()){
        return false;
    }
    if(l1.recuperar(indiceL1)!=l2.recuperar(indiceL2)){
        return false;
    }
    while((indiceL1<=max)&&(seguir)){
        if(l1.recuperar(indiceL1)==l2.recuperar(indiceL2)){
            indiceL1++;
            indiceL2++;
        }else{
            seguir = false;
        }
    }
    if(seguir){
        iguales = true;
    }
    return iguales;
}

void AlgoritmosIndexada::burbujaOriginal(lista){

}

void AlgoritmosIndexada::burbujaBiDireccional(lista){

}

void AlgoritmosIndexada::seleccionIterativa(lista){

}

void AlgoritmosIndexada::seleccionRecursiva(lista){

}

void AlgoritmosIndexada::seleccionrecursivaPila(lista){

}

void AlgoritmosIndexada::insercion(lista){

}

void AlgoritmosIndexada::quickSortAho(lista){

}
void AlgoritmosIndexada::quickSortMod(lista){

}

void AlgoritmosIndexada::mergeSort(lista){

}

void AlgoritmosIndexada::unionOrd(lista,lista){

}

void AlgoritmosIndexada::unionDes(lista,lista){

}

void AlgoritmosIndexada::interseccionOrd(lista,lista){

}

void AlgoritmosIndexada::interseccionDes(lista,lista){

}

void AlgoritmosIndexada::eliminarOrd(lista,lista){

}

void AlgoritmosIndexada::eliminarDes(lista,lista){

}