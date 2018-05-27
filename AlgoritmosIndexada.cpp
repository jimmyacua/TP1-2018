//
// Created by felipe on 21/05/18.
//

#include "AlgoritmosIndexada.h"
#include <iostream>

using namespace std;

void AlgoritmosIndexada::listar(lista& l){
    int contador = 1;
    int max = l.numElem();
    while(contador <= max){
        cout<<l.recuperar(contador)<<", ";
        contador++;
    }
    cout<<endl;
}

bool AlgoritmosIndexada::simetrica(lista& l){
    int derecha = l.numElem();
    int izquierda = 1;
    bool seguir = true;
    while(seguir&&(izquierda<=derecha)){
        if(l.recuperar(izquierda)==l.recuperar(derecha)){
            derecha--;
            izquierda++;
        }else{
            seguir = false;
        }
    }
    return seguir;
}

void AlgoritmosIndexada::invertir(lista& l){
    int derecha = l.numElem();
    int izquierda = 1;
    bool seguir = true;
    while(izquierda<=derecha){
        l.intercambiar(izquierda,derecha);
        derecha--;
        izquierda++;
    }
}

bool AlgoritmosIndexada::buscar(int elemento, lista& l){
    int indiceRecorrido = 1;
    int max = l.numElem();
    bool seguir = true;
    bool encontrado = false;
    while((indiceRecorrido<=max)&&seguir){
        if(l.recuperar(indiceRecorrido)==elemento){
            seguir = false;
            encontrado = true;
        }
        indiceRecorrido++;
    }
    return encontrado;
}

void AlgoritmosIndexada::eliminarRepetidos(lista& l){
    int indice = 1;
    int recorrido;
    while(indice < l.numElem()){
        recorrido = indice+1;
        while(recorrido <= l.numElem()){
            if(l.recuperar(indice)==l.recuperar(recorrido)){
                l.borrar(recorrido);
            }else{
                recorrido++;
            }
        }
        indice++;
    }
}

bool AlgoritmosIndexada::subLista(lista& l1,lista& l2){
    int indiceL1 = 1;
    int indiceL2 = 1;
    int max = l2.numElem();
    bool esSublista = false;
    while((indiceL2<=max)&&!esSublista){
        if(l1.recuperar(indiceL1)==l2.recuperar(indiceL2)){
            bool seguir = true;
            while(seguir){
                indiceL1++;
                indiceL2++;
                if(l1.recuperar(indiceL1)==l2.recuperar(indiceL2)){
                    if((indiceL1+1)>l1.numElem()){
                        seguir = false;
                        esSublista = true;
                    }
                }else{
                    indiceL1 = 1;
                    seguir = false;
                }
            }
        }else{
            indiceL2++;
        }
    }
    return esSublista;
}

bool AlgoritmosIndexada::iguales(lista& l1,lista& l2){
    int indiceL1 = 1;
    int indiceL2 = 1;
    int max = l1.numElem();
    bool seguir = true;
    bool iguales = false;
    if(l1.numElem()!=l2.numElem()){
        return false;
    }
    if(l1.recuperar(indiceL1)!=l2.recuperar(indiceL2)){
        return false;
    }
    while((indiceL1<=max)&&(seguir)){
        if(l1.recuperar(indiceL1)==l2.recuperar(indiceL2)){
            indiceL1++;
            indiceL2++;
        }else{
            seguir = false;
        }
    }
    if(seguir){
        iguales = true;
    }
    return iguales;
}

void AlgoritmosIndexada::burbujaOriginal(lista& l){
    int max = l.numElem();
    int indice = 1;
    bool seguir = true;
    while((indice<max)&&seguir){
        seguir = false;
        for(int j=1;j<max;j++){
            if(l.recuperar(j)>l.recuperar(j+1)){
                l.intercambiar(j,j+1);
                seguir = true;
            }
        }
        indice++;
    }
}

void AlgoritmosIndexada::burbujaBiDireccional(lista& l){
    int max = l.numElem();
    int indice = 1;
    int ultDerecha = max;
    int ultIzquierda = 1;
    bool seguir = true;
    while((indice<max)&&seguir){
        seguir = false;
        for(int j=ultIzquierda;j<max;j++){
            if(l.recuperar(j)>l.recuperar(j+1)){
                l.intercambiar(j,j+1);
                ultDerecha = j;
                seguir = true;
            }
        }
        if(!seguir){
            return;
        }
        seguir = false;
        for(int k=ultDerecha;k>1;k--){
            if(l.recuperar(k)<l.recuperar(k-1)){
                l.intercambiar(k,k-1);
                ultIzquierda = k;
                seguir = true;
            }
        }
        indice++;
    }
}

