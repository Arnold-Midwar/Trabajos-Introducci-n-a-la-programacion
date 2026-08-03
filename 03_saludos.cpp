#include <iostream>
using namespace std;

void menu()
{
    cout<<"Que momento del dia es:\n";
    cout<<"1. Mañana\n";
    cout<<"2. Tarde\n";
    cout<<"3. Noche\n";
}

void bienvenido()
{
    int op;
    cin>>op;

    if(op==1)
        cout<<"Buenos dias!\n";
    else if(op==2)
        cout<<"Buenas tardes!\n";
    else if(op==3)
        cout<<"Buenas noches!\n";
    else
        cout<<"Entrada inválida\n";
}

int main()
{
    menu();
    bienvenido();
    cout<<"Encerrando...\n";

    return 0;
}
