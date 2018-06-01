//
// Created by jimmy on 11/05/18.
//

#ifndef TP1_LISTAPos_H
#define TP1_LISTAPos_H

#include <iostream>

typedef int Pos;

class ListaPosArray {
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

    //EFE: Agrega un elemento en la Posición p
    //REQ: Lista inicializada
    //MOD: lista L
    void insertar(int, Pos);

    //EFE: Agrega un elemento en la ultima Posición de la lista
    //REQ: Lista inicializada
    //MOD: lista L
    void agregarAlFinal(int);

    //EFE: elimina la Posición de la lista "cerrando campo"
    //REQ: Lista inicializada y no vacía. Que la Posición esté en la lista.
    //MOD: lista L.
    void borrar(Pos);

    //EFE: cambia el elemento de la Posición p por el nuevo elemento
    //REQ: Lista inicializada y Posición válida
    //MOD: Lista L
    void modificarElem(Pos,int);

    //EFE: Intercambia las Posiciones p1 y p2 de la lista
    //REQ: Lista inicializada, p1 y p2 validas
    //MOD: Lista L
    void intercambiar(Pos,Pos);

    //EFE: devuelve la primer Posición de la lista
    //REQ: Lista inicializada y no vacía
    //MOD:
    Pos primera();

    //EFE: devuelve la ultima Posición de la lista
    //REQ: Lista inicializada y no vacía.
    //MOD:
    Pos ultima();

    //EFE: devuelve la Posición precedente a p
    //REQ: Lista inicializada y p válida
    //MOD:
    Pos siguente(Pos);

    //EFE: devuelve la Posición antecedente a p
    //REQ: lista inicializada y p valida
    //MOD:
    Pos anterior(Pos);

    //EFE: devuelve el elemento que se encuentra en la Posición p
    //REQ: lista inicializada y p valida.
    //MOD:
    int recuperar(Pos);

    //EFE: devuelve el numero de elementos/Posiciones que hay en la lista
    //REQ: lista inicializada
    //MOD:
    int numElem();

    //EFE: lista los elementos que hay en la lista
    //REQ: lista inicializada y no vacía
    //MOD:
    void listar();

    //EFE: convierte de tipo de dato entero a tipo Posicion
    //REQ:
    //MOD:
    Pos traducePos(int);


    Pos primero;
    Pos ultimo_lleno;
    int nElementos;


private:
    Pos lista[500000];

};


#endif //TP1_LISTAPos_H