void AlgoritmosIndexada::seleccionIterativa(lista& l){
    int max = l.numElem();
    int min;
    for(int i=1;i<max;i++){
        min = i;
        for(int j=i+1;j<=max;j++){
            if(l.recuperar(j)<l.recuperar(min)){
                min=j;
            }
        }
        l.intercambiar(i,min);
    }
}

void AlgoritmosIndexada::seleccionRecursiva(lista& l){
    int indice = 1;
    int menor = indice;
    seleccionR(l,indice,menor);
}

void AlgoritmosIndexada::seleccionR(lista& l, int indice, int menor) {
    int max = l.numElem();
    if(indice<=max){
        for(int i = indice;i<=max;i++){
            menor=indice;
            if(l.recuperar(i)<l.recuperar(menor)){
                menor = i;
                l.intercambiar(menor,indice);
            }
        }
        indice++;
        seleccionR(l,indice,menor);
    }
}

void AlgoritmosIndexada::seleccionrecursivaPila(lista& l){
    pila.iniciar();
    pila.meter(1);
    int inicio = 1;
    int menor = inicio;
    int aux;
    while(!pila.vacia() && inicio <= l.numElem()){
        aux = inicio;
        menor = pila.sacar();
        while(aux <= l.numElem()){
            if (l.recuperar(menor) > l.recuperar(aux)) {
                menor = aux;
                pila.meter(aux);
                l.intercambiar(menor, inicio);
            }
            aux = aux+1;
        }
        inicio = inicio+1;
        pila.meter(inicio);
    }
}


void AlgoritmosIndexada::insercion(lista& l){
    int indice;
    for(int i=1;i<=l.numElem();i++){
        indice = i;
        while((indice>1)&&(l.recuperar(indice)<l.recuperar(indice-1))){
            l.intercambiar(indice,indice-1);
            indice--;
        }
    }
}

int AlgoritmosIndexada::pivote(lista& l, int inicio, int final) {
    if(inicio==final){
        return 0;
    }
    int indice = inicio+1;
    while(indice<=final){
        if(l.recuperar(indice)>l.recuperar(inicio)){
            return indice;
        }else if(l.recuperar(indice)<l.recuperar(inicio)){
            return inicio;
        }
        indice++;
    }
    return 0;
}

int AlgoritmosIndexada::particion(lista& l, int pivote, int inicio, int final) {
    if(pivote>0){
        int derecha = final;
        int izquierda = inicio;
        int p = l.recuperar(pivote);
        do{
            l.intercambiar(izquierda,derecha);
            while(l.recuperar(izquierda)<p){
                izquierda++;
            }
            while(l.recuperar(derecha)>=p){
                derecha--;
            }
        }while(izquierda<=derecha);
        return izquierda;
    }else{
        return 0;
    }
}

void AlgoritmosIndexada::quickSortAho(lista& l, int inicio, int final){
    int p = pivote(l,inicio,final);
    if(p>0){
        int part = particion(l,p,inicio,final);
        quickSortAho(l,inicio,part-1);
        quickSortAho(l,part,final);
    }
}
void AlgoritmosIndexada::quickSortMod(lista& l, int inicio, int final){
    int p = pivote(l,inicio,final);
    if(p>0){
        int part = particion(l,p,inicio,final);
        if(part>50){
            quickSortAho(l,inicio,part-1);
            quickSortAho(l,part,final);
        }else{
            insercion(l);
        }

    }
}

void AlgoritmosIndexada::mergeSort(lista& l, int inicio, int final){
    if(inicio<final){
        int cantElem = 0;
        int min = inicio;
        int max = final;
        while(min<=max) {
            cantElem++;
            min++;
        }
        cantElem = cantElem/2;
        int mitad = (inicio-1)+cantElem;
        mergeSort(l,inicio,mitad);
        mergeSort(l,mitad+1,final);

        merge(l,inicio,mitad,final);
    }
}

