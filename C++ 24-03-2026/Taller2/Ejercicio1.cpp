#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n=0,i,a=1;
    string pira;
    cout<<" Ingrese un valor del 1 al 9: ";
    cin>>i;/*getline es para cadenas ,no enteros*/
    if (1<=i||i<=9)
    {if (i!=0)
        {
        pira=a+"\n";
        a=a+2;
        }cout<<pira;
    
    }
    else
    {
    cout<<"ingrese un valor permitido"<<"\n";
    }
        
    
}
    
    
