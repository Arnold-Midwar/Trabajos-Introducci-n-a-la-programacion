// Puntero 20.- Programa que muestra el uso de un puntero void (genérico)
// y su conversión a distintos tipos de datos.

#include <iostream>
using namespace std;

int main() {
    int entero = 42;
    float decimal = 3.14f;
    char caracter = 'A';

    void *pv; // puntero genérico

    pv = &entero;
    cout << "Valor entero: " << *(static_cast<int*>(pv)) << endl;

    pv = &decimal;
    cout << "Valor decimal: " << *(static_cast<float*>(pv)) << endl;

    pv = &caracter;
    cout << "Valor caracter: " << *(static_cast<char*>(pv)) << endl;

    return 0;
}
