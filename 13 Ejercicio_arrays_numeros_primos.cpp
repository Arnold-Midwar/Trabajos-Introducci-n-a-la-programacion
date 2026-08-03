// Ejercicio Array 13.- Programa que permite identificar e imprimir
// los números primos contenidos dentro de un arreglo.

#include <iostream>
using namespace std;

const int N = 8;

bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int arreglo[N] = {4, 7, 10, 13, 15, 17, 20, 23};

    cout << "Números primos en el arreglo: ";
    for (int i = 0; i < N; i++) {
        if (esPrimo(arreglo[i])) {
            cout << arreglo[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
