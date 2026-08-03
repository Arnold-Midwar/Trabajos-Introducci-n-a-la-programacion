// Puntero 17.- Programa que muestra la diferencia entre un puntero
// constante y un puntero a una constante.

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    // Puntero a constante: no se puede modificar el valor apuntado,
    // pero sí se puede cambiar a qué variable apunta.
    const int *p1 = &a;
    // *p1 = 15; // ERROR: no se puede modificar el valor
    p1 = &b; // Válido: cambia de variable

    // Puntero constante: no se puede cambiar a qué variable apunta,
    // pero sí se puede modificar el valor apuntado.
    int *const p2 = &a;
    *p2 = 15; // Válido: modifica el valor de "a"
    // p2 = &b; // ERROR: no se puede cambiar la dirección

    cout << "Valor de a: " << a << endl;
    cout << "Valor de b: " << b << endl;
    cout << "Valor apuntado por p1: " << *p1 << endl;
    cout << "Valor apuntado por p2: " << *p2 << endl;

    return 0;
}
