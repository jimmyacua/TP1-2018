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
    //Efecto: Muestra todos los elementos que están en la lista
    //Requiere: Lista inicializada y no vacía
    //Modifica:
    void listar(lista&);
    //Efecto: Devuelve true si la lista es simetrica, false en caso contrario
    //Requiere: Lista inicializada y no vacía
    //Modifica:
    bool simetrica(lista&);
    //Efecto: Invierte la lista
    //Requiere: Lista inicializada y no vacía
    //Modifica: Lista L
    void invertir(lista&);
    //Efecto: Devuelve true si el elemento buscado está en la lista, devuelve false si no.
    //Requiere: Lista inicializada y no vacía
    //Modifica:
    bool buscar(int, lista&);
    //Efecto: Elimina los elementos repetidos de la lista
    //Requiere: Lista inicializada y no vacía
    //Modifica: Lista L
    void eliminarRepetidos(lista&);
    //Efecto: Devuelve true si L1 está contenida en L2, en caso contrario devuelve false
    //Requiere: Listas inicializadas
    //Modifica:
    bool subLista(lista&,lista&);
    //Efecto: Devuelve true si L1 y L2 son iguales, caso contrario false
    //Requiere: Listas Inicializadas
    //Modifica:
    bool iguales(lista&,lista&);
    //Efecto: Ordena la lista ascendentemente
    //Requiere: Lista inicializada y no vacia
    //Modifica: Lista L
    void burbujaOriginal(lista&);
    //Efecto: Ordena la lista ascendentemente
    //Requiere: Lista inicializada y no vacia
    //Modifica: Lista L
    void burbujaBiDireccional(lista&);
    //Efecto: Ordena la lista ascendentemente
    //Requiere: Lista inicializada y no vacia
    //Modifica: Lista L
    void seleccionIterativa(lista&);
    //Efecto: Ordena la lista ascendentemente usando la recursividad del compilador
    //Requiere: Lista inicializada y no vacia
    //Modifica: Lista L
    void seleccionRecursiva(lista&);
    //Efecto: Ordena la lista ascendentemente sin usar la pila del compilador
    //Requiere: Lista inicializada y no vacia
    //Modifica: Lista L
    void seleccionrecursivaPila(lista&);
    //Efecto: Ordena la lista ascendentemente
    //Requiere: Lista inicializada y no vacia
    //Modifica: Lista L
    void insercion(lista&);
    //Efecto: Ordena la lista ascendentemente
    //Requiere: Lista inicializada, no vacia y posiciones válidas
    //Modifica: Lista L
    void quickSortAho(lista&,int,int);
    //Efecto: Ordena la lista ascendentemente tal que si n es menor a 50 se usa inserción
    //Requiere: Lista inicializada, no vacia y posiciones válidas
    //Modifica: Lista L
    void quickSortMod(lista&,int,int);
//Efecto: Ordena la lista ascendentemente
    //Requiere: Lista inicializada, no vacia y posiciones válidas
    //Modifica: Lista L
    void mergeSort(lista&,int, int);
    //Efecto: Agrega a L1 los elementos que están en L2, de manera que en L1 no queden elementos repetidos
    //Requiere: Listas inicializadas, no vacias y  ordenadas. Que no hayan elementos repetidos
    //Modifica: Lista L1
    void unionOrd(lista&,lista&);
    //Efecto: Agrega a L1 los elementos que están en L2, de manera que en L1 no queden elementos repetidos
    //Requiere: Listas inicializadas y no vacias. Que no hayan elementos repetidos
    //Modifica: Lista L1
    void unionDes(lista&,lista&);
    //Efecto: Deja en L3 el resultado de la intersección de L1 y L2
    //Requiere: Que L1 y L2 no tengan elementos repetidos, listas inicializadas, no vacias y ordenadas
    //Modifica: Lista L3
    void interseccionOrd(lista&,lista&,lista&);
    //Efecto: Deja en L3 el resultado de la intersección de L1 y L2
    //Requiere: Que L1 y L2 no tengan elementos repetidos, listas inicializadas y no vacias
    //Modifica: Lista L3
    void interseccionDes(lista&,lista&,lista&);
    //Efecto: Elimina de L1 los elementos que están en L2.
    //Requiere: Listas inicializadas, no vacias y ordenadas.
    //Modifica: Lista L1
    void eliminarOrd(lista&,lista&);
    //Efecto: Elimina de L1 los elementos que están en L2.
    //Requiere: Listas inicializadas y no vacias.
    //Modifica: Lista L1
    void eliminarDes(lista&,lista&);
private:
    void seleccionR(lista&,int,int);
    int pivote(lista&,int,int);
    int particion(lista&,int,int,int);
    void merge(lista&, int, int, int);
    Pila <int> pila;
};


#endif //TP1_ALGORITMOSINDEXADA_H
