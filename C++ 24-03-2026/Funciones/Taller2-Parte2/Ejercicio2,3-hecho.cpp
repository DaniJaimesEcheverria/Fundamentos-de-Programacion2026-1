/*Ejercicio 3: Censura de vocales
Construir un programa que lea una frase y genere una versión censurada de la misma,
reemplazando cada vocal por el carácter «*». La censura debe realizarse mediante una función
que reciba un carácter individual y devuelva el mismo carácter si es consonante o espacio, o
«*» si es vocal. El programa principal debe recorrer la frase carácter por carácter, invocando
dicha función para cada uno.*/
#include<iostream>
#include<string>
using namespace std;
char vocales(char a)
{
    if(a=='a'||a=='A')
    {a='*';}
    if(a=='e'||a=='E')
    {a='*';}
    if(a=='i'||a=='I')
    {a='*';}
    if(a=='o'||a=='O')
    {a='*';}
    if(a=='u'||a=='U')
    {a='*';}
return a; 
}

int main()
{
    string frase="",censura;
    cout<<"Escriba una frase: ";
    getline(cin,frase);
    int i;
    for(i=0;i<=frase.size();i++)
    {
    char devolver=frase[i];
    censura=censura+vocales(devolver);
    }
    cout<<censura;
}