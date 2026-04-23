#include<iostream>
#include<string>
using namespace std;
int main()
{
int i=0,puntos=0;
bool YoN;


while(1<=i<=6)
    {
        
        cout<<"1.Ingreso valor 1"<< "\n";
        cout<<"2.Ingresa valor 0"<< "\n";
        cout<<"3.Ingresa valor (2-6)"<< "\n";
        cout<<":"<<endl;
        switch (i)
        {case 1:
            {
            cout<<"Pierde todos los puntos acumulados "<<endl;
            break;
        }
        case 2:
        {
            cout<<puntos<<"quieres terminar el juego"<<endl;
            if(YoN==true)
            {
                default:
                { 
                    cout<<"bye";
                    break;
                }
            }
          
        case 3:
        {
        puntos=puntos+1;
        break;
        }
        }
    }
        cout<<"Ingrese un valor ";
        cin>>i;
    }}