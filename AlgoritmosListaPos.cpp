//
// Created by jimmy on 20/05/18.
//

#include <iostream>
#include "AlgoritmosListaPos.h"

using namespace std;

void Algoritmos::listar(listaP& l) {
    pos p = l.primera();
    int cont = 1;
    while(p != 0 && cont <= l.numElem()){
        cout << l.recuperar(p) << endl;
        p = l.siguente(p);
        cont++;
    }
}

bool Algoritmos::simetrica(listaP& l) {
    pos inicio = l.primera();
    pos final = l.ultima();
    bool simetricas = true;
    while(simetricas && (inicio != final) && (l.siguente(final) != inicio)){ //mientras no se traslapen
        if(l.recuperar(inicio) != l.recuperar(final)){
            simetricas = false;
        }
        inicio = l.siguente(inicio);
        final = l.anterior(final);
    }
    return simetricas;
}

void Algoritmos::invertir(listaP& l) {
    pos inicio = l.primera();
    pos final = l.ultima();
    while((inicio != final) && (l.siguente(final) != inicio)){
        l.intercambiar(inicio, final);
        inicio = l.siguente(inicio);
        final = l.anterior(final);
    }
}

bool Algoritmos::buscar(listaP l, int e) {
    pos p = l.primera();
    bool encontrado = false;
    while(p != 0 && !encontrado){
        if(l.recuperar(p) == e){
            encontrado = true;
        }
        p = l.siguente(p);
    }
    return encontrado;
}

void Algoritmos::elimRepetidos(listaP& l) {
    pos p = l.primera();
    int cont = 1;
    while(p != 0 && cont <= l.numElem()){
        int cont2 = cont+1;
        pos aux = l.siguente(p);
        while(aux != 0 && cont2 <= l.numElem()){
            if(l.recuperar(p) == l.recuperar(aux)){
                l.borrar(aux);
            }
            aux = l.siguente(aux);
            cont2++;
        }
        p = l.siguente(p);
        cont++;
    }
}

bool Algoritmos::subLista(listaP& l1, listaP& l2) {
    pos p2 = l2.primera();
    pos p1 = l1.primera();
    bool esSublista = false;
    int cont2 = 1;
    while(!esSublista){
        if(l2.recuperar(p2) !=l1.recuperar(p1)){
            p2 = l2.siguente(p2);
            cont2++;
            if(p2 == 0 || cont2 > l2.numElem()){
                return esSublista;
            }
        }
        int cont1 = 1;
        while(l2.recuperar(p2) == l1.recuperar(p1)){
            p1 = l1.siguente(p1);
            p2 = l2.siguente(p2);
            cont1++;
            if(p1 == 0 || cont1 > l1.numElem()){
                return true;
            }
        }
    }

}

bool Algoritmos::iguales(listaP l1, listaP l2) {
    if(l1.numElem() != l2.numElem()){
        return false;
    }
    else {
        bool iguales = true;
        pos p1 = l1.primera();
        pos p2 = l2.primera();
        int cont = 1;
        while (iguales && p1 != 0 && p2 != 0 && cont <= l1.numElem()) {
            if (l1.recuperar(p1) != l2.recuperar(p2)) {
                iguales = false;
            }
            p1 = l1.siguente(p1);
            p2 = l2.siguente(p2);
            cont++;
        }
        return iguales;
    }
}

void Algoritmos::burbuja(listaP& l) {
    pos p = l.siguente(l.primera());
    int cont1 = 1;
    while(p != 0 && cont1 <= l.numElem()){
        pos aux = l.primera();
        while(aux != l.ultima()){
            if(l.recuperar(aux) > l.recuperar(p)){
                l.intercambiar(p, aux);
            }
            aux = l.siguente(aux);
        }
        p = l.siguente(p);
        cont1++;
    }
}

