//
// Created by felipe on 21/05/18.
//

#ifndef TP1_ALGORITMOSINDEXADA_H
#define TP1_ALGORITMOSINDEXADA_H

//#include "ListaIndexadaArray.h"
#include "ListaIndexadaLSE.h"
#include "Pila.h"
//typedef ListaIndexadaArray lista;
typedef ListaIndexadaLSE lista;
//typedef Pila pila;
class AlgoritmosIndexada {
public:
    //Efecto:
    //Requiere:
    //Modifica:
    void listar(lista);
    //Efecto:
    //Requiere:
    //Modifica:
    bool simetrica(lista);
    //Efecto:
    //Requiere:
    //Modifica:
    void invertir(lista);
    //Efecto:
    //Requiere:
    //Modifica:
    bool buscar(int, lista);
    //Efecto:
    //Requiere:
    //Modifica:
    void eliminarRepetidos(lista&);
    //Efecto:
    //Requiere:
    //Modifica:
    bool subLista(lista,lista);
    //Efecto:
    //Requiere:
    //Modifica:
    bool iguales(lista,lista);
    //Efecto:
    //Requiere:
    //Modifica:
    void burbujaOriginal(lista);
    //Efecto:
    //Requiere:
    //Modifica:
    void burbujaBiDireccional(lista);
    //Efecto:
    //Requiere:
    //Modifica:
    void seleccionIterativa(lista);
    //Efecto:
    //Requiere:
    //Modifica:
    void seleccionRecursiva(lista);

    void seleccionR(lista,int,int);
    //Efecto:
    //Requiere:
    //Modifica:
    void seleccionrecursivaPila(lista);
    //Efecto:
    //Requiere:
    //Modifica:
    void insercion(lista);
    //Efecto:
    //Requiere:
    //Modifica:
    int pivote(lista,int,int);
    //Efecto:
    //Requiere:
    //Modifica:
    int particion(lista,int,int,int);
    //Efecto:
    //Requiere:
    //Modifica:
    void quickSortAho(lista,int,int);
    //Efecto:
    //Requiere:
    //Modifica:
    void quickSortMod(lista,int,int);
    //Efecto:
    //Requiere:
    //Modifica:
    void mergeSort(lista&,int, int);
    //Efecto:
    //Requiere:
    //Modifica:
    void merge(lista&, int, int, int);
    //Efecto:
    //Requiere:
    //Modifica:
    void unionOrd(lista,lista);
    //Efecto:
    //Requiere:
    //Modifica:
    void unionDes(lista,lista);
    //Efecto:
    //Requiere:
    //Modifica:
    lista interseccionOrd(lista,lista);
    //Efecto:
    //Requiere:
    //Modifica:
    lista interseccionDes(lista,lista);
    //Efecto:
    //Requiere:
    //Modifica:
    void eliminarOrd(lista,lista);
    //Efecto:
    //Requiere:
    //Modifica:
    void eliminarDes(lista,lista);
private:
    Pila <int> pila;
};


#endif //TP1_ALGORITMOSINDEXADA_H
