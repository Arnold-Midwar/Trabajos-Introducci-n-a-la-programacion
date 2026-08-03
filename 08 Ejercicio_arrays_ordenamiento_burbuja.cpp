// Ejercicio Array 8.- Programa que permite ordenar de forma ascendente
// los elementos de un arreglo utilizando el método de la burbuja.

#include <iostream>
using namespace std;

const int N = 6;

int main() {
    int arreglo[N] = {64, 25, 12, 22, 11, 90};

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < N; i++) cout << arreglo[i] << " ";
    cout << endl;

    return 0;
}
