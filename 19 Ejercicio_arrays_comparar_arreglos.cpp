// Ejercicio Array 19.- Programa que permite verificar si dos arreglos
// del mismo tamaño contienen exactamente los mismos elementos en el
// mismo orden.

#include <iostream>
using namespace std;

const int N = 5;

int main() {
    int arreglo1[N] = {1, 2, 3, 4, 5};
    int arreglo2[N] = {1, 2, 3, 4, 5};
    bool iguales = true;

    for (int i = 0; i < N; i++) {
        if (arreglo1[i] != arreglo2[i]) {
            iguales = false;
            break;
        }
    }

    if (iguales)
        cout << "Los arreglos son iguales." << endl;
    else
        cout << "Los arreglos son diferentes." << endl;

    return 0;
}
