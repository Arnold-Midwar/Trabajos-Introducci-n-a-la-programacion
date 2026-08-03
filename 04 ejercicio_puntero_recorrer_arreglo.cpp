// Puntero 4.- Programa que permite recorrer e imprimir los elementos
// de un arreglo utilizando aritmética de punteros.

#include <iostream>
using namespace std;

const int N = 5;

int main() {
    int arreglo[N] = {10, 20, 30, 40, 50};
    int *p = arreglo; // p apunta al primer elemento

    cout << "Elementos del arreglo: " << endl;
    for (int i = 0; i < N; i++) {
        cout << "arreglo[" << i << "] = " << *(p + i) << endl;
    }

    return 0;
}
