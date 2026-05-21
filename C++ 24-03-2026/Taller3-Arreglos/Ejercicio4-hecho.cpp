#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;
/*Construir un programa en C++ que lea un número entero positivo n y después 
genere n valores de manera aleatoria (entre 0 y 10) y los guarde en un vector. Crear una 
función (con tipo de retorno int) que calcule y devuelva el factorial de cada uno de los 
elementos del vector generado.*/

//Funcion para el número aleatorio
int factorial (int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
    // retorna el factorial del numero aleatorio suministrado
}

int main()
{
    int n,i=0;
    cout<<"ingrese un numero positivo";
    cin>>n;
    vector<int> numeros(n);
    // n es el tamaño definido del vector y depende del número introducido 
    srand(time(0));
    // me pregunto porque usara srand y no solo rand

//Añade los numeros aleatorios al vector
    
    for(i;i<n;i++)
    {
        numeros[i]=rand()%11;
        //cout<<"Genera numeros aleatorios entre 0 y 10";
        //cout<<rand()%11;
    }
//Muestra cada componente del vector
    cout<<"Numero generado y su vector";
    for(i=0;i<n;i++)
    {
        cout<<numeros[i]<<"! = "<<factorial(numeros[i])<<"\n";
    }
}

/*como se genera un numero random
con la libresía
#include<cstdlib>
solo con rand() genera los mismos numeros e inicia en 1
rand(0) ahí es como colocarle el punto de inicio

time(0) y #include<ctime>
Esta funcion nos devuelve el tiempo representado en segundos
Podemos controlar la semilla con el time para generar numeros aleatorios en 
cada ejecucion de rand()

Para generar numeros aleatorios entre 
0 y 10 hacemos residuo por 11
rand()%11
*/


//Explicaciones
