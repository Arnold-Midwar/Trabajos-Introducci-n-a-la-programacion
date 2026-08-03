// Ejercicio Array 3.- Programa que permite calcular el promedio de
// los elementos de un arreglo de números decimales.

#include <iostream>
using namespace std;

const int N = 5;

int main() {
    float arreglo[N] = {8.5, 7.2, 9.0, 6.4, 10.0};
    float suma = 0;

    for (int i = 0; i < N; i++) {
        suma += arreglo[i];
    }

    float promedio = suma / N;

    cout << "El promedio es: " << promedio << endl;

    return 0;
}
