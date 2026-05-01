/*int notas[30]; cada casilla guarda valores tipo float o tipo int
Un arreglo ocupa un bloque contiguo de memoria.Cada elemento se ubica inmediatamente después del anterior
Las posiciones es en numeros enteros sin importar si son de otro tipo los valores.

int temperaturas [7]={}; 
se puede modificar [n]

Primero debo inicializarla porque hay valores basura , que la memoria tiene y no son cero
Arrays

*/
#include<iostream>
using namespace std;
int main()
{
    cout<<"Numero de elementos a promediar:";
    int n,i;
    cin>>n;
    float notas[n+1],suma=0;
    for (i=0;i<n;i++)
    {
        cout<<"elemento"<<i+1<<":";
        cin>>notas[i];
    }
    for(i=0;i<n+1;i++)
    {
        cout<<notas[i]<<";";
        suma=suma+notas[i];
        
    }
    cout<<"El resultado es:"<<suma/n;
}



//Averiguen la busqueda binaria en arrays