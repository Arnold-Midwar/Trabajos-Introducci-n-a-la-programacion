// Ejercicio Array 5.- Programa que permite invertir el orden de los
// elementos de un arreglo de enteros.

#include <iostream>
using namespace std;

const int N = 5;

int main() {
    int arreglo[N] = {1, 2, 3, 4, 5};

    cout << "Arreglo original: ";
    for (int i = 0; i < N; i++) cout << arreglo[i] << " ";
    cout << endl;

    for (int i = 0; i < N / 2; i++) {
        int temp = arreglo[i];
        arreglo[i] = arreglo[N - 1 - i];
        arreglo[N - 1 - i] = temp;
    }

    cout << "Arreglo invertido: ";
    for (int i = 0; i < N; i++) cout << arreglo[i] << " ";
    cout << endl;

    return 0;
}
