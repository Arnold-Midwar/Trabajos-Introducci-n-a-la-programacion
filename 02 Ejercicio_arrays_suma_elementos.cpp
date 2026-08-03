// Ejercicio Array 2.- Programa que permite calcular la suma de todos
// los elementos de un arreglo de enteros.

#include <iostream>
using namespace std;

const int N = 5;

int main() {
    int arreglo[N] = {4, 8, 15, 16, 23};
    int suma = 0;

    for (int i = 0; i < N; i++) {
        suma += arreglo[i];
    }

    cout << "La suma de los elementos es: " << suma << endl;

    return 0;
}