void Algoritmos::burbujaBidireccinal(listaP& l) {
    bool listo = true;
    pos inicio = l.primera();
    pos final = l.ultima();
    while(listo){
        listo = false;
        pos p = inicio;
        while(p != final){
            if(l.recuperar(p) > l.recuperar(l.siguente(p))){
                l.intercambiar(p,l.siguente(p));
                listo = true;
            }
            p = l.siguente(p);
        }
        if(!listo){ //si nada se intercambia ya está ordenada
            return;
        }
        listo = false;

        final = l.anterior(final);

        pos aux = final;
        while(aux != inicio){
            if(l.recuperar(aux) < l.recuperar(l.anterior(aux))){
                l.intercambiar(aux, l.anterior(aux));
                listo = true;
            }
            aux = l.anterior(aux);
        }
        inicio = l.siguente(inicio);
    }
}

void Algoritmos::seleccionIter(listaP& l){
    pos min;
    pos p = l.primera();
    int cont1 = 1;
    while(p != 0 && cont1 < l.numElem()){
        min = p;
        pos aux = l.siguente(p);
        int cont2 = cont1+1;
        while(aux != 0 && cont2 <= l.numElem()){
            if(l.recuperar(min) > l.recuperar(aux)){
                min = aux;
            }
            aux = l.siguente(aux);
            cont2++;
        }
        if(l.recuperar(min) < l.recuperar(p)){
            l.intercambiar(min, p);
        }
        p = l.siguente(p);
        cont1++;
    }
}

void Algoritmos::seleccionRec(listaP& l) {
    pos inicio = l.primera();
    pos menor = inicio;
    int cont = 1;
    seleccionR(l,inicio, menor, cont);
}

void Algoritmos::seleccionR(listaP& l, pos inicio, pos menor, int cont) {
    if(inicio != 0 && cont < l.numElem()){
        pos aux = inicio;
        int cont2 = cont;
        while(aux != 0 && cont2 <= l.numElem()){
            menor = inicio;
            if(l.recuperar(menor) > l.recuperar(aux)){
                menor = aux;
                l.intercambiar(menor, inicio);
            }
            aux = l.siguente(aux);
            cont2++;
        }
        inicio = l.siguente(inicio);
        seleccionR(l,inicio, menor, cont+1);
    }
}

void Algoritmos::seleccionRecSinCom(listaP& l) {
    pila.iniciar();
    pila.meter(l.primera());
    pos inicio = l.primera();
    pos menor = inicio;
    int cont = 1;
    pos aux;
    while(!pila.vacia() && inicio != 0 && cont <= l.numElem()){
        aux = inicio;
        menor = pila.sacar();
        int cont2 = cont;
        while(aux != 0 && cont2 <= l.numElem()){
            if (l.recuperar(menor) > l.recuperar(aux)) {
                menor = aux;
            }
            if(l.recuperar(menor) < l.recuperar(inicio)){
                l.intercambiar(menor, inicio);
                pila.meter(aux);
            }
            aux = l.siguente(aux);
            cont2++;
        }
        inicio = l.siguente(inicio);
        pila.meter(inicio);
        cont++;
    }
}

void Algoritmos::insercion(listaP& l) {
    pos p = l.primera();
    while (p != l.ultima()) {
        pos p2 = l.siguente(p);
        while (p2 != l.primera()) {
            if (l.recuperar(p2) < l.recuperar(l.anterior(p2))) {
                l.intercambiar(p2, l.anterior(p2));
            }
            p2 = l.anterior(p2);
        }
        p = l.siguente(p);
    }
}

pos Algoritmos::pivote(listaP& l, pos inicio, pos final){
    if(inicio == final){
        return 0;
    }
    pos p = l.siguente(inicio);
    while(p != 0){
        int i = l.recuperar(inicio);
        if(l.recuperar(p) > i){
            return p;
        }else if(i > l.recuperar(p)){
            p = inicio;
            return p;
        }
        p = l.siguente(p);
    }
    return 0;
}

