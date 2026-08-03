// Ejercicio Array 10.- Programa que permite verificar si los
// elementos de un arreglo están ordenados de forma ascendente.

#include <iostream>
using namespace std;

const int N = 5;

int main() {
    int arreglo[N] = {2, 4, 6, 8, 10};
    bool ordenado = true;

    for (int i = 0; i < N - 1; i++) {
        if (arreglo[i] > arreglo[i + 1]) {
            ordenado = false;
            break;
        }
    }

    if (ordenado)
        cout << "El arreglo está ordenado de forma ascendente." << endl;
    else
        cout << "El arreglo NO está ordenado." << endl;

    return 0;
}
