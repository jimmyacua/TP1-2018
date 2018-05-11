//
// Created by jimmy on 11/05/18.
//

#ifndef TP1_LISTAPOSLSE_H
#define TP1_LISTAPOSLSE_H

struct Pos{
public:
    Pos();
    Pos(int);

    int obtener(Pos);
    void poner(int);

    int elemento;
    Pos *sig;

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

private:
    pos posicion;
    pos primero;
    pos ultimo;
    int nElementos;

};


#endif //TP1_LISTAPOSLSE_H
