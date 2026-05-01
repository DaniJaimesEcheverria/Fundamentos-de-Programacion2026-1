#include<iostream>
using namespace std;

int invertir (int x)
{
int resultado=0;
while(x!=0)
{
    int residuo=x%10;
    x=x/10;
    resultado=(resultado*10)+residuo;
}
    return resultado;
}
int main()
{  
    int n;
    bool confirmar=false;
    cout<<"Ingrese un numero positivo: ";
    cin >> n;
    int palindromo=invertir(n);
    if (confirmar == false)
    {
        if (palindromo == n)
        {
            confirmar = true;
            cout<<"El numero "<<n<<"  es palindromo";
        }
        else
        {
        confirmar=false;
        cout<<"El numero "<<n<<"  no es palindromo";
        }
    
    }
}