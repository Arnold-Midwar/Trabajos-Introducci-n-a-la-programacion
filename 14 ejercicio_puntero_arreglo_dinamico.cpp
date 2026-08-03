// Puntero 14.- Programa que permite crear un arreglo de tamaño
// dinámico (definido por el usuario) utilizando new[] y delete[].

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántos elementos tendrá el arreglo? ";
    cin >> n;

    int *arreglo = new int[n]; // reserva memoria dinámica para el arreglo

    for (int i = 0; i < n; i++) {
        cout << "Ingresa el elemento " << i << ": ";
        cin >> arreglo[i];
    }

    cout << "Elementos ingresados: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    delete[] arreglo; // libera la memoria del arreglo

    return 0;
}
