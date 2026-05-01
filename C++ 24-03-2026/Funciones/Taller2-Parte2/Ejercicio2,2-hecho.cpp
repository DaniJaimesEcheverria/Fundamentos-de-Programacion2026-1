/*Ejercicio 2: Mínimo común múltiplo
Construir un programa que lea dos números enteros positivos y calcule su mínimo común
múltiplo (MCM). Para ello, debe implementarse una función que calcule el máximo común
divisor (MCD) de dos números mediante el algoritmo de Euclides, y una segunda función que
utilice la primera para obtener el MCM aplicando la relación MCM(a, b) = (a × b) / MCD(a, b).*/
#include <iostream>
using namespace std;
int MCD(int azul,int b)
{
    int r;
    while(b!=0)
    {
        r=azul%b;
        azul=b;
        b=r;
    }
    return azul;
}

int MCM(int a,int b)
{
    int Mcm=MCD(a,b);
    int operacion=a*b/Mcm;
    return operacion;
}

int main()
{
    int a,b;
    cout<<"Ingrese dos numeros positivos:";
    cin>>a;
    cin>>b;
    int proceso=MCM(a,b);
    cout<<proceso<<endl;
}