#include <iostream>
#include <string>
using namespace std;
int main()
{
    string factores="";
    int i,a=0;
    
    cout<<"Ingrese un numero mayor a 1: ";
    cin>>i;
    int original=i;
    for(int primos=2;primos<=i;primos++)
    {
        while(i%primos==0)
        {
            if(a>0)
            {
                factores=factores+" x ";// como sera  que puedo quitar el  cuando ya no hay mas factores primos
            }
            factores=factores+to_string(primos);
            i=i/primos;
            a+=1;
        
        }
        
    }
    
    if (a>1)
        {
            cout<<"El numero "<<original<<" no es primo"<<endl;
            cout<<"Los factores primos son: "<<factores<<endl;
            cout<<"Numero de factores primos: "<<a<<endl;
        }
    else
        {
            cout<<"El numero  "<<original<<" es primo"<<endl;
            cout<<"Numero de factores primos:2"<<endl;
            cout<<"Los factores primos son: "<<factores<<" y "<<"1"<<endl;
        }
}
/* Lo intente asi if(i%2==0)
        {
            factores=factores+"2";
            i=i/2;
            a+=1;
        
            if(i%3==0)
            {
            i=i/3;
            factores=factores+"x"+"3";
            a+=1;
                if(i%5==0)
                {
                factores=factores+"x"+"5";
                a+=1;
                }
            }
            else
            {
                if(i%5==0)
                {
                factores=factores+"x"+"5";
                a+=1;
                }
            i=i/5;
            }
        }
        else
        {
            if(i%3==0)
            {
            factores=factores+"3"+"x";
            i=i/3;
            a+=1;
                if(i%5==0)
                {
                factores=factores+"5"+"x";
                a+=1;
                }
                i=i/5;
            }
            else
            {
                if(i%5==0)
                {
                factores=factores+"5"+"x";
                a+=1;
                }
                i=i/5;

            }*/
            //factores.erase(factores.size()-3,3); para eliminar el ultimo " x "

