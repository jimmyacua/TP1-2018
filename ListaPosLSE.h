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
        sgt = NULL;
    }

    Pos(int e){
        elemento = e;
        sgt = NULL;
    }

    int obtener(Pos){
        return elemento;
    }
    void poner(int);
};


typedef Pos *pos;

class ListaPosLSE {
public:
    //EFE: Inicia la lista
    //REQ: ---
    //MOD: ---
    void iniciar();

    //EFE: Destruye la lista, la deja inutilizable
    //REQ: Lista inicializada
    //MOD: L
    void destruir();

    //EFE; Vaćıa la lista
    //REQ: Lista inicializada
    //MOD:L
    void vaciar();

    //EFE: Retorna verdadero si la lista esta vaćıa
    //REQ: Lista inicializada
    //MOD: ---
    bool vacia();

    //EFE: Inserta elemento e en la posicíon p de la lista
    //REQ: Posicíon v́alida
    //MOD: ---
    void insertar(int,pos);

    //EFE: Agrega el elementoea la posición final de la Lista
    //REQ: Lista inicializada
    //MOD: L
    void agregarAlFinal(int);

    //EFE: Elimina el elemento en la posicíonp
    //REQ: Posicíon válida, lista no vacía
    //MOD: L
    void borrar(pos);

    //EFE: Cambia elemento en la posición p por el elemento e
    //REQ: Posición válida, lista no vacía
    //MOD: L en el elemento e
    void modificarElem(pos,int);

    //EFE: Intercambia los elementos de p1 y p2
    //REQ: Posiciones válidas
    //MOD: L
    void intercambiar(pos,pos);

    //EFE: Retorna la posicion del primer elemento
    //REQ: Lista inicializada, no vacía
    //MOD: ---
    pos primera();

    //EFE: Retorna la posición del último elemento
    //REQ: Lista inicializada, no vacía
    //MOD: ---
    pos ultima();

    //EFE: Retorna la posición precedente a p. Retorna nulo si no existe
    //REQ: Posición válida
    //MOD: ---
    pos siguente(pos);

    //EFE: Retorna la posición que antecede a p. Retorna nulo si no existe
    //REQ: Posición válida
    //MOD: ---
    pos anterior(pos);

    //EFE: Recupera el elemento e de la posición p
    //REQ: Que el elemento exista y una posición válida
    //MOD: ---
    int recuperar(pos);

    //EFE: Retorna el número de elementos en la lista
    //REQ: Lista inicializada
    //MOD: ---
    int numElem();

    //EFE: Devuelve una lista con todas las etiquetas de L
    //REQ: L inicializada y con almenos un elemento
    //MOD: ---
    void listar();

    pos traducePos(int);

private:
    pos posicion;
    Pos *primero;
    Pos *ultimo;
    int nElementos;

};


#endif //TP1_LISTAPOSLSE_H
