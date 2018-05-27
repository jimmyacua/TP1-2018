//
// Created by jimmy on 20/05/18.
//

#include <iostream>
#include "Algoritmos.h"

using namespace std;

void Algoritmos::listar(lista l) {
    Pos* p = l.primera();
    while(p != NULL){
        cout << p->elemento << endl;
        p = p->sgt;
    }
}

bool Algoritmos::simetrica(lista l) {
    Pos* inicio = l.primera();
    Pos* final = l.ultima();
    bool simetricas = true;
    while(simetricas && (inicio != final) && (l.siguente(final) != inicio)){ //mientras no se traslapen
        if(inicio->elemento != final->elemento){
            simetricas = false;
        }
        inicio = l.siguente(inicio);
        final = l.anterior(final);
    }
    return simetricas;
}

void Algoritmos::invertir(lista l) {
    Pos* inicio = l.primera();
    Pos* final = l.ultima();
    while((inicio != final) && (l.siguente(final) != inicio)){
        l.intercambiar(inicio, final);
        inicio = l.siguente(inicio);
        final = l.anterior(final);
    }
}

bool Algoritmos::buscar(lista l, int e) {
    Pos* p = l.primera();
    bool encontrado = false;
    while(p != NULL && !encontrado){
        if(p->elemento == e){
            encontrado = true;
        }
        p = l.siguente(p);
    }
    return encontrado;
}

void Algoritmos::elimRepetidos(lista l) {
    Pos* p = l.primera();
    while(p != NULL){
        Pos* aux = l.siguente(p);
        while(aux != NULL){
            if(l.recuperar(p) == l.recuperar(aux)){
                l.borrar(aux);
            }
            aux = l.siguente(aux);
        }
        p = l.siguente(p);
    }
}

bool Algoritmos::sublista(lista l1, lista l2) {
    Pos* p2 = l2.primera();
    Pos* p1 = l1.primera();
    bool esSublista = false;
    while(!esSublista){
        if(p2->elemento != p1->elemento){
            p2 = l2.siguente(p2);
            if(p2 == NULL){
                return esSublista;
            }
        }
        while(p2->elemento == p1->elemento){
            p1 = l1.siguente(p1);
            p2 = l2.siguente(p2);
            if(p1 == NULL){
                return true;
            }
        }
    }

}

bool Algoritmos::iguales(lista, lista) {}

void Algoritmos::burbuja(lista) {}

void Algoritmos::burbujaBidireccinal(lista) {}

void Algoritmos::seleccionIter(lista) {}

void Algoritmos::seleccionRec(lista) {}

void Algoritmos::seleccionRecSinCom(lista) {}

void Algoritmos::insercion(lista) {}

void Algoritmos::quickSortAho(lista) {}

void Algoritmos::quickSortMod(lista) {}

void Algoritmos::mergeSort(lista) {}

void Algoritmos::unionOrdenadas(lista, lista) {}

void Algoritmos::unionDesord(lista, lista) {}

void Algoritmos::interseccionOrd(lista, lista) {}

void Algoritmos::interseccionDesord(lista, lista, lista) {}

void Algoritmos::eliminarOrde(lista, lista) {}

void Algoritmos::eliminarDesord(lista, lista) {}
