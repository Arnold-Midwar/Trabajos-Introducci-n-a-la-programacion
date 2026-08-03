// Puntero 2.- Programa que permite modificar el valor de una variable
// dentro de una función utilizando un puntero como parámetro.

#include <iostream>
using namespace std;

void duplicar(int *p) {
    *p = *p * 2;
}

int main() {
    int numero;
    cout << "Ingresa un número: ";
    cin >> numero;

    duplicar(&numero);

    cout << "El número duplicado es: " << numero << endl;

    return 0;
}
