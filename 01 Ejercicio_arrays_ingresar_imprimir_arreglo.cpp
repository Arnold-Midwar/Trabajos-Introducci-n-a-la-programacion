// Ejercicio Array 1.- Programa que permite ingresar e imprimir los
// elementos de un arreglo de enteros.

#include <iostream>
using namespace std;

const int N = 5;

int main() {
    int arreglo[N];

    for (int i = 0; i < N; i++) {
        cout << "Ingresa el elemento " << i << ": ";
        cin >> arreglo[i];
    }

    cout << "Elementos del arreglo: " << endl;
    for (int i = 0; i < N; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}
