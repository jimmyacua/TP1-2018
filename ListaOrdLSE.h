#ifndef TP1_LISTAORDLSE_H
#define TP1_LISTAORDLSE_H

#include <iostream>

using namespace std;

class ListaOrdLSE {

private:
    struct nodo {
        int elemento = 0; // o int elemento;
        nodo* sgt;

        nodo(int e){
            elemento = e;
            sgt = nullptr;
        };
        int getElem(){
            return elemento;
        }
    };
    nodo *front;
    nodo *rear;
    int numElementos;

    //EFE: Limpia la lista de nodos
    //REQ: L incializada
    //MOD: L
    void limpiarLista();

public:

    //EFE: Inicializa la lista
    //REQ: ---
    //MOD: lista
    void iniciar();

    //EFE: destruye la lista
    //REQ: lista inicializada
    //MOD: lista
    void destruir();

    //EFE: vacia la lista
    //REQ: lista inicializada y no vacia
    //MOD: lista
    void vaciar();

    //EFE: revisa que si la lista esta vacia y retorna el boolean
    //correspondiente
    //REQ: lista inicializada
    //MOD: ---
    bool vacio();

    //EFE: Agrega un elemento a la lista
    //REQ: lista inicializada
    //MOD: lista
    void insertar(int e);

    //EFE: elimina un elemento de la lista
    //REQ: lista inicializada y no vacia
    //MOD: lista
    void borrar(int e);

    //EFE: devuelve el primer elemento de la lista
    //REQ: lista inicializada y no vacia
    //MOD: ---
    int primero() const;

    //EFE: devuelve el siguiente elemento de la lista tomando un elemento como
    //base
    //REQ: lista inicializada y no vacia
    //MOD: ---
    int siguiente(int e) const;

    //EFE: devuelve el anterior elemento de la lista tomando un elemento como
    //base
    //REQ: lista inicializada y no vacia
    //MOD: ---
    int anterior(int e) const;

    //EFE: devuelve el ultimo elemento de la lista
    //REQ: lista inicializada y no vacia
    //MOD: ---
    int ultimo() const;

    //EFE: devuelve el total de elementos en la lista
    //REQ: lista inicializada y no vacia
    //MOD: ---
    int numElem();

    //EFE: Imprime los elementos de una lista
    //REQ: Lista inicializada no vacía
    //MOD: ---
    void imprimir();

};


#endif //TP1_LISTAORDLSE_H
