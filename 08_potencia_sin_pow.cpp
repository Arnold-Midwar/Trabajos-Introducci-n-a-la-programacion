#include <iostream>
using namespace std;

long  potenciaDe(int base, int exponente);

int main()
{
 int base, exponente;
 long resultado;
 cout<<"ingresa la base: "; cin>>base;
 cout<<"ingresa el exponente: "; cin>>exponente;
 resultado = potenciaDe(base,exponente);
 cout<<"El resultado es: "<<resultado<<endl;
 return 0;
}

 long  potenciaDe(int base, int exponente)
{
 long resultado = 1;
 for(int i = 1; i <= exponente; i++)
 {
 resultado *= base;
 }
 return resultado;
}
