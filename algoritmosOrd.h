#ifndef TP1_ALGORITMOSORD_H
#define TP1_ALGORITMOSORD_H

#include "ListaOrdLSE.h"
#include "ListaOrdArray.h"


//typedef ListaOrdLSE lista;
typedef ListaOrdArray lista;

class algoritmosOrd {
public:
    //EFE: Retorna true si L1 y L2 son iguales
    //REQ: L1 y L2 inicialzada no vacía
    //MOD: ---
    bool iguales(lista l1, lista l2);

    //EFE: Copia l1 en l2
    //REQ: l1 inicializada no vacía
    //MOD: ---
    lista copiar(lista l1);

    //EFE: Retorna true si todos los elementos de l1 están en l2
    //REQ: l1 y l2 inicializadas no vacías
    //MOD: l2
    bool contenida(lista l1, lista l2);

    //EFE: Retorna true si e está en l1
    //REQ: l1 inicializada no vacía
    //MOD: ---
    bool pertenece(lista l1, int e);

    //EFE: Elimina de l1 los ementos que estánen l2
    //REQ:  l1 y l2 inicializadas no vacía
    //MOD: l1
    void eliminar(lista &l1, lista &l2);

    //EFE: Agrega a l1 los elementos de l2
    //REQ: l1y l2 inicializadas no vacías
    //MOD: l1
    void unionV1(lista &l1, lista &l2);

    //EFE: Deja en l3 el resultado de la unión
    //REQ: l1 y l2 inicializada no vacía
    //MOD: l3
    lista unionV2(lista &l1, lista &l2);

    //EFE: Elimina a l1 los elementos de l2
    //REQ: l1y l2 inicializadas no vacías
    //MOD: l3
    void interseccionV1(lista &l1, lista &l2);

    //EFE: Deja en l3 el resultado de la intersección
    //REQ: l1y l2 inicializadas no vacías
    //MOD: l3
    lista interseccionV2(lista &l1, lista &l2) ;

};

#endif //TP1_ALGORITMOSORD_H