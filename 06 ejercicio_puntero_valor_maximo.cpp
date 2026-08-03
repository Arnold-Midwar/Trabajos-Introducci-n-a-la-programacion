// Puntero 6.- Programa que permite encontrar el valor máximo de un
// arreglo utilizando punteros.

#include <iostream>
using namespace std;

const int N = 6;

int obtenerMaximo(int *p, int n) {
    int maximo = *p;
    for (int i = 1; i < n; i++) {
        if (*(p + i) > maximo) {
            maximo = *(p + i);
        }
    }
    return maximo;
}

int main() {
    int arreglo[N] = {12, 45, 3, 67, 23, 9};

    int maximo = obtenerMaximo(arreglo, N);

    cout << "El valor máximo es: " << maximo << endl;

    return 0;
}
