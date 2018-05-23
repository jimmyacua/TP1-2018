//
// Created by jimmy on 20/05/18.
//

#include <iostream>
#include "AlgoritmosListaPos.h"

using namespace std;

void Algoritmos::listar(lista l) {
    Pos* p = l.primera();
    while(p != NULL){
        cout << l.recuperar(p) << endl;
        p = l.siguente(p);
    }
}

bool Algoritmos::simetrica(lista l) {
    Pos* inicio = l.primera();
    Pos* final = l.ultima();
    bool simetricas = true;
    while(simetricas && (inicio != final) && (l.siguente(final) != inicio)){ //mientras no se traslapen
        if(l.recuperar(inicio) != l.recuperar(final)){
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
        if(l.recuperar(p) == e){
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
        if(l2.recuperar(p2) !=l1.recuperar(p1)){
            p2 = l2.siguente(p2);
            if(p2 == NULL){
                return esSublista;
            }
        }
        while(l2.recuperar(p2) == l1.recuperar(p1)){
            p1 = l1.siguente(p1);
            p2 = l2.siguente(p2);
            if(p1 == NULL){
                return true;
            }
        }
    }

}

bool Algoritmos::iguales(lista l1, lista l2) {
    if(l1.numElem() != l2.numElem()){
        return false;
    }
    else {
        bool iguales = true;
        Pos *p1 = l1.primera();
        Pos *p2 = l2.primera();
        while (iguales && p1 != NULL && p2 != NULL) {
            if (l1.recuperar(p1) != l2.recuperar(p2)) {
                iguales = false;
            }
            p1 = l1.siguente(p1);
            p2 = l2.siguente(p2);
        }
        return iguales;
    }
}

void Algoritmos::burbuja(lista l) {
    Pos* p = l.siguente(l.primera());
    while(p != NULL){
        Pos* aux = l.primera();
        while(aux != l.ultima()){
            if(l.recuperar(aux) > l.recuperar(p)){
                l.intercambiar(p, aux);
            }
            aux = l.siguente(aux);
        }
        p = l.siguente(p);
    }
}

void Algoritmos::burbujaBidireccinal(lista l) {
    bool listo = true;
    Pos* inicio = l.primera();
    Pos* final = l.ultima();
    while(listo){
        listo = false;
        Pos* p = inicio;
        while(p != final){
            if(l.recuperar(p) > l.recuperar(l.siguente(p))){
                l.intercambiar(p,l.siguente(p));
                listo = true;
            }
            p = l.siguente(p);
        }
        if(!listo){ //si nada se intercambia ya está ordenada
            return;
        }
        listo = false;

        final = l.anterior(final);

        Pos* aux = final;
        while(aux != inicio){
            if(l.recuperar(aux) < l.recuperar(l.anterior(aux))){
                l.intercambiar(aux, l.anterior(aux));
                listo = true;
            }
            aux = l.anterior(aux);
        }
        inicio = l.siguente(inicio);
    }
}

void Algoritmos::seleccionIter(lista l){
    Pos* min;
    Pos* p = l.primera();
    while(p != l.ultima()){
        min = p;
        Pos* aux = l.siguente(p);
        while(aux != NULL){
            if(l.recuperar(min) > l.recuperar(aux)){
                min = aux;
                l.intercambiar(min, p);
            }

            aux = l.siguente(aux);
        }
        p = l.siguente(p);
    }
}

void Algoritmos::seleccionRec(lista l) {
    Pos* inicio = l.primera();
    Pos* menor = inicio;
    seleccionR(l,inicio, menor);
}

void Algoritmos::seleccionR(lista l, pos inicio, pos menor) {
    if(inicio != NULL){
        Pos* aux = inicio;
        while(aux != NULL){
            menor = inicio;
            if(l.recuperar(menor) > l.recuperar(aux)){
                menor = aux;
                l.intercambiar(menor, inicio);
            }
            aux = l.siguente(aux);
        }
        inicio = l.siguente(inicio);
        seleccionR(l,inicio, menor);
    }
}

void Algoritmos::seleccionRecSinCom(lista l) {}

void Algoritmos::insercion(lista l) {
    Pos *p = l.primera();
    while (p != l.ultima()) {
        Pos *p2 = l.siguente(p);
        while (p2 != l.primera()) {
            if (l.recuperar(p2) < l.recuperar(l.anterior(p2))) {
                l.intercambiar(p2, l.anterior(p2));
            }
            p2 = l.anterior(p2);
        }
        p = l.siguente(p);
    }
}

pos Algoritmos::pivote(lista l, pos inicio, pos final){
    if(inicio == final){
        return NULL;
    }
    Pos* p = l.siguente(inicio);
    while(p != NULL){
        int i = l.recuperar(inicio);
        if(l.recuperar(p) > i){
            return p;
        }else if(i > l.recuperar(p)){
            p = inicio;
            return p;
        }
        p = l.siguente(p);
    }
    return NULL;
}

pos Algoritmos::particion(lista l, pos pivot, pos inicio, pos final) {
    if (pivot != NULL) {
        Pos *z = inicio;
        Pos *d = final;
        int pi = l.recuperar(pivot);
        do {
            l.intercambiar(z, d);
            while (l.recuperar(z) < pi) {
                z = l.siguente(z);
            }
            while (l.recuperar(d) >= pi) {
                d = l.anterior(d);
            }
        } while (l.siguente(d) != z);
        return z;
    } else{
        return NULL;
    }
}

void Algoritmos::quickSortAho(lista l, pos inicio, pos final) {
    Pos* pivot = pivote(l, inicio, final);
    if(pivot != NULL){
        Pos* part = particion(l,pivot, inicio, final);
        quickSortAho(l,inicio, l.anterior(part));
        quickSortAho(l,part, final);
    }
}

void Algoritmos::quickSortMod(lista l, pos inicio, pos final) {
    Pos* pivot = pivote(l, inicio, final);
    if(pivot != NULL){
        Pos* part = particion(l,pivot, inicio, final);
        int contador = 1;
        Pos* cont = l.primera();
        while(cont != part){
            cont = l.siguente(cont);
            contador++;
        }
        if(contador > 10) { //lo cambié de 50 a 10 para probar sin tener que agregar los 50 elementos.
            quickSortAho(l, inicio, l.anterior(part));
            quickSortAho(l, part, final);
        } else{
            insercion(l);
        }
    }
}

void Algoritmos::mergeSort(lista l, pos inicio, pos final) {
    if(inicio != final){
        Pos* mitad = l.traducePos(l.numElem()/2);
        mergeSort(l,inicio,mitad);
        mergeSort(l,l.siguente(mitad),final);

        merge(l,inicio, mitad, final);
    }
}

void Algoritmos::merge(lista l, pos inicio, pos mitad, pos final) {
    lista l1;
    l1.iniciar();

    lista l2;
    l2.iniciar();

    Pos* p = l.primera();
    while(p != l.siguente(mitad)){
        l1.agregarAlFinal(l.recuperar(p));
        p = l.siguente(p);
    }

    p = mitad;
    while(p != NULL){
        l2.agregarAlFinal(l.recuperar(p));
        p = l.siguente(p);
    }
}

void Algoritmos::unionOrdenadas(lista, lista) {}

void Algoritmos::unionDesord(lista, lista) {}

void Algoritmos::interseccionOrd(lista, lista) {}

void Algoritmos::interseccionDesord(lista, lista, lista) {}

void Algoritmos::eliminarOrde(lista, lista) {}

void Algoritmos::eliminarDesord(lista, lista) {}
