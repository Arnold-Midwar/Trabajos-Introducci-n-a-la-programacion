// Puntero 3.- Programa que permite intercambiar el valor de dos
// variables utilizando punteros (swap).

#include <iostream>
using namespace std;

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    cout << "Ingresa el primer número: "; cin >> x;
    cout << "Ingresa el segundo número: "; cin >> y;

    cout << "Antes: x = " << x << ", y = " << y << endl;

    intercambiar(&x, &y);

    cout << "Después: x = " << x << ", y = " << y << endl;

    return 0;
}
