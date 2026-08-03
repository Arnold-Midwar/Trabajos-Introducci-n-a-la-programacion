#include <iostream>

using namespace std;

// Visualiza un numero

void visualizaNum(int n1, float n2) {
    cout << "El numero entero es: " << n1;
    cout << "El numero decimal es: " << n2;
}

int main() {
     
     int num1 = 5;
     double num2 = 5.5;

    // llamando una función
    visualizaNum(num1, num2);

    return 0;
}