pos Algoritmos::particion(listaP& l, pos pivot, pos inicio, pos final) {
    if (pivot != 0) {
        pos z = inicio;
        pos d = final;
        int pi = l.recuperar(pivot);
        do {
            l.intercambiar(z, d);
            while (l.recuperar(z) < pi) {
                z = l.siguente(z);
            }
            while (l.recuperar(d) >= pi) {
                d = l.anterior(d);
            }
        } while (l.siguente(d) != z);
        return z;
    } else{
        return 0;
    }
}

void Algoritmos::quickSortAho(listaP& l, pos inicio, pos final) {
    pos pivot = pivote(l, inicio, final);
    if(pivot != 0){
        pos part = particion(l,pivot, inicio, final);
        quickSortAho(l,inicio, l.anterior(part));
        quickSortAho(l,part, final);
    }
}

void Algoritmos::quickSortMod(listaP l, pos inicio, pos final) {
    pos pivot = pivote(l, inicio, final);
    if(pivot != 0){
        pos part = particion(l,pivot, inicio, final);
        int contador = 1;
        pos cont = l.primera();
        while(cont != part){
            cont = l.siguente(cont);
            contador++;
        }
        if(contador > 10) { //lo cambié de 50 a 10 para probar sin tener que agregar los 50 elementos.
            quickSortAho(l, inicio, l.anterior(part));
            quickSortAho(l, part, final);
        } else{
            insercion(l);
        }
    }
}

void Algoritmos::mergeSort(listaP& l, pos inicio, pos final) {
    if(inicio != final && l.siguente(inicio) != final){
        int mid = 1;
        pos c = inicio;
        while(c != final){
            mid++;
            c = l.siguente(c);
        }
        mid = mid/2;
        pos mitad = inicio;
        int con = 1;
        while(con < mid){
            mitad = l.siguente(mitad);
            con++;
        }

        mergeSort(l,inicio,mitad);
        mergeSort(l, l.siguente(mitad), final);

        merge(l,inicio, mitad, final);
    }
}

void Algoritmos::merge(listaP& l, pos inicio, pos mitad, pos final) {
    listaP l1;
    l1.iniciar();

    listaP l2;
    l2.iniciar();


    //---------copiar en los arrays--------------

    pos p = inicio;
    int cont = 1;
    while (p != 0 && p != l.siguente(mitad)) {
        l1.agregarAlFinal(l.recuperar(p));
        p = l.siguente(p);
    }

    p = l.siguente(mitad);
    while (p != 0 && p != l.siguente(final)) {
        l2.agregarAlFinal(l.recuperar(p));
        p = l.siguente(p);
    }
    //--------------------------------------------

    pos i = l1.primera();
    pos j = l2.primera();
    pos aux = inicio;
    while(i != 0 && i != mitad && j !=0){
        if(l1.recuperar(i) <= l2.recuperar(j)){
            l.modificarElem(aux,l1.recuperar(i));
            i = l1.siguente(i);
        } else{
            l.modificarElem(aux, l2.recuperar(j));
            j = l2.siguente(j);
        }
        aux = l.siguente(aux);
    }

    cont = 1;
    while(i != 0 && i != mitad && cont < l.numElem()){
        l.modificarElem(aux,l1.recuperar(i));
        i = l1.siguente(i);
        aux = l.siguente(aux);
        cont++;
    }
    cont = 1;
    while(j != 0 && j != final && cont < l.numElem()){
        l.modificarElem(aux,l2.recuperar(j));
        j = l2.siguente(j);
        aux = l.siguente(aux);
        cont++;
    }
}

void Algoritmos::unionOrdenadas(listaP& l1, listaP& l2) {
    pos p2 = l2.primera();
    int cont = 1;
    while(p2 != 0 && cont <= l2.numElem()){
        pos p1 = l1.primera();
        bool existe = false;
        int cont1 = 1;
        while(p1 != 0 && !existe && l1.recuperar(p1) <= l2.recuperar(p2) && cont1 < l1.numElem()){
            if(l1.recuperar(p1) == l2.recuperar(p2)){
                existe = true;
            }
            p1 = l1.siguente(p1);
            cont1++;
        }
        if(!existe){
            l1.insertar(l2.recuperar(p2), p1);
        }
        p2 = l2.siguente(p2);
        cont++;
    }
}

