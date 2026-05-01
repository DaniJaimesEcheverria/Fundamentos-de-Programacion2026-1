#include<iostream>
using namespace std;
int main()
{
    cout<<"Numero de elementos a evaluar:";
    int n,i;
    cin>>n;
    float notas[n+1],max,min;
    for (i=0;i<n;i++)
    {
        cout<<"elemento"<<i+1<<":";
        cin>>notas[i];
    }
    max=notas[0];
    min=notas[0];
    for(i=0;i<n;i++)
    {
        cout<<notas[i]<<":";
    }

    cout<<endl;

    for(i=0;i<n;i++)
    {
        cout<<"Max= "<<max<<"....."<<"valor actual"<<notas[i]<<endl;
    
        if(notas[i]>max)
        {
            max=notas[i];
        }
        if(notas[i]<min)
        {
            min=notas[i];
        }
        
    }
    cout<<"El maximo es:"<<max<<endl;
    cout<<"El minimo es:"<<min<<endl;
}