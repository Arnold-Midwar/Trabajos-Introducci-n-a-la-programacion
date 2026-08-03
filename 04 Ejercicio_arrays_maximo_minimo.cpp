// Ejercicio Array 4.- Programa que permite encontrar el valor máximo
// y el valor mínimo dentro de un arreglo de enteros.

#include <iostream>
using namespace std;

const int N = 6;

int main() {
    int arreglo[N] = {34, 12, 89, 5, 67, 23};
    int maximo = arreglo[0];
    int minimo = arreglo[0];

    for (int i = 1; i < N; i++) {
        if (arreglo[i] > maximo) maximo = arreglo[i];
        if (arreglo[i] < minimo) minimo = arreglo[i];
    }

    cout << "El valor máximo es: " << maximo << endl;
    cout << "El valor mínimo es: " << minimo << endl;

    return 0;
}
