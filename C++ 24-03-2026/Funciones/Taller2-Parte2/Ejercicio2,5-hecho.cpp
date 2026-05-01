/*Construir un programa que lea una contraseña ingresada por el usuario y evalúe su nivel de
seguridad (débil, media o fuerte). 
Para ello debe implementarse una función que reciba la contraseña como cadena y devuelva el
nivel de seguridad según estos criterios: se considera
fuerte si tiene al menos 8 caracteres, contiene al menos una letra mayúscula, al menos una
minúscula y al menos un dígito; media si cumple al menos dos de esos criterios; y débil en
caso contrario. La función debe apoyarse en al menos una función auxiliar (por ejemplo, una
que cuente cuántos dígitos contiene la cadena)*/
#include<iostream>
#include<string>
using namespace std;
string comprobarContraseña(string contraseña)
{  string Estado="";
    int a,b=0;
    bool caractere8s=false,mayuscula=false,minuscula=false,digito=false;
for(a=0;a<contraseña.size();a++)
    {  
    char mculas=contraseña[a];
        if(contraseña[a]>=48&&contraseña[a]<=57)
        {digito=true;
        //cuenta con numeros
        }

        if(contraseña.size()>=8)
        { caractere8s=true;}

        if(mculas>=65&&mculas<=90)
        {mayuscula=true;
        //la contraseña tiene mayusculas
        }
        if(mculas>=97&&mculas<=122)
        {//La contraseña tiene minusculas
        minuscula=true;}
        }
    b=caractere8s+digito+mayuscula+minuscula;
    if(b==4)
    {Estado="Fuerte";}
    
    if(b<=2)
    {Estado="Medio";}

    if(b<=1)
    {Estado="Debil";}
    return Estado;
}
int main()
{
    cout<<"Por favor escriba una contraseña"<<endl;
    string contraseña="";
    getline(cin,contraseña);
    cout<<comprobarContraseña(contraseña)<<endl;
    
}

