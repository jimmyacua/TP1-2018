#include <iostream>
//#include "ListaPosArray.h"
#include "ListaPosLSE.h"
//#include "ListaPosLDE.h"
//#include "ListaOrdArray.h"
#include "ListaOrdLSE.h"
#include "Pila.h"
#include "AlgoritmosListaPos.h"

using namespace std;

typedef ListaPosLSE listaPos;
//typedef ListaPosArray listaPos;
//typedef ListaPosLDE listaPos;

//typedef ListaOrdArray listaOrd;
typedef ListaOrdLSE listaOrd;


int main() {
    /*
    int desicion;
    bool continuar = true;
    while (continuar) {
        cout << "MENU DE OPCIONES\n" << endl;
        cout << "¿Que estructura de datos desea usar?\n (Ingrese un numero)" << endl;
        cout << "1. Lista Posicionada." << endl;
        cout << "2. Lista Indexada." << endl;
        cout << "3. Lista Ordenada." << endl;
        cout << "4. Pila." << endl;
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
                            cout << "El elemneto que esta despues de " << p->elemento << " es " << L.siguente(p)->elemento
                                 << endl;
                        }
                            break;
                        case 12: {
                            //anterior
                            int c;
                            cout << "Ingrese el caracter." << endl;
                            cin >> c;
                            pos p = L.traducePos(c);
                            cout << "El elemeneto que esta antes de " << p->elemento << " es " << L.anterior(p)->elemento << endl;
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
                listaPos L; //CAMBIAR POR LISTA INDEXADA
                while(continuar3){
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
                            cout << "El elemneto que esta despues de " << p->elemento << " es " << L.siguente(p)->elemento
                                 << endl;
                        }
                            break;
                        case 12: {
                            //anterior
                            int c;
                            cout << "Ingrese el caracter." << endl;
                            cin >> c;
                            pos p = L.traducePos(c);
                            cout << "El elemeneto que esta antes de " << p->elemento << " es " << L.anterior(p)->elemento << endl;
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
                            continuar3 = false;
                        }
                            break;
                        default:
                            cout << "Ingrese un numero valido" << endl;
                    }
                }

            }
                break;

            case 3: {  //LISTA ORDENADA
                int decision4;
                bool continuar4 = true;
                listaOrd L; //CAMBIAR POR LISTA ORDENADA
                while(continuar4){
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
                            cout << "El elemneto que esta despues de " << c << " es " <<L.siguiente(c)
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
                            cout << "       El elemento que saco es: " << P.sacar() <<  endl;
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

            case 0: {
                continuar = false;
            }
                break;
            default: {
                cout << "Ingrese un numero valido." << endl;
            }
        }
    }
     */
//******************************************************************************************************************************/
    //cout << "\nFin de la prueba!" << endl;

    ListaPosLSE l;
    ListaPosLSE l2;
    Algoritmos a;


    l.iniciar();
    l.insertar(4,l.traducePos(1));
    l.insertar(11,l.traducePos(2));
    l.insertar(3,l.traducePos(3));
    l.insertar(7,l.traducePos(4));
    l.insertar(1, l.traducePos(5));
    l.insertar(8,l.traducePos(6));  //l= 4,10,13,31,75,145

    l2.iniciar();

    l2.insertar(12, l2.traducePos(1));
    l2.insertar(9, l2.traducePos(2));
    l2.insertar(7, l2.traducePos(3));
    l2.insertar(3, l2.traducePos(4));
    l2.insertar(5, l2.traducePos(5));
    l2.insertar(2, l2.traducePos(6));
    l2.insertar(8, l2.traducePos(7));

    a.eliminarDesord(l,l2);

    //a.mergeSort(l,l.primera(), l.ultima());
    //l.vaciar();
    //l.agregarAlFinal(34);
    l.listar();
    return 0;
}