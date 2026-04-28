#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int valor,a,potencia=0,resultado=0;
    string binario="",hexadecimal="";
    bool comienza=false;
    cout<<"Ingrese un numero entre [1 , 255]: ";
    cin>>valor;
    int hex=valor; 
    int original=valor;
    if(valor>=1&&valor<=255)
    {
        for(a=7;a>=0;a--)
        {
        potencia=pow(2,a);
            if(potencia<=valor)
                {
                comienza=true;
                //cout<<"1";
                valor=valor-potencia;
                binario=binario+"1";
                }
                else
                {// si la potencia es mayor al valor,se imprime un 0
                    if(comienza==true)
                    {
                    //cout<<"0";
                    binario=binario+"0";
                    }
                }
        }
        while(hex>0)
        {
            int division=hex/16;
            int residuo=hex%16;
            if(residuo<10) 
            {  
            hexadecimal=to_string(residuo)+hexadecimal;
            }
            else
            {
            switch(residuo)
                {
                    case 10:
                    {  
                    hexadecimal="A"+hexadecimal;
                    break;
                    }
                    case 11:
                    {
                    hexadecimal="B"+hexadecimal;
                    break;
                    }
                    case 12:
                    {
                    hexadecimal="C"+hexadecimal;
                    break;
                    }
                    case 13:
                    {
                    hexadecimal="D"+hexadecimal;
                    break;
                    }
                    case 14:
                    {
                    hexadecimal="E"+hexadecimal;
                    break;
                    }
                    case 15:
                    {
                    hexadecimal="F"+hexadecimal;
                    break;
                    }
                }
            }
        hex=hex/16;
        }
    }
cout<<original<<" en base 2 es: "<<binario<<endl;
cout<<original<<" en base 16 es: "<<hexadecimal<<endl;
}





