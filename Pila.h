//
// Created by jimmy on 12/05/18.
//

#ifndef TP1_PILA_H
#define TP1_PILA_H

#include <iostream>
#include <memory>

using namespace std;

template < typename T >

class Pila {
public:

    //EFE: Inicializa la pila
    //REQ: pila no inicializada
    //MOD:
    void iniciar();

    //EFE: Destruye la pila haciendola inutilizable
    //REQ: Pila inicializada
    //MOD: la pila
    void destruir();

    //EFE: eliminar todos los elementos de la pila
    //REQ: pila inicializada y no vacía
    //MOD: la pila
    void vaciar();

    //EFE: devuelve true si la pila está vacía, false si no
    //REQ: Pila inicializada
    //MOD:
    bool vacia();

    //EFE: inserta un elemento en la pila
    //REQ: pila inicializada
    //MOD: la pila
    void meter(T e);

    //EFE: saca y devuelve el elemento que está en el tope de la pila
    //REQ: pila inicializada y no vacia
    //MOD: la pila
    T sacar();

    //EFE: devuelve el elemento que está en el tope de la pila
    //REQ: Pila inicializada y no vacia
    //MOD:
    T tope();

    //EFE: devuelve el numero de elementos que hay en la pila
    //REQ: Pila inicializada
    //MOD:
    int numElem();

    void listar();

    int nElementos;

private:
    template <typename V>
    struct Elem{
        V elemento;
        Elem *sgt;

        Elem(){};
        Elem(V e){
            elemento = e;
            sgt = NULL;
        }
    };
    Elem<T> *primero;
};

template <typename T>
void Pila<T>::iniciar() {
    primero = NULL;
    nElementos = 0;
}

template <typename T>
void Pila<T>::destruir() {
    Elem<T> *anterior = NULL;
    Elem<T> *temp = primero;
    while(temp != NULL){
        anterior = temp;
        temp = temp->sgt;
        delete anterior;
    }
}

template <typename T>
void Pila<T>::vaciar() {
    Elem<T> *anterior;
    Elem<T> *temp = primero;
    while(temp != NULL){
        anterior = temp;
        temp = temp->sgt;
        delete anterior;
    }
    primero = NULL;
}

template <typename T>
bool Pila<T>::vacia() {
    if(nElementos == 0){
        return true;
    }else{
        return false;
    }
}

template <typename T>
void Pila<T>::meter(T e) { //se agregan al inicio
    Elem<T> *temp = new Elem<T>(e);
    if(nElementos == 0){
        primero = temp;
    } else{
        temp->sgt = primero;
        primero = temp;
    }
    nElementos++;
}

template <typename T>
T Pila<T>::sacar() {
    T elemen = 0;
    if(nElementos == 1){
        elemen = primero->elemento;
        primero = NULL;
    } else{
        Elem<T> *temp = primero;
        primero = primero->sgt;
        elemen = temp->elemento;
        delete temp;
    }
    nElementos--;
    return elemen;
}

template <typename T>
T Pila<T>::tope() {
    return primero->elemento;
}

template <typename T>
int Pila<T>::numElem() {
    return nElementos;
}

template <typename  T>
void Pila<T>::listar() {
    Elem<T> *temp = primero;
    while(temp != NULL){
        cout << temp->elemento << endl;
        temp = temp->sgt;
    }
}



#endif //TP1_PILA_H
