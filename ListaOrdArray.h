#ifndef TP1_LISTAORDARRAY_H
#define TP1_LISTAORDARRAY_H

#include <iostream>

using namespace std;


class ListaOrdArray {
public:

    /*ListaOrdArray();
    ~ListaOrdArray();*/

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
    int primero();

    //EFE: devuelve el siguiente elemento de la lista tomando un elemento como
    //base
    //REQ: lista inicializada y no vacia
    //MOD: ---
    int siguiente(int e);

    //EFE: devuelve el anterior elemento de la lista tomando un elemento como
    //base
    //REQ: lista inicializada y no vacia
    //MOD: ---
    char anterior(int e);

    //EFE: devuelve el ultimo elemento de la lista
    //REQ: lista inicializada y no vacia
    //MOD: ---
    int ultimo();

    //EFE: devuelve el total de elementos en la lista
    //REQ: lista inicializada y no vacia
    //MOD: ---
    int numElem();

    //EFE: Lista todas las etiquetas de una lista
    //REQ: Lista inicializada y con almenos un elemento
    //MOD:---
    void Listar();

    void imprimir();

private:
    int lista[30] = {};
    int rear;
    int numElementos;

};



#endif //TP1_LISTAORDARRAY_H
