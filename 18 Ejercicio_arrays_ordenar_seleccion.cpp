// Ejercicio Array 18.- Programa que permite ordenar de forma
// descendente los elementos de un arreglo utilizando el método de
// selección.

#include <iostream>
using namespace std;

const int N = 6;

int main() {
    int arreglo[N] = {33, 12, 76, 45, 8, 21};

    for (int i = 0; i < N - 1; i++) {
        int indiceMayor = i;
        for (int j = i + 1; j < N; j++) {
            if (arreglo[j] > arreglo[indiceMayor]) {
                indiceMayor = j;
            }
        }
        int temp = arreglo[i];
        arreglo[i] = arreglo[indiceMayor];
        arreglo[indiceMayor] = temp;
    }

    cout << "Arreglo ordenado de mayor a menor: ";
    for (int i = 0; i < N; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}
