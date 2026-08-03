#include<iostream>

using namespace std;

const int f = 3;

int i,j,suma = 0;

void ingresar(int vector_a[f]);
void imprimir(int vector_a[f]);
void sumar(int vector_a[f]);

void ingresar(int vector_a[f])
{
    for (i = 0; i < f; ++i)
    {
            cout<< "ingresa el elemento: "<< i<<" ==> ";
            cin>> vector_a[i];
    }
}

void imprimir(int vector_a[f])
{
    for (i = 0; i < f; ++i)
    {
        cout<< vector_a[i] <<" ";
        //cout<< endl;
    }
    cout<< endl;
}

void sumar(int vector_a[f])
{
    for (i = 0; i < f; ++i)
    {
        suma = suma + vector_a[i];
    }
}


int main()
{
    int v[f];

    ingresar(v);
    imprimir(v);
    sumar(v);

    cout<< "La suma de los elementos es: " <<suma;

    return 0;
}
