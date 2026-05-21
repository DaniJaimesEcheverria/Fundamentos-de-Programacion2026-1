#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"Numero de elementos a promediar:";
    int n,i;
    cin>>n;
    float notas[n],suma=0,promedio;
    for (i=0;i<n;i++)
    {
        cout<<"elemento"<<i+1<<":";
        cin>>notas[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<notas[i]<<";";
        suma=suma+notas[i];
        
    }
    promedio=suma/n;
    cout<<"El promedio es:"<<promedio;
    suma=0;
    for(i=0;i<0;i++)
    {
        suma=suma+pow(notas[i]-promedio,2);
    }
    float var,desvest ;
    //si es poblacional cambiar denominador por n
    var=suma /(n-1);
    desvest=sqrt(var);
    cout<<"la varianza es "<<var<<" y la desviacion estandar es "<<desvest<<endl;
}