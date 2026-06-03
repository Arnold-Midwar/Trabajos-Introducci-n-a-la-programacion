/*===========================================================================
                     UNIVERSIDAD NACIONAL DEL ALTIPLANO 
      FACULTAD DE INGENIERÍA MECÁNICA ELÉCTRICA, ELECTRÓNICA Y SISTEMAS
                 ESCUELA PROFESIONAL DE INGENIERIA DE SISTEMAS 
CURSO: INTRODUCCIÓN A LA LÓGICA DE PROGRAMACIÓN
ALUMNO: MAMANI CALSIN ARNOLD MIDWAR 

EJERCICIO 2, Examen de la 1ra unidad.

•Realizar un pseudocodigo o diagrama de flujo o programa en c++, que permita
visualizar la suma de los n términos:

ST= X/1!-(X^2)/3!+(X^3)/5!-(X^4)/7!+...

Nota: X y N debe ser ingresado por teclado.

==============================================================================*/


#include <iostream>                          // Libreria para entrada y salida
#include <cmath>                             // Libreria para pow()
using namespace std;                         // para usar el espacio de nombres std
int main(){                                  // Inicio de la funcion principal
    int N;                                   // N: Número de terminos
    double X, ST=0;                          // X: valor dado, ST: Acumulador (inicia en 0)

    cout<<"ingrese X: ";                     // pide valor de x
    cin>>X;                                  // lee x
    cout<<"ingrese N terminos: ";            // pide cantidad de de terminos
    cin>>N;                                  // lee N

    for(int i=1;i<=N;i++){                   // Bucle principal: recorre i=1...N
        int impar=2*i-1;                     // Genera 1,3,5,7...(para factoriales impares)
        int fact=1;                          // El Factorial inicia en 1

        for(int j=1;j<=impar;j++){           // Bucle para calcular (2i-1)!
            fact=fact*j;                     // Multiplica j al factorial
        }
        double termino = pow(X,i)/fact;      // Calcula x^i/(2i-1)!
        if(i%2!=0){                          // Si i es impar (1,3,5...) → sumar
            ST=ST+termino;                   // Suma el término
        }else{                               // Si es par (2,4,6...) → restar
            ST=ST-termino;                   // Resta el término
        }                                    // Fin de la condicion
    }                                        // Fin de bucle principal
    cout<<"SUMATORIA (ST)= "<<ST<<endl;      // vA Mostrar el resultado final
    return 0;                                // Fin del programa
    }                                        // fin de la duncion main








