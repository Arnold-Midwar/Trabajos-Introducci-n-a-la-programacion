// Ejercicio Array 20.- Programa que permite crear un arreglo de
// tamaño definido por el usuario, calculando la suma y el promedio
// de sus elementos.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántos elementos tendrá el arreglo? ";
    cin >> n;

    int *arreglo = new int[n];
    int suma = 0;

    for (int i = 0; i < n; i++) {
        cout << "Ingresa el elemento " << i << ": ";
        cin >> arreglo[i];
        suma += arreglo[i];
    }

    float promedio = (float)suma / n;

    cout << "La suma de los elementos es: " << suma << endl;
    cout << "El promedio es: " << promedio << endl;

    delete[] arreglo;

    return 0;
}
