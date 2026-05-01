/*Construir un programa que lea repetidamente números enteros positivos (hasta que el usuario
ingrese 0 para terminar) y para cada uno determine si es un número perfecto, es decir, si la
suma de sus divisores propios (excluyendo al número mismo) es igual al número. La
verificación debe realizarse mediante una función que reciba un número y devuelva un valor
booleano. Por ejemplo, 6 es perfecto porque 1 + 2 + 3 = 6*/
#include<iostream>
#include<string>
using namespace std;

int Comprobarperfecto(int n)
{
int i,divisores=0;
string divisor="";
for(i=1;i<n;i++)
{
    if(n%i==0&&i<n)
    {
    divisores= divisores + i;
    divisor=divisor + to_string(i)+ " + " ;//como elimino el ultimo + que queda
    }
}
return divisores;
}
int main()
{   
int n;
cout<<"ingrese un numero positivo: ";
cin>>n;
bool perfecto=false;
int divisores=Comprobarperfecto(n);
if(divisores==n)
    {
    perfecto=true+"Es un numero perfecto";
    }
    else
    {
    perfecto=false+"No es un numero perfecto";
    }
    cout<<perfecto;
}







