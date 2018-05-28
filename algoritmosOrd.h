#ifndef TP1_ALGORITMOSORD_H
#define TP1_ALGORITMOSORD_H

#include "ListaOrdLSE.h"
//#include "ListaOrdArray.h"


typedef ListaOrdLSE listaO;
//typedef ListaOrdArray listaO;

class algoritmosOrd {
public:
    //EFE: Retorna true si L1 y L2 son iguales
    //REQ: L1 y L2 inicialzada no vacía
    //MOD: ---
    bool iguales(listaO l1, listaO l2);

    //EFE: Copia l1 en l2
    //REQ: l1 inicializada no vacía
    //MOD: ---
    listaO copiar(listaO l1);

    //EFE: Retorna true si todos los elementos de l1 están en l2
    //REQ: l1 y l2 inicializadas no vacías
    //MOD: l2
    bool contenida(listaO l1, listaO l2);

    //EFE: Retorna true si e está en l1
    //REQ: l1 inicializada no vacía
    //MOD: ---
    bool pertenece(listaO l1, int e);

    //EFE: Elimina de l1 los ementos que estánen l2
    //REQ:  l1 y l2 inicializadas no vacía
    //MOD: l1
    void eliminar(listaO &l1, listaO &l2);

    //EFE: Agrega a l1 los elementos de l2
    //REQ: l1y l2 inicializadas no vacías
    //MOD: l1
    void unionV1(listaO &l1, listaO &l2);

    //EFE: Deja en l3 el resultado de la unión
    //REQ: l1 y l2 inicializada no vacía
    //MOD: l3
    listaO unionV2(listaO &l1, listaO &l2);

    //EFE: Elimina de l1 los elementos de l2 utilizando pertenece
    //REQ: l1y l2 inicializadas no vacías
    //MOD: l3
    listaO interseccionV1(listaO &l1, listaO &l2);

    //EFE: Elimina de l1 los elementos de l2 sin usar pertenece
    //REQ: l1y l2 inicializadas no vacías
    //MOD: l3
    listaO interseccionV2(listaO &l1, listaO &l2) ;

};

#endif //TP1_ALGORITMOSORD_H