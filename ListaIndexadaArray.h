//
// Created by felipe on 11/05/18.
//

#ifndef TP1_LISTAINDEXADAARRAY_H
#define TP1_LISTAINDEXADAARRAY_H



class ListaIndexadaArray {
public:
    //Efecto:Inicializa la Lista.
    //Requiere:—
    //Modifica:—
    void iniciar();
    //Efecto:Destruye la Lista.
    //Requiere: Lista inicializada
    //Modifica: Lista L
    void destruir();
    //Efecto:.Vacia la Lista
    //Requiere: Lista Inicializada
    //Modifica: Lista L
    void vaciar();
    //Efecto: Retorna verdadero si la lista esta vacia
    //Requiere: Lista Inicializada
    //Modifica:
    bool vacia();
    //Efecto: Insertar un elemento e en el indice i. Hace un corrimiento de los indices presentes
    //Requiere: Indice valido
    //Modifica: Lista L
    void insertar(int,int);
    //Efecto: Elimina el elemento con el indice i. Hace un corrimiento de los indices presentes
    //Requiere: Indice valido
    //Modifica: Lista L
    void borrar(int);
    //Efecto: Cambia el elemento con el indice i por el elmento e
    //Requiere: Indice valido
    //Modifica: Lista L
    void modificarElem(int,int);
    //Efecto: Intercambia los elementos con los indices i1 e i2
    //Requiere: Indices validos
    //Modifica: Lista L
    void intercambiar(int,int);
    //Efecto: Retorna el elemento con indice i
    //Requiere: Indice valido
    //Modifica:
    int recuperar(int);
    //Efecto: Retorna la cantidad de elemtos de la lista L
    //Requiere:Lista inicializada
    //Modifica:
    int numElem();
    //Efecto:
    //Requiere:
    //Modifica:
    void listar();

    int ultimoLleno;
    int cantElem;
private:
    int lista[30];
};


#endif //TP1_LISTAINDEXADAARRAY_H