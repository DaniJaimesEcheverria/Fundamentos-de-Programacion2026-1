#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>pares;
    vector<int>impares;
    int i,elem=1,suma=0,sumaI=0;
    while (elem!=0)
    {   
        cout<<"Escriba un numero: ";
        cin>>elem;
        if(elem%2==0)
        {
            suma=suma+elem;
            pares.push_back(elem);
        }
        else
        {
            sumaI=sumaI+elem;
            impares.push_back(elem);
    
        }
    }
    
    
    for(i=0;i<=pares.size();i++)
        {
        cout << pares[i] << " ";
        }
    for(i=0;i<=impares.size();i++)
        {   
        cout << impares[i] << " ";
        }
        
    float promedio=suma/pares.size();
    float promedioI=sumaI/impares.size();
    cout<<promedio<<endl;
    cout<<promedioI<<endl;
}