#include<iostream>

using namespace std;

const int f = 3, c = 3;

int i,j,suma = 0;

void ingresar(int matriz[f][c]);

void imprimir(int matriz[f][c]);

void sumar(int matriz[f][c]);


void ingresar(int matriz[f][c])
{
    for (i = 0; i < f; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            cout<< "ingresa el elemento: "<< i<<",";
            cout<< "ingresa el elemento: "<< j<<" ==> ";
            cin>> matriz[i][j];
        }
    }
}

void imprimir(int matriz[f][c])
{
    for (i = 0; i < f; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            cout<< matriz[i][j] <<" ";
        }
        cout<< endl;
    }
}

void sumar(int matriz[f][c])
{
    for (i = 0; i < f; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            suma = suma + matriz[i][j];
        }
    }
}
int main()
{
    int m[f][c];

    ingresar(m);
    imprimir(m);
    sumar(m);

    cout<< "La suma de los números es: " <<suma;

    return 0;
}
