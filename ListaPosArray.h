#ifndef TP1_LISTAPOS_H
#define TP1_LISTAPOS_H

#include <iostream>

typedef int pos;

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

    //EFE: convierte de tipo de dato entero a tipo posicion
    //REQ:
    //MOD:
    pos traducePos(int);


    pos primero;
    pos ultimo_lleno;
    int nElementos;


private:
    pos lista[30];

};


#endif //TP1_LISTAPOS_H
