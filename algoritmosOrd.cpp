#include "algoritmosOrd.h"
#include <iostream>

using namespace std;

bool algoritmosOrd::iguales(lista l1, lista l2) {
    if (l1.numElem() != l2.numElem()){
        return false;
    } else {
        auto e1 = l1.primero();
        auto e2 = l2.primero();
        for(int i = 0; i < l1.numElem(); i++){
            if (e1 != e2){
                return false;
            } else{
                e1 = l1.siguiente(e1);
                e2 = l2.siguiente(e2);
            }
        }
    }
    return true;
}