// Puntero 15.- Programa que permite acceder y modificar los campos
// de una estructura (struct) utilizando un puntero.

#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

int main() {
    Persona persona1;
    Persona *p = &persona1;

    // Acceso a los campos mediante el operador ->
    cout << "Ingresa el nombre: ";
    cin >> p->nombre;
    cout << "Ingresa la edad: ";
    cin >> p->edad;

    cout << "\nDatos ingresados:" << endl;
    cout << "Nombre: " << p->nombre << endl;
    cout << "Edad: " << p->edad << endl;

    return 0;
}
