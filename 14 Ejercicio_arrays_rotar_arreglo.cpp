// Ejercicio Array 14.- Programa que permite rotar los elementos de un
// arreglo una posición hacia la izquierda.

#include <iostream>
using namespace std;

const int N = 6;

int main() {
    int arreglo[N] = {10, 20, 30, 40, 50, 60};

    int primero = arreglo[0];
    for (int i = 0; i < N - 1; i++) {
        arreglo[i] = arreglo[i + 1];
    }
    arreglo[N - 1] = primero;

    cout << "Arreglo rotado: ";
    for (int i = 0; i < N; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}
