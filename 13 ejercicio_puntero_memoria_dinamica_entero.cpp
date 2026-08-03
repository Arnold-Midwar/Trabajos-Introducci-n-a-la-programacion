// Puntero 13.- Programa que permite reservar y liberar memoria
// dinámica para una variable entera utilizando new y delete.

#include <iostream>
using namespace std;

int main() {
    int *p = new int; // reserva memoria dinámica

    cout << "Ingresa un número: ";
    cin >> *p;

    cout << "Valor almacenado: " << *p << endl;
    cout << "Dirección de memoria: " << p << endl;

    delete p; // libera la memoria
    p = nullptr;

    return 0;
}
