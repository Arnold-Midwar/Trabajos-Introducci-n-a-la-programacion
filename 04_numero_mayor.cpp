#include <iostream>
using namespace std;

int max(int x, int y) 
{ 
    if (x > y) 
    return x; 
    else
    return y; 
} 
  
int main() {
    int a = 10, b = 20; 
  
    // Llamando a la función anterior para encontrar el máximo de 'a' y 'b'

    int m = max(a, b); 
  
    cout << "El numero mayor es: " << m; 
    return 0; 
}
