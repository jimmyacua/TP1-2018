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

    void iniciar();
    void destruir();
    void vaciar();
    bool vacia();
    void insertar(int,pos);
    void agregarAlFinal(int);
    void borrar(pos);
    void modificarElem(pos,int);
    void intercambiar(pos,pos);
    pos primera();
    pos ultima();
    pos siguente(pos);
    pos anterior(pos);
    int recuperar(pos);
    int numElem();
    void listar();

    pos traducePos(int);

private:
    pos posicion;
    Pos *primero;
    Pos *ultimo;
    int nElementos;

};


#endif //TP1_LISTAPOSLSE_H
