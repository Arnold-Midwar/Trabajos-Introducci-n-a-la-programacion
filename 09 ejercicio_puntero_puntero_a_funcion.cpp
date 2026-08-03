// Puntero 9.- Programa que permite utilizar un puntero a función
// para seleccionar y ejecutar diferentes operaciones matemáticas.

#include <iostream>
using namespace std;

int sumar(int a, int b) { return a + b; }
int restar(int a, int b) { return a - b; }
int multiplicar(int a, int b) { return a * b; }

int main() {
    int (*operacion)(int, int); // puntero a función
    int x = 10, y = 5;
    char opcion;

    cout << "Elige una operación (+, -, *): ";
    cin >> opcion;

    if (opcion == '+')
        operacion = sumar;
    else if (opcion == '-')
        operacion = restar;
    else
        operacion = multiplicar;

    int resultado = operacion(x, y);

    cout << "El resultado es: " << resultado << endl;

    return 0;
}
