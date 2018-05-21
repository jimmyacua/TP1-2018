//
// Created by jimmy on 20/05/18.
//

#ifndef TP1_ALGORITMOS_H
#define TP1_ALGORITMOS_H

//#include "ListaPosArray.h"
#include "ListaPosLSE.h"
//#include "ListaPosLDE.h"

//typedef ListaPosArray lista;
typedef ListaPosLSE lista;
//typedef ListaPosLDE lista;

class Algoritmos {
public:
    /* EFE:
     * REQ:
     * MOD: */
    void listar(lista);

    /* EFE:
     * REQ:
     * MOD: */
    bool simetrica(lista);

    /* EFE:
     * REQ:
     * MOD: */
    void invertir(lista);

    /* EFE:
     * REQ:
     * MOD: */
    bool buscar(lista, int);

    /* EFE:
     * REQ:
     * MOD: */
    void elimRepetidos(lista);

    /* EFE:
     * REQ:
     * MOD: */
    bool sublista(lista, lista);

    /* EFE:
     * REQ:
     * MOD: */
    bool iguales(lista, lista);

    /* EFE:
     * REQ:
     * MOD: */
    void burbuja(lista);

    /* EFE:
     * REQ:
     * MOD: */
    void burbujaBidireccinal(lista);

    /* EFE:
     * REQ:
     * MOD: */
    void seleccionIter(lista);

    /* EFE:
     * REQ:
     * MOD: */
    void seleccionRec(lista);

    /* EFE:
     * REQ:
     * MOD: */
    void seleccionRecSinCom(lista);

    /* EFE:
     * REQ:
     * MOD: */
    void insercion(lista);

    /* EFE:
     * REQ:
     * MOD: */
    void quickSortAho(lista);

    /* EFE:
     * REQ:
     * MOD: */
    void quickSortMod(lista);

    /* EFE:
     * REQ:
     * MOD: */
    void mergeSort(lista);

    /* EFE:
     * REQ:
     * MOD: */
    void unionOrdenadas(lista, lista);

    /* EFE:
     * REQ:
     * MOD: */
    void unionDesord(lista, lista);

    /* EFE:
     * REQ:
     * MOD: */
    void interseccionOrd(lista, lista);

    /* EFE:
     * REQ:
     * MOD: */
    void interseccionDesord(lista, lista, lista);

    /* EFE:
     * REQ:
     * MOD: */
    void eliminarOrde(lista, lista);

    /* EFE:
     * REQ:
     * MOD: */
    void eliminarDesord(lista, lista);
};


#endif //TP1_ALGORITMOS_H
