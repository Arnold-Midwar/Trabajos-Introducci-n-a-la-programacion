// Puntero 16.- Programa que permite manejar un arreglo de punteros a
// estructuras, utilizando memoria dinámica para cada una.

#include <iostream>
#include <string>
using namespace std;

struct Producto {
    string nombre;
    float precio;
};

const int N = 3;

int main() {
    Producto *productos[N];

    for (int i = 0; i < N; i++) {
        productos[i] = new Producto; // reserva memoria para cada producto

        cout << "Producto " << i + 1 << endl;
        cout << "Nombre: ";
        cin >> productos[i]->nombre;
        cout << "Precio: ";
        cin >> productos[i]->precio;
    }

    cout << "\nLista de productos:" << endl;
    for (int i = 0; i < N; i++) {
        cout << productos[i]->nombre << " - $" << productos[i]->precio << endl;
    }

    // Liberar la memoria de cada producto
    for (int i = 0; i < N; i++) {
        delete productos[i];
    }

    return 0;
}