void AlgoritmosIndexada::merge(lista& l, int inicio, int medio, int final){
    lista l2;
    l2.iniciar();
    int insertar = 1;
    for(int i = inicio; i<=final; i++){
        l2.insertar(l.recuperar(i),insertar);
        insertar++;
    }

    int i = 1;
    int j = (medio%l2.numElem())+1;
    int mitad = medio%l2.numElem();
    int max = l2.numElem();
    int k = inicio;

    while(i<=mitad&&j<=max){
        if(l2.recuperar(i)<=l2.recuperar(j)){
            l.modificarElem(l2.recuperar(i),k);
            i++;
        }else{
            l.modificarElem(l2.recuperar(j),k);
            j++;
        }
        k++;
    }
    while(i<=mitad){
        l.modificarElem(l2.recuperar(i),k);
        i++;
        k++;
    }
    while(j<=max){
        l.modificarElem(l2.recuperar(j),k);
        j++;
        k++;
    }
}

void AlgoritmosIndexada::unionOrd(lista& l1,lista& l2){
    int indice = 1;
    int recorrido;
    int max = l2.numElem();
    bool esta = false;
    while(indice<=max){
        recorrido = 1;
        esta = false;
        while((recorrido<=l1.numElem())&&!esta){
            if(l2.recuperar(indice)==l1.recuperar(recorrido)){
                esta = true;
            }else if(l2.recuperar(indice)<l1.recuperar(recorrido)){
                int corrimiento = recorrido;
                if(corrimiento == l1.numElem()){
                    l1.insertar(corrimiento+1,l2.recuperar(indice));
                }else{
                    int insertar = l1.numElem();
                    while(corrimiento!=insertar){
                        l1.insertar(l1.recuperar(insertar-1),insertar);
                        insertar--;
                    }
                    l1.insertar(l2.recuperar(indice),insertar);
                }
            }
        }
        indice++;
    }
}

void AlgoritmosIndexada::unionDes(lista& l1,lista& l2){
    int indice = 1;
    int recorrido;
    int max = l2.numElem();
    bool esta = false;
    while(indice<=max){
        recorrido = 1;
        esta = false;
        while((recorrido<=l1.numElem())&&!esta){
            if(l2.recuperar(indice)==l1.recuperar(recorrido)){
                esta = true;
            }else{
                recorrido++;
            }
        }
        if(!esta){
            l1.insertar(l2.recuperar(indice),l1.numElem()+1);
        }
        indice++;
    }
}

void AlgoritmosIndexada::interseccionOrd(lista& l1,lista& l2,lista& l3){
    int indice = 1;
    int recorrido;
    int insertar = 1;
    bool esta;
    while(indice<=l1.numElem()){
        recorrido = 1;
        esta = false;
        while((recorrido<=l2.numElem())&&!esta){
            if(l1.recuperar(indice)==l2.recuperar(recorrido)){
                l3.insertar(l1.recuperar(indice),insertar);
                insertar++;
                esta = true;
            }else if(l1.recuperar(indice)<l2.recuperar(recorrido)){
                esta = true;
            }
            recorrido++;
        }
        indice++;
    }
}

void AlgoritmosIndexada::interseccionDes(lista& l1,lista& l2,lista& l3){
    int indice = 1;
    int recorrido;
    int insertar = 1;
    bool esta;
    while(indice<=l1.numElem()){
        recorrido = 1;
        esta = false;
        while((recorrido<=l2.numElem())&&!esta){
            if(l1.recuperar(indice)==l2.recuperar(recorrido)){
                l3.insertar(l1.recuperar(indice),insertar);
                insertar++;
                esta = true;
            }
            recorrido++;
        }
        indice++;
    }
}

void AlgoritmosIndexada::eliminarOrd(lista& l1,lista& l2){
    int indice = 1;
    int recorrido;
    bool esta;
    while(indice<=l1.numElem()){
        recorrido = 1;
        esta = false;
        while((recorrido<=l2.numElem())&&!esta){
            if(l1.recuperar(indice)==l2.recuperar(recorrido)){
                l1.borrar(indice);
                indice--;
                esta = true;
            }else if(l1.recuperar(indice)<l2.recuperar(recorrido)){
                esta = true;
            }
            recorrido++;
        }
        indice++;
    }
}

void AlgoritmosIndexada::eliminarDes(lista& l1,lista& l2){
    int indice = 1;
    int recorrido;
    bool esta;
    while(indice<=l1.numElem()){
        recorrido = 1;
        esta = false;
        while((recorrido<=l2.numElem())&&!esta){
            if(l1.recuperar(indice)==l2.recuperar(recorrido)){
                l1.borrar(indice);
                indice--;
                esta = true;
            }
            recorrido++;
        }
        indice++;
    }
}