/*Construir un programa que lea una frase cualquiera y convierta la primera letra de cada palabra
en mayúscula; esta conversión debe realizarse mediante una función escrita por ustedes
mismos que reciba una palabra y devuelva la misma palabra con la letra inicial en mayúscula.*/
#include<iostream>
#include<string>
using namespace std;
string primeraletramayuscula(string palabra)
{
    string mayuscula="";
    for(int i=0;i<palabra.size();i++)
    {if(palabra[0]>='a'&&palabra[0]<='z')
    {
    palabra[0]-=32;
    }
    else{ palabra[0]=palabra[0];}
    if(palabra[i]==' ')
    {
        if(palabra[i+1]>='a'&&palabra[i+1]<='z')
        {
            palabra[i+1]-=32;
        }
    }
    mayuscula= mayuscula+palabra[i];
    }
    return mayuscula;

}
int main()
{
    cout<<"Por favor escriba una frase: ";
    string frase="";
    getline(cin,frase);
    cout<<primeraletramayuscula(frase)<<" ";
}

