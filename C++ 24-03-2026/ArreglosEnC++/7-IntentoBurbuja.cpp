#include <iostream>
using namespace std;
int main()
{
    int x,i;
    cout<<"Ingrese el numero de datos dentro del arreglo:";
    cin>>x;
    float arreglo[x];
    for( i=0;i<x;i++)
    {
        cout<<"El dato numero "<<i<<" es :";
        cin>>arreglo[i];
        
    }
    float posicionvieja;
    for(i=0;i<x-1;i++)
    {
        if(arreglo[i]>arreglo[i+1])
        {
            posicionvieja=arreglo[i];
            arreglo[i]=arreglo[i+1];
            arreglo[i+1]=posicionvieja;
        }
        
    }
    for(i=0;i<x;i++)
    {
        cout<<arreglo[i];
    }
}