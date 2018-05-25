#include "algoritmosOrd.h"
#include <iostream>

using namespace std;

bool algoritmosOrd::iguales(lista l1, lista l2) {
    if (l1.numElem() != l2.numElem()){
        return false;
    } else {
        auto e1 = l1.primero();
        auto e2 = l2.primero();
        for(int i = 0; i < l1.numElem(); i++){
            if (e1 != e2){
                return false;
            } else{
                e1 = l1.siguiente(e1);
                e2 = l2.siguiente(e2);
            }
        }
    }
    return true;
}

lista algoritmosOrd::copiar(lista l1) {
    lista l2 = lista();
    l2.iniciar();
    auto e1 = l1.primero();
    for(int i = 0;i < l1.numElem(); i++){
        l2.insertar(e1);
        e1 = l1.siguiente(e1);
    }
    return l2;
}

bool algoritmosOrd::contenida(lista l1, lista l2) {
    if (l1.numElem() > l2.numElem()){
        return false;
    }else{
        auto e1 = l1.primero();
        auto e2 = l2.primero();
        int numElem1 = l1.numElem();
        int numElem2 = l2.numElem();
        int i = 0;
        int j = 0;
        while(i < numElem2 && j < numElem1){
            if(e1 < e2){
                return false;
            } else if (e2 < e1){
                e2 = l2.siguiente(e2);
                i++;
            } else {
                e1 = l1.siguiente(e1);
                e2 = l2.siguiente(e2);
                i++;
                j++;
            }
        }
        return j == numElem1;
    }
}

bool algoritmosOrd::pertenece(lista l1, int e) {
    auto e1 = l1.primero();
    for(int i = 0; i<=l1.numElem(); i++){
        if (e == e1){
            return true;
        }
        e1 = l1.siguiente(e1);
    }
    return false;
}

void algoritmosOrd::eliminar(lista &l1, lista &l2) {
    auto e1 = l1.primero();
    auto e2 = l2.primero();
    auto eaux = e1;
    int c = 0;
    bool eliminado = false;
    while(l1.numElem() >= c){
        eliminado = false;
        while(e1 >= e2 && !eliminado){
            if (e1 == e2){
                eaux = l1.siguiente(e1);
                l1.borrar(e1);
                e1 = eaux;
                c++;
                eliminado = true;
            }else if (e1 > e2){
                e2 = l2.siguiente(e2);
            }
        }
        if (!eliminado){
            e1 = l1.siguiente(e1);
            c++;
        }
    }
    if (l2.ultimo() == l1.ultimo()){
        l1.borrar(l1.ultimo());
    }
}

void algoritmosOrd::unionV1(lista &l1, lista &l2) {
    auto e2 = l2.primero();
    int numElem = l2.numElem();
    for(int i = 0; i < numElem; i++){
        l1.insertar(e2);
        e2 = l2.siguiente(e2);
    }
}

lista algoritmosOrd::unionV2(lista &l1, lista &l2) {
    lista l3 = lista();
    auto e1 = l1.primero();
    auto e2 = l2.primero();
    int i = 0;
    int j = 0;
    int numElem1 = l1.numElem();
    int numElem2 = l2.numElem();
    while(i < numElem1 && j < numElem2){
        if(e1>e2){
            l3.insertar(e2);
            e2 = l2.siguiente(e2);
            j++;
        } else if (e1 < e2){
            l3.insertar(e1);
            e1 = l1.siguiente(e1);
            i++;
        } else {
            l3.insertar(e1);
            e1 = l1.siguiente(e1);
            e2 = l2.siguiente(e2);
            i++;
            j++;
        }
    }
    while(i < numElem1){
        l3.insertar(e1);
        e1 = l1.siguiente(e1);
        i++;
    }
    while(j < numElem2){
        l3.insertar(e2);
        e2 = l2.siguiente(e2);
        j++;
    }
    return l3;
}
