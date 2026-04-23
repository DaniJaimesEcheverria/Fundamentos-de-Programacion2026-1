#include <iostream>
using namespace std;
int primo(int a)
{
    int residuo;
    if (residuo%a==0)
    {
    cout<<a<<"Es primo"<<"\n";
    }
    
    else
    {
        cout<<a<<"No es primo"<<"\n";
    }
    return false;
    return true;
}

int main()
{
    int numeros,i=0,primo,datos;
    cout<<"Ingrese numeros enteros:";
    cin>>numeros;
    cout<<"Numero de datos a evaluar";
    cin>>datos;
    while(i<=datos)
    {
        if(primo==0)
        {
            cout<<"El numero no es primo";"\n";
        }
        else
        {
            cout<<"El numeros es primo";"\n";
        }
    }
    
}