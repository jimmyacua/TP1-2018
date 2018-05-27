#include <iostream>
//#include "ListaPosArray.h"
#include "ListaPosLSE.h"
//#include "ListaPosLDE.h"
//#include "ListaOrdArray.h"
//#include "ListaIndexadaArray.h"
#include "ListaIndexadaLSE.h"
#include "ListaOrdLSE.h"
#include "Pila.h"
#include "AlgoritmosListaPos.h"

using namespace std;

typedef ListaPosLSE listaPos;
//typedef ListaPosArray listaPos;
//typedef ListaPosLDE listaPos;

//typedef ListaOrdArray listaOrd;
typedef ListaOrdLSE listaOrd;

typedef ListaIndexadaLSE listaInd;
//typedef ListaIndexadaArray listaInd;


int main() {

    int desicion;
    bool continuar = true;
    while (continuar) {
        cout << "MENU DE OPCIONES\n" << endl;
        cout << "¿Que estructura de datos desea usar?\n (Ingrese un numero)" << endl;
        cout << "1. Lista Posicionada." << endl;
        cout << "2. Lista Indexada." << endl;
        cout << "3. Lista Ordenada." << endl;
        cout << "4. Pila." << endl;
        cout << "5. Algoritmos LISTAS POSICIONADA." << endl;
        cout << "6. Algoritmos LISTAS INDEXADA." << endl;
        cout << "7. Algoritmos LISTA ORDENADA." << endl;

        cout << "0. Salir" << endl;
        cin >> desicion;

        switch (desicion) {
            case 1: {
                int desicion2;
                bool continuar2 = true;
                listaPos L;
                while (continuar2) {
                    cout << "MENU DE OPCIONES LISTA POSICIONADA\n" << endl;
                    cout << "¿Que desea hacer?\n (Ingrese un numero)" << endl;
                    cout << "   1. iniciar." << endl;
                    cout << "   2. destruir." << endl;
                    cout << "   3. vaciar." << endl;
                    cout << "   4. Averiguar si la lista esta vacia." << endl;
                    cout << "   5. Insertar un elemento nuevo en la lista." << endl;
                    cout << "   6. Agregar un elemento al final de la lista." << endl;
                    cout << "   7. Borrar un elemento." << endl;
                    cout << "   8. Modificar una posicion." << endl;
                    cout << "   9. Averiguar quien esta de primero." << endl;
                    cout << "   10. Averiguar quien esta de ultimo." << endl;
                    cout << "   11. Averiguar que elemento esta siguiente a otro." << endl;
                    cout << "   12. Averiguar que elemento esta antes que otro." << endl;
                    cout << "   13. Averiguar cuantos elementos tiene la lista." << endl;
                    cout << "   14. Intercambiar dos posiciones." << endl;
                    cout << "   15. Ver la lista." << endl;
                    cout << "   0. Salir" << endl;
                    cin >> desicion2;
                    switch (desicion2) {
                        case 1: {
                            L.iniciar();
                        }
                            break;
                        case 2: {
                            L.destruir();
                        }
                            break;
                        case 3: {
                            L.vaciar();
                        }
                            break;
                        case 4: {
                            if (L.vacia()) {
                                cout << "       La lista esta vacía." << endl;
                            } else {
                                cout << "       La lista no esta vacía." << endl;
                            }
                        }
                            break;
                        case 5: {
                            pos p;
                            int c;
                            int c2;
                            cout << "       Ingrese el elemento nuevo que desea ingresar." << endl;
                            cin >> c;
                            cout << "       Ingrese la posicion donde desea ingresar ese nuevo caracter."
                                 << endl;
                            cin >> c2;
                            p = L.traducePos(c2);
                            L.insertar(c, p);
                        }
                            break;
                        case 6: {
                            //agregar al final
                            int c;
                            cout << "       Ingrese el elemento nuevo que desea agregar al final." << endl;
                            cin >> c;
                            L.agregarAlFinal(c);
                        }
                            break;
                        case 7: {
                            //borrar
                            int c;
                            cout << "       Ingrese la posicion que desea borrar." << endl;
                            cin >> c;
                            pos p = L.traducePos(c);
                            L.borrar(p);
                        }
                            break;
                        case 8: {
                            //modificar
                            int c;
                            int c2;
                            cout << "Ingrese la posicion que desea modificar." << endl;
                            cin >> c2;
                            cout << "Ingrese el nuevo caracter." << endl;
                            cin >> c;
                            pos p = L.traducePos(c2);
                            L.modificarElem(p, c);
                        }
                            break;
                        case 9: {
                            //primera
                            cout << "El elemento de la primera posicion es: " << L.recuperar(L.primera()) << endl;
                        }
                            break;
                        case 10: {
                            //ultima
                            cout << "El elemento de la ultima posicion es: " << L.recuperar(L.ultima()) << endl;
                        }
                            break;
                        case 11: {
                            //siguiente
                            int c;
                            cout << "Ingrese la posicion." << endl;
                            cin >> c;
                            pos p = L.traducePos(c);
                            cout << "El elemneto que esta despues de " << p->elemento << " es "
                                 << L.siguente(p)->elemento
                                 << endl;
                        }
                            break;
                        case 12: {
                            //anterior
                            int c;
                            cout << "Ingrese el caracter." << endl;
                            cin >> c;
                            pos p = L.traducePos(c);
                            cout << "El elemeneto que esta antes de " << p->elemento << " es "
                                 << L.anterior(p)->elemento << endl;
                        }
                            break;
                        case 13: {
                            //nelementos
                            cout << "La lista tiene " << L.numElem() << " elementos/posiciones." << endl;
                        }
                            break;
                        case 14: {
                            //intercambiar
                            int c1;
                            pos p1;
                            int c2;
                            pos p2;
                            cout << "Ingrese la primer posicion." << endl;
                            cin >> c1;
                            p1 = L.traducePos(c1);
                            cout << "Ingrese la segunda posicion." << endl;
                            cin >> c2;
                            p2 = L.traducePos(c2);
                            L.intercambiar(p1, p2);
                        }
                            break;
                        case 15: {
                            //ver
                            L.listar();
                        }
                            break;
                        case 0: {
                            //salir
                            continuar2 = false;
                        }
                            break;
                        default:
                            cout << "Ingrese un numero valido" << endl;
                    }
                }
            }
                break;
            case 2: { //Lista INDEXADA
                int desicion3;
                bool continuar3 = true;
                listaInd L; //CAMBIAR POR LISTA INDEXADA
                while (continuar3) {
                    cout << "MENU DE OPCIONES LISTA INDEXADA\n" << endl;
                    cout << "¿Que desea hacer?\n (Ingrese un numero)" << endl;
                    cout << "   1. iniciar." << endl;
                    cout << "   2. destruir." << endl;
                    cout << "   3. vaciar." << endl;
                    cout << "   4. Averiguar si la lista esta vacia." << endl;
                    cout << "   5. Insertar un elemento nuevo en la lista." << endl;
                    cout << "   6. Agregar un elemento al final de la lista." << endl;
                    cout << "   7. Borrar un elemento." << endl;
                    cout << "   8. Modificar una posicion." << endl;
                    cout << "   9. Averiguar quien esta de primero." << endl;
                    cout << "   10. Averiguar quien esta de ultimo." << endl;
                    cout << "   11. Averiguar que elemento esta siguiente a otro." << endl;
                    cout << "   12. Averiguar que elemento esta antes que otro." << endl;
                    cout << "   13. Averiguar cuantos elementos tiene la lista." << endl;
                    cout << "   14. Intercambiar dos posiciones." << endl;
                    cout << "   15. Ver la lista." << endl;
                    cout << "   0. Salir" << endl;
                    cin >> desicion3;
                    switch (desicion3) {
                        case 1: {
                            L.iniciar();
                        }
                            break;
                        case 2: {
                            L.destruir();
                        }
                            break;
                        case 3: {
                            L.vaciar();
                        }
                            break;
                        case 4: {
                            if (L.vacia()) {
                                cout << "       La lista esta vacía." << endl;
                            } else {
                                cout << "       La lista no esta vacía." << endl;
                            }
                        }
                            break;
                        case 5: {
                            int c;
                            int c2;
                            cout << "       Ingrese el elemento nuevo que desea ingresar." << endl;
                            cin >> c;
                            cout << "       Ingrese el indice donde desea ingresar ese nuevo caracter."
                                 << endl;
                            cin >> c2;
                            L.insertar(c, c2);
                            break;
                            case 6: {
                                //borrar
                                int c;
                                cout << "       Ingrese el indice del elemento que desea borrar." << endl;
                                cin >> c;
                                L.borrar(c);
                            }
                            break;
                            case 7: {
                                //modificar
                                int c;
                                int c2;
                                cout << "Ingrese el indice del elemento que desea modificar." << endl;
                                cin >> c2;
                                cout << "Ingrese el nuevo elemento." << endl;
                                cin >> c;
                                L.modificarElem(c2, c);
                            }
                            break;
                            case 8: {
                                //nelementos
                                cout << "La lista tiene " << L.numElem() << " elementos." << endl;
                            }
                            break;
                            case 9: {
                                //intercambiar
                                int c1;
                                int c2;
                                cout << "Ingrese el primer indice." << endl;
                                cin >> c1;
                                cout << "Ingrese el segundo indice." << endl;
                                cin >> c2;
                                L.intercambiar(c1, c2);
                            }
                            break;
                            case 10: {
                                //recuperar elemento
                                int c1;
                                cout << "Ingrese el indice que quiere recuperar." << endl;
                                cin >> c1;
                                cout << "El elemento que esta en ese indice es: " << L.recuperar(c1) << endl;
                            }
                            break;
                            case 11: {
                                //ver
                                L.listar();
                            }
                            break;
                            case 0: {
                                //salir
                                continuar3 = false;
                            }
                            break;
                            default:
                                cout << "Ingrese un numero valido" << endl;
                        }
                    }
                }
            }
                break;

            case 3: {  //LISTA ORDENADA
                int decision4;
                bool continuar4 = true;
                listaOrd L; //CAMBIAR POR LISTA ORDENADA
                while (continuar4) {
                    cout << "MENU DE OPCIONES LISTA ORDENADA\n" << endl;
                    cout << "¿Que desea hacer?\n (Ingrese un numero)" << endl;
                    cout << "   1. iniciar." << endl;
                    cout << "   2. destruir." << endl;
                    cout << "   3. vaciar." << endl;
                    cout << "   4. Averiguar si la lista esta vacia." << endl;
                    cout << "   5. Insertar un elemento nuevo en la lista." << endl; //*
                    cout << "   7. Borrar un elemento." << endl;
                    cout << "   9. Averiguar quien esta de primero." << endl;
                    cout << "   10. Averiguar quien esta de ultimo." << endl;
                    cout << "   11. Averiguar que elemento esta siguiente a otro." << endl;
                    cout << "   12. Averiguar que elemento esta antes que otro." << endl;
                    cout << "   13. Averiguar cuantos elementos tiene la lista." << endl;
                    cout << "   15. Ver la lista." << endl;
                    cout << "   0. Salir" << endl;
                    cin >> decision4;
                    switch (decision4) {
                        case 1: {
                            L.iniciar();
                        }
                            break;
                        case 2: {
                            L.destruir();
                        }
                            break;
                        case 3: {
                            L.vaciar();
                        }
                            break;
                        case 4: {
                            if (L.vacio()) {
                                cout << "       La lista esta vacía." << endl;
                            } else {
                                cout << "       La lista no esta vacía." << endl;
                            }
                        }
                            break;
                        case 5: {
                            pos p;
                            int c;
                            int c2;
                            cout << "       Ingrese el elemento nuevo que desea ingresar." << endl;
                            cin >> c;
                            L.insertar(c);
                        }
                            break;

                        case 7: {
                            //borrar
                            int c;
                            cout << "       Ingrese la posicion que desea borrar." << endl;
                            cin >> c;
                            L.borrar(c);
                        }
                            break;

                        case 9: {
                            //primera
                            cout << "El elemento de la primera posicion es: " << L.primero() << endl;
                        }
                            break;
                        case 10: {
                            //ultima
                            cout << "El elemento de la ultima posicion es: " << L.ultimo() << endl;
                        }
                            break;
                        case 11: {
                            //siguiente
                            int c;
                            cout << "Ingrese la posicion." << endl;
                            cin >> c;
                            cout << "El elemneto que esta despues de " << c << " es " << L.siguiente(c)
                                 << endl;
                        }
                            break;
                        case 12: {
                            //anterior
                            int c;
                            cout << "Ingrese el caracter." << endl;
                            cin >> c;
                            cout << "El elemeneto que esta antes de " << c << " es " << L.anterior(c) << endl;
                        }
                            break;
                        case 13: {
                            //nelementos
                            cout << "La lista tiene " << L.numElem() << " elementos" << endl;
                        }
                            break;

                        case 15: {
                            //ver
                            L.imprimir();
                        }
                            break;
                        case 0: {
                            //salir
                            continuar4 = false;
                        }
                            break;
                        default:
                            cout << "Ingrese un numero valido" << endl;
                    }
                }

            }
                break;

            case 4: {
                int desicion2;
                bool continuar2 = true;
                Pila<int> P;
                while (continuar2) {
                    cout << "MENU DE OPCIONES PILA\n" << endl;
                    cout << "¿Que desea hacer?\n (Ingrese un numero)" << endl;
                    cout << "   1. iniciar." << endl;
                    cout << "   2. destruir." << endl;
                    cout << "   3. vaciar." << endl;
                    cout << "   4. vacia." << endl;
                    cout << "   5. meter." << endl;
                    cout << "   6. sacar." << endl;
                    cout << "   7. tope." << endl;
                    cout << "   8. Averiguar el numero de elementos." << endl;
                    cout << "   0. Salir." << endl;
                    cin >> desicion2;

                    switch (desicion2) {
                        case 1: {
                            P.iniciar();
                        }
                            break;
                        case 2: {
                            P.destruir();
                        }
                            break;
                        case 3: {
                            P.vaciar();
                        }
                            break;
                        case 4: {
                            if (P.vacia()) {
                                cout << "       La pila esta vacía." << endl;
                            } else {
                                cout << "       La pila no esta vacía." << endl;
                            }
                        }
                            break;
                        case 5: {
                            //meter
                            int c;
                            cout << "       Ingrese el elemento nuevo que desea ingresar." << endl;
                            cin >> c;
                            P.meter(c);

                        }
                            break;
                        case 6: {
                            //sacar
                            cout << "       El elemento que saco es: " << P.sacar() << endl;
                        }
                            break;
                        case 7: {
                            //tope
                            cout << "       El tope de la pila es: " << P.tope() << endl;
                        }
                            break;
                        case 8: {
                            //nelemento
                            cout << "       La pila tiene " << P.numElem() << " elmentos." << endl;
                        }
                            break;
                        case 0: {
                            continuar2 = false;
                        }
                            break;
                        default: {
                            cout << "Ingrese un numero valido" << endl;
                        }
                            break;
                    }
                }
            }
                break;
            case 5: { //algoritmos LP
                bool continuar5 = true;
                Algoritmos algoritmosLP;
                listaPos Lp;
                Lp.iniciar();
                Lp.insertar(145, Lp.traducePos(1));
                Lp.insertar(4, Lp.traducePos(2));
                Lp.insertar(10, Lp.traducePos(3));
                Lp.insertar(31, Lp.traducePos(4));
                Lp.insertar(75, Lp.traducePos(5));
                Lp.insertar(13, Lp.traducePos(6));
                int decision5;
                while (continuar5) {
                    cout << "MENU DE OPCIONES DE ALGORITMOS LISTA POSICIONADA\n" << endl;
                    cout << "¿Que desea hacer?\n (Ingrese un numero)" << endl;
                    cout << "   1. Listar." << endl;
                    cout << "   2. Averiguar si la lista es simetrica." << endl;
                    cout << "   3. Invertir la lista." << endl;
                    cout << "   4. Buscar un elemento." << endl;
                    cout << "   5. Eliminar elementos repetidos." << endl;
                    cout << "   6. Averiguar si L1 es sublista de L2." << endl;
                    cout << "   7. Averiguar si dos listas son iguales." << endl;
                    cout << "   8. Burbuja Original." << endl;
                    cout << "   9. Burbuja Bidireccional." << endl;
                    cout << "   10. Selección iterativa." << endl;
                    cout << "   11. Selección recursiva." << endl;
                    cout << "   12. Selección recursiva usando Pila." << endl;
                    cout << "   13. Inserción." << endl;
                    cout << "   14. Quicksort (Aho)." << endl;
                    cout << "   15. Quicksort MOD." << endl;
                    cout << "   16. MergeSort." << endl;
                    cout << "   17. Unión Ordenadas." << endl;
                    cout << "   18. Unión desordenadas." << endl;
                    cout << "   19. Intersección ordenadas." << endl;
                    cout << "   20. Intersección desordenadas." << endl;
                    cout << "   21. Eliminar los elementos que están en L2 de L1, ORDENADAS." << endl;
                    cout << "   22. Eliminar los elementos que están en L2 de L1, DESORDENADAS." << endl;
                    cout << "   0. Salir." << endl;
                    cout
                            << "NOTA: Se le dará una lista prehecha para ahorrar el trabajo de crear una lista para probar los algoritmos"
                            << endl;
                    cin >> decision5;
                    switch (decision5) {
                        case 1: {
                            algoritmosLP.listar(Lp);
                        }
                            break;
                        case 2: {
                            algoritmosLP.simetrica(Lp);
                        }
                            break;
                        case 3: {
                            algoritmosLP.invertir(Lp);
                        }
                            break;
                        case 4: {
                            int e;
                            cout << "Digite el elemento a bucar" << endl;
                            cin >> e;
                            bool r = algoritmosLP.buscar(Lp, e);
                            if (r) {
                                cout << "El elemento " << e << " sí está en la lista" << endl;
                            } else {
                                cout << "El elemento " << e << " NO está en la lista" << endl;
                            }
                        }
                            break;
                        case 5 : {
                            algoritmosLP.elimRepetidos(Lp);
                        }
                            break;
                        case 6 : {
                            cout << "se le dará la sgt lista para probar si es sublista de la actual. L1 = 10,31,75."
                                 << endl;
                            listaPos l1;
                            l1.iniciar();
                            l1.insertar(10, l1.traducePos(1));
                            l1.insertar(31, l1.traducePos(2));
                            l1.insertar(75, l1.traducePos(3));
                            bool r = algoritmosLP.sublista(l1, Lp);
                            if (r) {
                                cout << "Es sublista de la lista actual" << endl;
                            } else {
                                cout << "NO es sublista de la lista actual" << endl;
                            }
                        }
                            break;
                        case 7: {
                            cout << "se le dará una lista con un elemento diferente para comprobar que no son iguales"
                                 << endl;
                            cout << "La lista será: 145,4,10,31,90,13" << endl;
                            listaPos l1;
                            l1.iniciar();
                            l1.insertar(145, l1.traducePos(1));
                            l1.insertar(4, l1.traducePos(2));
                            l1.insertar(10, l1.traducePos(3));
                            l1.insertar(31, l1.traducePos(4));
                            l1.insertar(90, l1.traducePos(5));
                            l1.insertar(13, l1.traducePos(6));
                            bool r = algoritmosLP.iguales(Lp, l1);
                            if (r) {
                                cout << "Las listas son iguales" << endl;
                            } else {
                                cout << "Las listas son diferentes" << endl;
                            }
                        }
                            break;
                        case 8: {
                            algoritmosLP.burbuja(Lp);
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 9: {
                            algoritmosLP.burbujaBidireccinal(Lp);
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 10: {
                            algoritmosLP.seleccionIter(Lp);
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 11: {
                            algoritmosLP.seleccionRec(Lp);
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 12: {
                            algoritmosLP.seleccionRecSinCom(Lp);
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 13: {
                            algoritmosLP.insercion(Lp);
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 14: {
                            algoritmosLP.quickSortAho(Lp, Lp.primera(), Lp.ultima());
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 15: {
                            algoritmosLP.quickSortMod(Lp, Lp.primera(), Lp.ultima());
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 16: {
                            algoritmosLP.mergeSort(Lp, Lp.primera(), Lp.ultima());
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 17: {
                            cout << "La lista actual se ordenará y se le dará otra lista para hacer la unión" << endl;
                            Lp.vaciar();
                            Lp.insertar(4, Lp.traducePos(1));
                            Lp.insertar(10, Lp.traducePos(2));
                            Lp.insertar(13, Lp.traducePos(3));
                            Lp.insertar(31, Lp.traducePos(4));
                            Lp.insertar(75, Lp.traducePos(5));
                            Lp.insertar(145, Lp.traducePos(6));

                            listaPos l2;
                            l2.iniciar();
                            l2.insertar(1, l2.traducePos(1));
                            l2.insertar(10, l2.traducePos(2));
                            l2.insertar(17, l2.traducePos(3));
                            l2.insertar(56, l2.traducePos(4));
                            l2.insertar(75, l2.traducePos(5));

                            cout << "Las listas son L1: 4,10, 13,31,75,145 y L2: 1,10,17,56,75" << endl;
                            algoritmosLP.unionOrdenadas(Lp, l2);
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 18: {
                            cout << "Se le dará otra lista para hacer la unión" << endl;
                            listaPos l2;
                            l2.iniciar();
                            l2.insertar(10, l2.traducePos(1));
                            l2.insertar(56, l2.traducePos(2));
                            l2.insertar(75, l2.traducePos(3));
                            l2.insertar(1, l2.traducePos(4));
                            l2.insertar(17, l2.traducePos(5));
                            cout << "Las listas son L1: 145,4,10,31,75,13 y L2: 10,56,75,1,17" << endl;
                            algoritmosLP.unionDesord(Lp, l2);
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 19: {
                            cout << "La lista actual se ordenará y se le dará otra lista para hacer la intersección."
                                 << endl;
                            Lp.vaciar();
                            Lp.insertar(4, Lp.traducePos(1));
                            Lp.insertar(10, Lp.traducePos(2));
                            Lp.insertar(13, Lp.traducePos(3));
                            Lp.insertar(31, Lp.traducePos(4));
                            Lp.insertar(75, Lp.traducePos(5));
                            Lp.insertar(145, Lp.traducePos(6));

                            listaPos l2;
                            l2.iniciar();
                            l2.insertar(1, l2.traducePos(1));
                            l2.insertar(10, l2.traducePos(2));
                            l2.insertar(17, l2.traducePos(3));
                            l2.insertar(56, l2.traducePos(4));
                            l2.insertar(75, l2.traducePos(5));

                            cout << "Las listas son L1: 4,10, 13,31,75,145 y L2: 1,10,17,56,75" << endl;
                            listaPos l3;
                            l3.iniciar();
                            algoritmosLP.interseccionOrd(Lp, l2, l3);
                            algoritmosLP.listar(l3);
                        }
                            break;
                        case 20: {
                            cout << "Se le dará otra lista para hacer la intersección" << endl;
                            listaPos l2;
                            l2.iniciar();
                            l2.insertar(10, l2.traducePos(1));
                            l2.insertar(56, l2.traducePos(2));
                            l2.insertar(75, l2.traducePos(3));
                            l2.insertar(1, l2.traducePos(4));
                            l2.insertar(17, l2.traducePos(5));
                            cout << "Las listas son L1: 145,4,10,31,75,13 y L2: 10,56,75,1,17" << endl;
                            listaPos l3;
                            l3.iniciar();
                            algoritmosLP.interseccionDesord(Lp, l2, l3);
                            algoritmosLP.listar(l3);
                        }
                            break;
                        case 21: {
                            cout << "La lista actual se ordenará y se le dará otra lista" << endl;
                            Lp.vaciar();
                            Lp.insertar(4, Lp.traducePos(1));
                            Lp.insertar(10, Lp.traducePos(2));
                            Lp.insertar(13, Lp.traducePos(3));
                            Lp.insertar(31, Lp.traducePos(4));
                            Lp.insertar(75, Lp.traducePos(5));
                            Lp.insertar(145, Lp.traducePos(6));

                            listaPos l2;
                            l2.iniciar();
                            l2.insertar(1, l2.traducePos(1));
                            l2.insertar(10, l2.traducePos(2));
                            l2.insertar(17, l2.traducePos(3));
                            l2.insertar(56, l2.traducePos(4));
                            l2.insertar(75, l2.traducePos(5));

                            cout << "Las listas son L1: 4,10, 13,31,75,145 y L2: 1,10,17,56,75" << endl;
                            algoritmosLP.eliminarOrde(Lp, l2);
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 22: {
                            cout << "Se le dará otra lista." << endl;
                            listaPos l2;
                            l2.iniciar();
                            l2.insertar(10, l2.traducePos(1));
                            l2.insertar(56, l2.traducePos(2));
                            l2.insertar(75, l2.traducePos(3));
                            l2.insertar(1, l2.traducePos(4));
                            l2.insertar(17, l2.traducePos(5));
                            cout << "Las listas son L1: 145,4,10,31,75,13 y L2: 10,56,75,1,17" << endl;
                            algoritmosLP.eliminarDesord(Lp, l2);
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 0: {
                            continuar5 = false;
                        }
                            break;
                        default: {
                            cout << "Ingrese un numero valido." << endl;
                        }
                    }
                }
            }
                break;

//--------------------------------------------------------------------------------
            case 6:{ // lista indexada
                bool continuar6 = true;
                Algoritmos algoritmosLI;
                listaInd L;
                L.iniciar();
                L.insertar(145,1);
                L.insertar(4, 2);
                L.insertar(10,3);
                L.insertar(31,4);
                L.insertar(75,5);
                L.insertar(13,6);
                int decision6;
                while (continuar6) {
                    cout << "MENU DE OPCIONES DE ALGORITMOS LISTA INDEXADA\n" << endl;
                    cout << "¿Que desea hacer?\n (Ingrese un numero)" << endl;
                    cout << "   1. Listar." << endl;
                    cout << "   2. Averiguar si la lista es simetrica." << endl;
                    cout << "   3. Invertir la lista." << endl;
                    cout << "   4. Buscar un elemento." << endl;
                    cout << "   5. Eliminar elementos repetidos." << endl;
                    cout << "   6. Averiguar si L1 es sublista de L2." << endl;
                    cout << "   7. Averiguar si dos listas son iguales." << endl;
                    cout << "   8. Burbuja Original." << endl;
                    cout << "   9. Burbuja Bidireccional." << endl;
                    cout << "   10. Selección iterativa." << endl;
                    cout << "   11. Selección recursiva." << endl;
                    cout << "   12. Selección recursiva usando Pila." << endl;
                    cout << "   13. Inserción." << endl;
                    cout << "   14. Quicksort (Aho)." << endl;
                    cout << "   15. Quicksort MOD." << endl;
                    cout << "   16. MergeSort." << endl;
                    cout << "   17. Unión Ordenadas." << endl;
                    cout << "   18. Unión desordenadas." << endl;
                    cout << "   19. Intersección ordenadas." << endl;
                    cout << "   20. Intersección desordenadas." << endl;
                    cout << "   21. Eliminar los elementos que están en L2 de L1, ORDENADAS." << endl;
                    cout << "   22. Eliminar los elementos que están en L2 de L1, DESORDENADAS." << endl;
                    cout << "   0. Salir." << endl;
                    cout
                            << "NOTA: Se le dará una lista prehecha para ahorrar el trabajo de crear una lista para probar los algoritmos"
                            << endl;
                    cin >> decision6;
                    switch (decision6) {
                        case 1: {
                            algoritmosLI.listar(L);
                        }
                            break;
                        case 2: {
                            algoritmosLI.simetrica(L);
                        }
                            break;
                        case 3: {
                            algoritmosLP.invertir(Lp);
                        }
                            break;
                        case 4: {
                            int e;
                            cout << "Digite el elemento a bucar" << endl;
                            cin >> e;
                            bool r = algoritmosLP.buscar(Lp, e);
                            if (r) {
                                cout << "El elemento " << e << " sí está en la lista" << endl;
                            } else {
                                cout << "El elemento " << e << " NO está en la lista" << endl;
                            }
                        }
                            break;
                        case 5 : {
                            algoritmosLP.elimRepetidos(Lp);
                        }
                            break;
                        case 6 : {
                            cout << "se le dará la sgt lista para probar si es sublista de la actual. L1 = 10,31,75."
                                 << endl;
                            listaPos l1;
                            l1.iniciar();
                            l1.insertar(10, l1.traducePos(1));
                            l1.insertar(31, l1.traducePos(2));
                            l1.insertar(75, l1.traducePos(3));
                            bool r = algoritmosLP.sublista(l1, Lp);
                            if (r) {
                                cout << "Es sublista de la lista actual" << endl;
                            } else {
                                cout << "NO es sublista de la lista actual" << endl;
                            }
                        }
                            break;
                        case 7: {
                            cout << "se le dará una lista con un elemento diferente para comprobar que no son iguales"
                                 << endl;
                            cout << "La lista será: 145,4,10,31,90,13" << endl;
                            listaPos l1;
                            l1.iniciar();
                            l1.insertar(145, l1.traducePos(1));
                            l1.insertar(4, l1.traducePos(2));
                            l1.insertar(10, l1.traducePos(3));
                            l1.insertar(31, l1.traducePos(4));
                            l1.insertar(90, l1.traducePos(5));
                            l1.insertar(13, l1.traducePos(6));
                            bool r = algoritmosLP.iguales(Lp, l1);
                            if (r) {
                                cout << "Las listas son iguales" << endl;
                            } else {
                                cout << "Las listas son diferentes" << endl;
                            }
                        }
                            break;
                        case 8: {
                            algoritmosLP.burbuja(Lp);
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 9: {
                            algoritmosLP.burbujaBidireccinal(Lp);
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 10: {
                            algoritmosLP.seleccionIter(Lp);
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 11: {
                            algoritmosLP.seleccionRec(Lp);
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 12: {
                            algoritmosLP.seleccionRecSinCom(Lp);
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 13: {
                            algoritmosLP.insercion(Lp);
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 14: {
                            algoritmosLP.quickSortAho(Lp, Lp.primera(), Lp.ultima());
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 15: {
                            algoritmosLP.quickSortMod(Lp, Lp.primera(), Lp.ultima());
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 16: {
                            algoritmosLP.mergeSort(Lp, Lp.primera(), Lp.ultima());
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 17: {
                            cout << "La lista actual se ordenará y se le dará otra lista para hacer la unión" << endl;
                            Lp.vaciar();
                            Lp.insertar(4, Lp.traducePos(1));
                            Lp.insertar(10, Lp.traducePos(2));
                            Lp.insertar(13, Lp.traducePos(3));
                            Lp.insertar(31, Lp.traducePos(4));
                            Lp.insertar(75, Lp.traducePos(5));
                            Lp.insertar(145, Lp.traducePos(6));

                            listaPos l2;
                            l2.iniciar();
                            l2.insertar(1, l2.traducePos(1));
                            l2.insertar(10, l2.traducePos(2));
                            l2.insertar(17, l2.traducePos(3));
                            l2.insertar(56, l2.traducePos(4));
                            l2.insertar(75, l2.traducePos(5));

                            cout << "Las listas son L1: 4,10, 13,31,75,145 y L2: 1,10,17,56,75" << endl;
                            algoritmosLP.unionOrdenadas(Lp, l2);
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 18: {
                            cout << "Se le dará otra lista para hacer la unión" << endl;
                            listaPos l2;
                            l2.iniciar();
                            l2.insertar(10, l2.traducePos(1));
                            l2.insertar(56, l2.traducePos(2));
                            l2.insertar(75, l2.traducePos(3));
                            l2.insertar(1, l2.traducePos(4));
                            l2.insertar(17, l2.traducePos(5));
                            cout << "Las listas son L1: 145,4,10,31,75,13 y L2: 10,56,75,1,17" << endl;
                            algoritmosLP.unionDesord(Lp, l2);
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 19: {
                            cout << "La lista actual se ordenará y se le dará otra lista para hacer la intersección."
                                 << endl;
                            Lp.vaciar();
                            Lp.insertar(4, Lp.traducePos(1));
                            Lp.insertar(10, Lp.traducePos(2));
                            Lp.insertar(13, Lp.traducePos(3));
                            Lp.insertar(31, Lp.traducePos(4));
                            Lp.insertar(75, Lp.traducePos(5));
                            Lp.insertar(145, Lp.traducePos(6));

                            listaPos l2;
                            l2.iniciar();
                            l2.insertar(1, l2.traducePos(1));
                            l2.insertar(10, l2.traducePos(2));
                            l2.insertar(17, l2.traducePos(3));
                            l2.insertar(56, l2.traducePos(4));
                            l2.insertar(75, l2.traducePos(5));

                            cout << "Las listas son L1: 4,10, 13,31,75,145 y L2: 1,10,17,56,75" << endl;
                            listaPos l3;
                            l3.iniciar();
                            algoritmosLP.interseccionOrd(Lp, l2, l3);
                            algoritmosLP.listar(l3);
                        }
                            break;
                        case 20: {
                            cout << "Se le dará otra lista para hacer la intersección" << endl;
                            listaPos l2;
                            l2.iniciar();
                            l2.insertar(10, l2.traducePos(1));
                            l2.insertar(56, l2.traducePos(2));
                            l2.insertar(75, l2.traducePos(3));
                            l2.insertar(1, l2.traducePos(4));
                            l2.insertar(17, l2.traducePos(5));
                            cout << "Las listas son L1: 145,4,10,31,75,13 y L2: 10,56,75,1,17" << endl;
                            listaPos l3;
                            l3.iniciar();
                            algoritmosLP.interseccionDesord(Lp, l2, l3);
                            algoritmosLP.listar(l3);
                        }
                            break;
                        case 21: {
                            cout << "La lista actual se ordenará y se le dará otra lista" << endl;
                            Lp.vaciar();
                            Lp.insertar(4, Lp.traducePos(1));
                            Lp.insertar(10, Lp.traducePos(2));
                            Lp.insertar(13, Lp.traducePos(3));
                            Lp.insertar(31, Lp.traducePos(4));
                            Lp.insertar(75, Lp.traducePos(5));
                            Lp.insertar(145, Lp.traducePos(6));

                            listaPos l2;
                            l2.iniciar();
                            l2.insertar(1, l2.traducePos(1));
                            l2.insertar(10, l2.traducePos(2));
                            l2.insertar(17, l2.traducePos(3));
                            l2.insertar(56, l2.traducePos(4));
                            l2.insertar(75, l2.traducePos(5));

                            cout << "Las listas son L1: 4,10, 13,31,75,145 y L2: 1,10,17,56,75" << endl;
                            algoritmosLP.eliminarOrde(Lp, l2);
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 22: {
                            cout << "Se le dará otra lista." << endl;
                            listaPos l2;
                            l2.iniciar();
                            l2.insertar(10, l2.traducePos(1));
                            l2.insertar(56, l2.traducePos(2));
                            l2.insertar(75, l2.traducePos(3));
                            l2.insertar(1, l2.traducePos(4));
                            l2.insertar(17, l2.traducePos(5));
                            cout << "Las listas son L1: 145,4,10,31,75,13 y L2: 10,56,75,1,17" << endl;
                            algoritmosLP.eliminarDesord(Lp, l2);
                            cout << "Seleccione el algoritmo 'Listar' para comprobar" << endl;
                        }
                            break;
                        case 0: {
                            continuar5 = false;
                        }
                            break;
                        default: {
                            cout << "Ingrese un numero valido." << endl;
                        }
                    }
                }
            }
                break;

//---------------------------------------------------------------------------------

            case 0: {
                continuar = false;
            }
                break;
            default: {
                cout << "Ingrese un numero valido." << endl;
            }
        }
    }

//******************************************************************************************************************************/
    cout << "\nFin de la prueba!" << endl;

    //ListaPosLDE l2;

    /*ListaPosLSE l;
    Algoritmos a;


    l.iniciar();




*/
    return 0;
}