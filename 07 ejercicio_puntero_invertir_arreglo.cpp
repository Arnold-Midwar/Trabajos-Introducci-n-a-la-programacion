// Puntero 7.- Programa que permite invertir el orden de los elementos
// de un arreglo utilizando punteros.

#include <iostream>
using namespace std;

const int N = 5;

void invertirArreglo(int *inicio, int *fin) {
    while (inicio < fin) {
        int temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        inicio++;
        fin--;
    }
}

int main() {
    int arreglo[N] = {1, 2, 3, 4, 5};

    invertirArreglo(arreglo, arreglo + N - 1);

    cout << "Arreglo invertido: " << endl;
    for (int i = 0; i < N; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}
