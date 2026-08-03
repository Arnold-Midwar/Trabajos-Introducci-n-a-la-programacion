// Puntero 8.- Programa que permite utilizar un puntero a puntero
// (doble puntero) para acceder y modificar el valor de una variable.

#include <iostream>
using namespace std;

int main() {
    int numero = 100;
    int *p = &numero;    // puntero simple
    int **pp = &p;        // puntero a puntero

    cout << "Valor de numero: " << numero << endl;
    cout << "Valor apuntado por p (*p): " << *p << endl;
    cout << "Valor apuntado por pp (**pp): " << **pp << endl;

    // Modificando numero a través del doble puntero
    **pp = 500;

    cout << "Nuevo valor de numero: " << numero << endl;

    return 0;
}
