#include<iostream>
#include<string>
using namespace std;
int main()
{ 
    int n,i=1,a=1,filas;
    cout<<"Ingrese un numero entre [1,9]: ";cin>>n;
    if(n>=1&&n<=9)
    {
        for(filas=1;filas<=n;filas++)
        {
            for(i=1;i<=filas;i++)// i es el numero de numeros en las filas
            {
            cout<<a<<" ";
            a=a+2;
            }
            cout<<"\n";
        }
    }
    else
    {
    cout<<"Advertencia:ingrese un numero en el intervalo"<<endl;
    }
}