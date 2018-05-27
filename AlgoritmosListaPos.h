//
// Created by jimmy on 20/05/18.
//

#ifndef TP1_ALGORITMOS_H
#define TP1_ALGORITMOS_H

//#include "ListaPosArray.h"
#include "ListaPosLSE.h"
//#include "ListaPosLDE.h"
#include "Pila.h"

//typedef ListaPosArray lista;
typedef ListaPosLSE lista;
//typedef ListaPosLDE lista;

typedef Pos* pos; //typedef para LSE y LDE
//typedef Pos pos;  //typedef para lista por array

class Algoritmos {
public:
    /* EFE: Muestra todos los elementos que están en la lista
     * REQ: lista inicializada y no vacía
     * MOD: */
    void listar(lista&);

    /* EFE: devuelve true si la lista es simetrica, false en caso contrario
     * REQ: lista inicializada y no vacía
     * MOD: */
    bool simetrica(lista&);

    /* EFE: invierte la lista
     * REQ: lista inicializada y no vacía
     * MOD: lista L*/
    void invertir(lista&);

    /* EFE: devuelve true si el elemento a buscar está en la lista, false si no.
     * REQ: lista inicializada y no vacía
     * MOD: */
    bool buscar(lista, int);

    /* EFE: elimina los elementos repetidos en la lista, dejando uno de los repetidos
     * REQ: lista inicializada y no vacía
     * MOD: lista L*/
    void elimRepetidos(lista&);

    /* EFE: devuelve true si L1 está contenida en L2, false si no
     * REQ: listas inicializadas
     * MOD: */
    bool sublista(lista&, lista&);

    /* EFE: devuelve true si las dos listas son iguales, false en caso contrario
     * REQ: listas inicializadas
     * MOD: */
    bool iguales(lista, lista);

    /* EFE: ordena la lista ascendentemente
     * REQ: lista inicializada y no vacía
     * MOD: lista L*/
    void burbuja(lista&);

    /* EFE: ordena la lista ascendentemente
     * REQ: lista inicializada y no vacía
     * MOD: lista L*/
    void burbujaBidireccinal(lista&);

    /* EFE: ordena la lista ascendentemente
     * REQ: lista inicializada y no vacía
     * MOD: lista L */
    void seleccionIter(lista&);

    /* EFE: ordena la lista ascendentemente usando la recursividad del compilador
     * REQ: lista inicializada y no vacía
     * MOD: lista L*/
    void seleccionRec(lista&);

    /* EFE: ordena la lista ascendentemente sin usar la pila del compilador.
     * REQ: lista inicializada y no vacía
     * MOD: lista L*/
    void seleccionRecSinCom(lista&);

    /* EFE: ordena la lista ascendentemente
     * REQ: lista inicializada y no vacía
     * MOD: lista L*/
    void insercion(lista&);

    /* EFE: ordena la lista ascendentemente
     * REQ: lista inicializada, vacía y posiciones validas
     * MOD: lista L*/
    void quickSortAho(lista&, pos, pos);

    /* EFE: ordena la lista ascendentemente tal que si n es menor a 50 se usa inserción
     * REQ: lista inicializada, no vacía y posiciones validas
     * MOD: lista L*/
    void quickSortMod(lista, pos, pos);

    /* EFE: ordena la lista ascendentemente
     * REQ: lista inicializada, no vacía y posiciones validas
     * MOD: lista L*/
    void mergeSort(lista&, pos, pos);

    /* EFE: agrega a L1 los elementos que están en L2, de manera que en L1 no queden elementos repetidos
     * REQ: listas inicializadas, no vacias y  ordenadas. Que no hayan elementos repetidos
     * MOD: lista L1*/
    void unionOrdenadas(lista&, lista&);

    /* EFE: agrega a L1 los elementos que están en L2, de manera que en L1 no queden elementos repetidos
     * REQ: listas inicializadas y  no vacias. Que no hayan elementos repetidos.
     * MOD: lista L1*/
    void unionDesord(lista&, lista&);

    /* EFE: deja en L3 el resultado de la intersección de L1 y L2
     * REQ: que L1 y L2 no tengan elementos repetidos, listas inicializadas, no vacias y ordenadas
     * MOD:  L3*/
    void interseccionOrd(lista&, lista&, lista&);

    /* EFE: deja en L3 el resultado de la intersección de L1 y L2
     * REQ: que L1 y L2 no tengan elementos repetidos, listas inicializadas y no vacias
     * MOD:  L3*/
    void interseccionDesord(lista&, lista&, lista&);

    /* EFE: Elimina de L1 los elementos que están en L2.
     * REQ: Listas inicializadas, no vacias y ordenadas.
     * MOD: lista L1*/
    void eliminarOrde(lista&, lista&);

    /* EFE:Elimina de L1 los elementos que están en L2.
     * REQ: Listas inicializadas y no vacias.
     * MOD: lista L1*/
    void eliminarDesord(lista&, lista&);

private:
    void seleccionR(lista&, pos, pos, int);
    pos pivote(lista&, pos, pos);
    pos particion(lista&, pos, pos, pos);
    void merge(lista&, pos, pos, pos);
    Pila<pos> pila;

};


#endif //TP1_ALGORITMOS_H
