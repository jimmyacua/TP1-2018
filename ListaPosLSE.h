//
// Created by jimmy on 11/05/18.
//

#ifndef TP1_LISTAPOSLSE_H
#define TP1_LISTAPOSLSE_H

#include <iostream>

struct Pos{
public:
    int elemento;
    Pos *sgt;

    Pos(){
        sgt = 0;
    }

    Pos(int e){
        elemento = e;
        sgt = 0;
    }
};


typedef Pos *pos;

class ListaPosLSE {
public:

    //EFE: Inicia la lista.
    //REQ: -
    //MOD: -
    void iniciar();

    //EFE: Destruye la Lista
    //REQ: Lista inicializada
    //MOD: Lista L
    void destruir();

    //EFE: vacía la lista
    //REQ: lista inicializada
    //MOD: lista L
    void vaciar();

    //EFE: devuelve true si la lista está vacía, false en caso contrario.
    //REQ: lista inicializada
    //MOD:
    bool vacia();

    //EFE: Agrega un elemento en la posición p
    //REQ: Lista inicializada
    //MOD: lista L
    void insertar(int,pos);

    //EFE: Agrega un elemento en la ultima posición de la lista
    //REQ: Lista inicializada
    //MOD: lista L
    void agregarAlFinal(int);

    //EFE: elimina la posición de la lista "cerrando campo"
    //REQ: Lista inicializada y no vacía. Que la posición esté en la lista.
    //MOD: lista L.
    void borrar(pos);

    //EFE: cambia el elemento de la posición p por el nuevo elemento
    //REQ: Lista inicializada y posición válida
    //MOD: Lista L
    void modificarElem(pos,int);

    //EFE: Intercambia las posiciones p1 y p2 de la lista
    //REQ: Lista inicializada, p1 y p2 validas
    //MOD: Lista L
    void intercambiar(pos,pos);

    //EFE: devuelve la primer posición de la lista
    //REQ: Lista inicializada y no vacía
    //MOD:
    pos primera();

    //EFE: devuelve la ultima posición de la lista
    //REQ: Lista inicializada y no vacía.
    //MOD:
    pos ultima();

    //EFE: devuelve la posición precedente a p
    //REQ: Lista inicializada y p válida
    //MOD:
    pos siguente(pos);

    //EFE: devuelve la posición antecedente a p
    //REQ: lista inicializada y p valida
    //MOD:
    pos anterior(pos);

    //EFE: devuelve el elemento que se encuentra en la posición p
    //REQ: lista inicializada y p valida.
    //MOD:
    int recuperar(pos);

    //EFE: devuelve el numero de elementos/posiciones que hay en la lista
    //REQ: lista inicializada
    //MOD:
    int numElem();

    //EFE: lista los elementos que hay en la lista
    //REQ: lista inicializada y no vacía
    //MOD:
    void listar();

    //EFE: convierte de tipo de dato entero a tipo posicion
    //REQ:
    //MOD:
    pos traducePos(int);

private:
    Pos *primero;
    Pos *ultimo;
    int nElementos;

};


#endif //TP1_LISTAPOSLSE_H