void Algoritmos::unionDesord(listaP& l1, listaP& l2) {
    pos p2 = l2.primera();
    int cont = 1;
    while(p2 != 0 && cont <= l2.numElem()){
        pos p1 = l1.primera();
        bool existe = false;
        int cont1 = 1;
        while(p1 != 0 && !existe && cont1 <= l1.numElem()){
            if(l1.recuperar(p1) == l2.recuperar(p2)){
                existe = true;
            }
            p1 = l1.siguente(p1);
            cont1++;
        }
        if(!existe){
            l1.agregarAlFinal(l2.recuperar(p2));
        }
        p2 = l2.siguente(p2);
        cont++;
    }
}

void Algoritmos::interseccionOrd(listaP& l1, listaP& l2, listaP& l3) {
    l3.iniciar();
    pos p1 = l1.primera();
    int cont1 = 1;
    while(p1 != 0 && cont1 <= l1.numElem()){
        pos p2 = l2.primera();
        bool existe = false;
        int cont2 = 1;
        while(cont2 <= l2.numElem() && p2 != 0 && !existe && l1.recuperar(p1) >= l2.recuperar(p2)){
            if(l1.recuperar(p1) == l2.recuperar(p2)){
                existe = true;
            }
            p2 = l2.siguente(p2);
            cont2++;
        }
        if(existe){
            l3.agregarAlFinal(l1.recuperar(p1));
        }
        p1 = l1.siguente(p1);
        cont1++;
    }
}

void Algoritmos::interseccionDesord(listaP& l1, listaP& l2, listaP& l3) {
    l3.iniciar();
    pos p1 = l1.primera();
    int cont1 = 1;
    while(p1 != 0 && cont1 <= l1.numElem()){
        pos p2 = l2.primera();
        bool existe = false;
        int cont2 = 1;
        while(p2 != 0 && !existe && cont2 <= l2.numElem()){
            if(l1.recuperar(p1) == l2.recuperar(p2)){
                existe = true;
            }
            p2 = l2.siguente(p2);
            cont2++;
        }
        if(existe){
            l3.agregarAlFinal(l1.recuperar(p1));
        }
        p1 = l1.siguente(p1);
        cont1++;
    }
}

void Algoritmos::eliminarOrde(listaP& l1, listaP& l2) {
    int cont= 1;
    pos p1 = l1.primera();
    while(p1 != 0 && cont <= l1.numElem()){
        pos p2 = l2.primera();
        int cont2 = 1;
        bool existe = false;
        while(cont2 <= l2.numElem() && p2 != 0 && !existe && l1.recuperar(p1) >= l2.recuperar(p2)){
            if(l1.recuperar(p1) == l2.recuperar(p2)){
                existe = true;
            }
            p2 = l2.siguente(p2);
            cont2++;
        }
        if(existe){
            pos aux = p1;
            l1.borrar(aux);
        }
        p1 = l1.siguente(p1);
        cont++;
    }
}

void Algoritmos::eliminarDesord(listaP& l1, listaP& l2) {
    pos p1 = l1.primera();
    int cont1 = 1;
    while(p1 != 0 && cont1 <= l1.numElem()){
        pos p2 = l2.primera();
        int cont2 = 1;
        bool existe = false;
        while(p2 != 0 && !existe && cont2 <= l2.numElem()){
            if(l1.recuperar(p1) == l2.recuperar(p2)){
                existe = true;
            }
            p2 = l2.siguente(p2);
            cont2++;
        }
        if(existe){
            pos aux = p1;
            l1.borrar(aux);
        }
        cont1++;
        p1 = l1.siguente(p1);
    }
}
