// Puntero 19.- Programa que permite crear una lista enlazada simple
// utilizando punteros, insertando nodos e imprimiendo la lista.

#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;
};

void insertar(Nodo *&cabeza, int valor) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = valor;
    nuevo->siguiente = nullptr;

    if (cabeza == nullptr) {
        cabeza = nuevo;
    } else {
        Nodo *actual = cabeza;
        while (actual->siguiente != nullptr) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevo;
    }
}

void imprimirLista(Nodo *cabeza) {
    Nodo *actual = cabeza;
    while (actual != nullptr) {
        cout << actual->dato << " -> ";
        actual = actual->siguiente;
    }
    cout << "NULL" << endl;
}

void liberarLista(Nodo *cabeza) {
    Nodo *actual = cabeza;
    while (actual != nullptr) {
        Nodo *siguiente = actual->siguiente;
        delete actual;
        actual = siguiente;
    }
}

int main() {
    Nodo *lista = nullptr;

    insertar(lista, 10);
    insertar(lista, 20);
    insertar(lista, 30);

    cout << "Lista enlazada: " << endl;
    imprimirLista(lista);

    liberarLista(lista);

    return 0;
}
