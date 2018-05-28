//
// Created by jimmy on 20/05/18.
//

#ifndef TP1_ALGORITMOS_H
#define TP1_ALGORITMOS_H

//#include "ListaPosArray.h"
#include "ListaPosLSE.h"
//#include "ListaPosLDE.h"
#include "Pila.h"

//typedef ListaPosArray listaP;
typedef ListaPosLSE listaP;
//typedef ListaPosLDE listaP;

typedef Pos* pos; //typedef para LSE y LDE
//typedef Pos pos;  //typedef para lista por array

class Algoritmos {
public:
    /* EFE: Muestra todos los elementos que están en la listaP
     * REQ: listaP inicializada y no vacía
     * MOD: */
    void listar(listaP&);

    /* EFE: devuelve true si la listaP es simetrica, false en caso contrario
     * REQ: listaP inicializada y no vacía
     * MOD: */
    bool simetrica(listaP&);

    /* EFE: invierte la listaP
     * REQ: listaP inicializada y no vacía
     * MOD: listaP L*/
    void invertir(listaP&);

    /* EFE: devuelve true si el elemento a buscar está en la listaP, false si no.
     * REQ: listaP inicializada y no vacía
     * MOD: */
    bool buscar(listaP, int);

    /* EFE: elimina los elementos repetidos en la listaP, dejando uno de los repetidos
     * REQ: listaP inicializada y no vacía
     * MOD: listaP L*/
    void elimRepetidos(listaP&);

    /* EFE: devuelve true si L1 está contenida en L2, false si no
     * REQ: listaPs inicializadas
     * MOD: */
    bool subLista(listaP&, listaP&);

    /* EFE: devuelve true si las dos listaPs son iguales, false en caso contrario
     * REQ: listaPs inicializadas
     * MOD: */
    bool iguales(listaP, listaP);

    /* EFE: ordena la listaP ascendentemente
     * REQ: listaP inicializada y no vacía
     * MOD: listaP L*/
    void burbuja(listaP&);

    /* EFE: ordena la listaP ascendentemente
     * REQ: listaP inicializada y no vacía
     * MOD: listaP L*/
    void burbujaBidireccinal(listaP&);

    /* EFE: ordena la listaP ascendentemente
     * REQ: listaP inicializada y no vacía
     * MOD: listaP L */
    void seleccionIter(listaP&);

    /* EFE: ordena la listaP ascendentemente usando la recursividad del compilador
     * REQ: listaP inicializada y no vacía
     * MOD: listaP L*/
    void seleccionRec(listaP&);

    /* EFE: ordena la listaP ascendentemente sin usar la pila del compilador.
     * REQ: listaP inicializada y no vacía
     * MOD: listaP L*/
    void seleccionRecSinCom(listaP&);

    /* EFE: ordena la listaP ascendentemente
     * REQ: listaP inicializada y no vacía
     * MOD: listaP L*/
    void insercion(listaP&);

    /* EFE: ordena la listaP ascendentemente
     * REQ: listaP inicializada, vacía y posiciones validas
     * MOD: listaP L*/
    void quickSortAho(listaP&, pos, pos);

    /* EFE: ordena la listaP ascendentemente tal que si n es menor a 50 se usa inserción
     * REQ: listaP inicializada, no vacía y posiciones validas
     * MOD: listaP L*/
    void quickSortMod(listaP, pos, pos);

    /* EFE: ordena la listaP ascendentemente
     * REQ: listaP inicializada, no vacía y posiciones validas
     * MOD: listaP L*/
    void mergeSort(listaP&, pos, pos);

    /* EFE: agrega a L1 los elementos que están en L2, de manera que en L1 no queden elementos repetidos
     * REQ: listaPs inicializadas, no vacias y  ordenadas. Que no hayan elementos repetidos
     * MOD: listaP L1*/
    void unionOrdenadas(listaP&, listaP&);

    /* EFE: agrega a L1 los elementos que están en L2, de manera que en L1 no queden elementos repetidos
     * REQ: listaPs inicializadas y  no vacias. Que no hayan elementos repetidos.
     * MOD: listaP L1*/
    void unionDesord(listaP&, listaP&);

    /* EFE: deja en L3 el resultado de la intersección de L1 y L2
     * REQ: que L1 y L2 no tengan elementos repetidos, listaPs inicializadas, no vacias y ordenadas
     * MOD:  L3*/
    void interseccionOrd(listaP&, listaP&, listaP&);

    /* EFE: deja en L3 el resultado de la intersección de L1 y L2
     * REQ: que L1 y L2 no tengan elementos repetidos, listaPs inicializadas y no vacias
     * MOD:  L3*/
    void interseccionDesord(listaP&, listaP&, listaP&);

    /* EFE: Elimina de L1 los elementos que están en L2.
     * REQ: listaPs inicializadas, no vacias y ordenadas.
     * MOD: listaP L1*/
    void eliminarOrde(listaP&, listaP&);

    /* EFE:Elimina de L1 los elementos que están en L2.
     * REQ: listaPs inicializadas y no vacias.
     * MOD: listaP L1*/
    void eliminarDesord(listaP&, listaP&);

private:
    void seleccionR(listaP&, pos, pos, int);
    pos pivote(listaP&, pos, pos);
    pos particion(listaP&, pos, pos, pos);
    void merge(listaP&, pos, pos, pos);
    Pila<pos> pila;

};


#endif //TP1_ALGORITMOS_H
