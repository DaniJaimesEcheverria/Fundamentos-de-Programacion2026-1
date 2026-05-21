#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Introduzca el numero de elementos del arreglo: ";
    cin>>n;
    float arreglo[n];
    float aux;
    //llenado del vector
    cout<<"Introduzca los valores del arreglo"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Dato["<<i<<"]"<<endl;
        cin>>arreglo[i];
    }
    //metodo de la burbuja
    for(int j=0;j<n+1;j++){
    for(i=0;i<n-1;i++)// una sola ronda
    {
        if(arreglo[i]>arreglo[i+1])// para una forma desde el mayor al menor en vez de > colocamos < 
        {
            aux=arreglo[i];
            arreglo[i]=arreglo[i+1];
            arreglo[i+1]=aux;
        }
    }}
    cout<<"Los datos ordenado son"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arreglo[i]<<endl;
    }
}
//busqueda binaria , necesitamos que este ordenado en orden ascendente
int binario()
{
    int numeros[]={1,2,3,4,5};
    int inf,sup,mitad,dato;
    char band='F';
    dato=4;
    //Algoritmo de la busqueda binaria
    inf=0;
    sup=5;
    while(inf<=sup)
    {
        mitad=(inf+sup)/2;
        if(numeros[mitad]==dato)
        {
            band='V';
            break;// para que ya no pierda tiempo buscando los otros elementos y no se repita innecesariamente
        }
        if(numeros[mitad]>dato)
        {
            sup=mitad;
            mitad=(inf+sup)/2;
        }
        if(numeros[mitad]<dato)
        {
            inf=mitad;
            mitad=(inf+sup)/2;
        }
    }
    if(band=='V')
    {
        cout<<"El numero a sido encontrado en la posicion: "<<mitad<<endl;
    }
    else {
        cout<<"El numero no ha sido encontrado";
    }
    getch();
    //return 0;
}

//Es mejor la que crece menos , no se dispara si cambia el numero de variables,en el tema de algoritmos de ordenamiento
/*
O(1)
O(log n)
O(n)
O(nlogn)
O(n**2)
O(n**n)
O(n!)*/ 