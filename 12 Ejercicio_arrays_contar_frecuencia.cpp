// Ejercicio Array 12.- Programa que permite contar cuántas veces se
// repite un valor específico dentro de un arreglo.

#include <iostream>
using namespace std;

const int N = 8;

int main() {
    int arreglo[N] = {5, 3, 5, 8, 5, 2, 9, 5};
    int buscado, contador = 0;

    cout << "Ingresa el número a contar: ";
    cin >> buscado;

    for (int i = 0; i < N; i++) {
        if (arreglo[i] == buscado) {
            contador++;
        }
    }

    cout << "El número " << buscado << " aparece " << contador << " veces." << endl;

    return 0;
}
