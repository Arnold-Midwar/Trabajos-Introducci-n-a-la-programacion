// Puntero 1.- Programa que declara un puntero y muestra la dirección
// de memoria de una variable y el valor al que apunta.

#include <iostream>
using namespace std;

int main() {
    int numero = 25;
    int *p = &numero; // p almacena la dirección de "numero"

    cout << "Valor de numero: " << numero << endl;
    cout << "Dirección de numero: " << &numero << endl;
    cout << "Valor almacenado en p (dirección): " << p << endl;
    cout << "Valor apuntado por p (*p): " << *p << endl;

    return 0;
}
