#include<iostream>
#include<vector>
//using namespace std;
int main()
{
    std::vector<float>notas;//notas esta vacio y no esta definido el tamaño
    std::cout<<"Cuantos elementos quiere promediar: ";
    int n,i;
    float elem,suma, promedio;
    std::cin>>n;
    for(i=0;i<n;i++)
    {
    std::cin>>elem;
    notas.push_back(elem);// para llenar la cadena notas con los datos que entran en elem
    }
    //for "moderno"igual a
    /*for(i=0;i<notas.size();i++)
    {
    std::cout<<notas[i]<<" ";
    }
    */
    for(auto valor:notas)//auto es como el mismo tipo de variable que el de notas
    {
        std::cout<<valor<<" ";
        
    }
    std::cout<<std::endl,
    suma=0;
    for(i=0;i<n;i++)
    {
        suma=suma+notas[i];
    }
    promedio=suma/notas.size();
    std::cout<<"El promedio es"<<promedio;
}