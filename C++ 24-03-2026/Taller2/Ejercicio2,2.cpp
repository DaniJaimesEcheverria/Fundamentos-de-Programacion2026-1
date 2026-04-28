#include<iostream>
#include<string>
using namespace std;
int main()
{   
    int valor=1;
    string puntos="0",answer;
    while (valor>=0&&valor<=6)
    {
        cout<<"Ingrese un valor entre [1,6]: ";
        cin>>valor;
        /**Si el usuario ingresa un 1, pierde todos los puntos acumulados hasta ese momento y el
        juego termina inmediatamente.*/
        if (valor==1)
        { 
            cout<<"Pierde todos los puntos acumulados"<<endl;
            if (puntos=="0")
            {
                cout<<"No tiene puntos acumulados que perder"<<endl;
            }
            else
            {
                puntos="0";
                cout<<"Puntos acumulados perdidos: "<<puntos<<endl;
            }
        }
        /**Si el usuario ingresa un 0, guarda los puntos acumulados y el juego termina de forma
        voluntaria.*/
        if(valor==0)
        {
            cout<<"Puntos acumulados:"<<puntos<<endl;
            cout<<"¿Quiere terninar el juego?(True/False)"<<endl;
            cin>>answer;
            if(answer=="True")
            {
                cout<<"bye,bye,bye,Y por si no nos vemos luego,buenos días, buenas tardes y buenas noches"<<endl;
                break;
            }
            else
            {
                cout<<"El juego continua"<<endl;
            }  
        }
        /**Cualquier valor entre 2 y 6 se suma al acumulado y el juego continúa */
        if(valor>=2||valor<=6)
        {
            puntos=to_string(stoi(puntos)+valor);//stoi es para poder sumar puntos y el valor y luego que sea cadena otra vez con to_string
        }
    }
    cout<<"Por favor ingrese un valor entre [0,6]"<<endl;
}