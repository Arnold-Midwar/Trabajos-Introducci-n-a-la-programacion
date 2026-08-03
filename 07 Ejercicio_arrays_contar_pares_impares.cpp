// Ejercicio Array 7.- Programa que permite contar cuántos números
// pares y cuántos números impares hay dentro de un arreglo.

#include <iostream>
using namespace std;

const int N = 8;

int main() {
    int arreglo[N] = {3, 8, 15, 20, 7, 12, 9, 4};
    int pares = 0, impares = 0;

    for (int i = 0; i < N; i++) {
        if (arreglo[i] % 2 == 0)
            pares++;
        else
            impares++;
    }

    cout << "Cantidad de pares: " << pares << endl;
    cout << "Cantidad de impares: " << impares << endl;

    return 0;
}
