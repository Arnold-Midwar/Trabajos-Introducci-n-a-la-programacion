// Puntero 5.- Programa que permite calcular la suma de los elementos
// de un arreglo utilizando punteros.

#include <iostream>
using namespace std;

const int N = 5;

int sumarArreglo(int *p, int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += *(p + i);
    }
    return suma;
}

int main() {
    int arreglo[N] = {5, 10, 15, 20, 25};

    int resultado = sumarArreglo(arreglo, N);

    cout << "La suma de los elementos es: " << resultado << endl;

    return 0;
}
