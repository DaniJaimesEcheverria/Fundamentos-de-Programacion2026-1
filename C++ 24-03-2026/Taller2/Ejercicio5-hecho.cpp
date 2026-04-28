#include<iostream>
#include<string>
using namespace std;
int main()
{   int long long i,a=0, max=0;
    string Collatz="";
    cout<<"Ingrese un numero mayor a 1: ";
    cin>>i;
    while(i>1)
    {
        if(i%2==0)
        {   
            Collatz=Collatz+to_string(i)+"-->";
            //cout<<"Es par";
            i=i/2;
            a+=1;
            if(max<i)
            {
            max=i;
            }
        }
        else
        {   Collatz=Collatz+to_string(i)+"-->";
            //cout<<"Es impar";
            i=3*i+1;
            a+=1;
            if(max<i)
            {
            max=i;
            }

        }
        
        
        
    }
    cout<<"El numero final es:"<<i<<endl;
    cout<<"La secuencia es: "<<Collatz<<i<<endl;
    cout<<"El numero de pasos requeridos para llegar a 1: "<<a<<endl;
    cout<<"El numero maximo es: "<<max<<endl;


}