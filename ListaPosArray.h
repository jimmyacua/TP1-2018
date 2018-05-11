//
// Created by jimmy on 11/05/18.
//

#ifndef TP1_LISTAPOS_H
#define TP1_LISTAPOS_H

#include <iostream>

typedef int pos;

class ListaPosArray {
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


    pos primero;
    pos ultimo_lleno;
    int nElementos;


private:
    pos lista[30];

};


#endif //TP1_LISTAPOS_H
