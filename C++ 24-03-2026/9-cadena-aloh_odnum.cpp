#include<iostream>
#include<string>

using namespace std;
int main()
{
string frase,palabra="",resultante="";
int i=0,a=0;
cout<<"Escriba una frase (minimo dos palabras)";
getline(cin,frase);

for(i=0;i<frase.size();i++)
{
   resultante=frase[i]+resultante;
   
   
}
cout<<resultante<<endl;
for(a=resultante.size();a=' ';a--)
    {
    palabra=resultante[a]+palabra;

    }
cout<<palabra;
}