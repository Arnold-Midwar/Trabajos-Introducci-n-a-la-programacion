// Ejercicio Array 6.- Programa que permite buscar un elemento dentro
// de un arreglo utilizando búsqueda lineal e indicar su posición.

#include <iostream>
using namespace std;

const int N = 6;

int main() {
    int arreglo[N] = {10, 25, 30, 45, 50, 65};
    int buscado, posicion = -1;

    cout << "Ingresa el número a buscar: ";
    cin >> buscado;

    for (int i = 0; i < N; i++) {
        if (arreglo[i] == buscado) {
            posicion = i;
            break;
        }
    }

    if (posicion != -1)
        cout << "El elemento se encuentra en la posición: " << posicion << endl;
    else
        cout << "El elemento no está en el arreglo." << endl;

    return 0;
}
