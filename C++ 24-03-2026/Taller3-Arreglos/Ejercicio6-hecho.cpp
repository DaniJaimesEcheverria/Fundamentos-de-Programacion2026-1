#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;
/*Escribir un programa en C++ que lea una matriz de m × n enteros y realice las 
siguientes operaciones:
a)
Encontrar el elemento máximo y el elemento mínimo de la matriz, indicando la fila 
y la columna en la que se encuentra cada uno.
b)
Intercambiar la fila que contiene el valor máximo con la fila que contiene el valor 
mínimo y mostrar la matriz resultante.
c)
Calcular la transpuesta de la matriz y almacenarla en una nueva matriz. Imprimir 
ambas matrices (la original con filas intercambiadas y la transpuesta) de forma legible.*/
int main()
{   
    int m,n,i,j,residuo;
    cout<<"introduzca el numero de filas: ";
    cin>>m;
    cout<<"Introduzca el numero de columnas :";
    cin>>n;
    cout<<"Introduzca el invervalo para los numeros a aleatorios (si quiere hasta cierto numero como 10 sume 1): ";
    cin>>residuo;
    int MA[m][n];
    int TMA[n][m];
    int intercambiadas[m][n];
    MA[0][0]=0;
    //como si fuera un array
    srand(time(0));
    cout<<"Matriz A"<<endl;
    int max=MA[0][0],min=residuo-1,filx,fili,colsx,colsi;
    for( i=0;i<m;i++)
    /*el ciclo for inicia con la fila 0 y cuando el ciclo 
    for de adentro la completa , vamos a la siguiente fila
    */
    {
        for(j=0;j<n;j++)
    {   MA[i][j] = rand()%residuo;
        
         //Aqui estamos mostrando sus componentes
        cout<<MA[i][j]<<"\t";
            if(MA[i][j]>max)
            {
                max=MA[i][j];
                filx=i;
                colsx=j;

            }
            if(MA[i][j]<min)
            {
                min=MA[i][j];
                fili=i;
                colsi=j;
            }
    }
    cout<<endl;
    }
    cout<<"El elemento Minimo de la matriz es "<<min<<" que se encuentra en la fila "<<fili<<" con columna "<<colsi<<"\n";
    cout<<"El elemento Maximos de la matriz es "<<max<<" que se encuentra en la fila "<<filx<<" con columna "<<colsx<<"\n";
    
    //vamos a intercambiar la fila con el valor max con la fila del valor min
    cout<<"Matriz A intercambiada la fila mayor con la menor"<<endl;
    //intercambio de filas
    for(j=0;j<n;j++)
    {
        //como burbuja , tenemos que guardar la posicion para poder intercambiarla
        int aux=MA[filx][j];
        MA[filx][j]=MA[fili][j];
        MA[fili][j]=aux;// y asi la fila con el elemento menor ahora guardará los del elemento maximo
        for( i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {  
            cout<<MA[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    }

    
    
    cout<<"Matriz A transpuesta"<<endl;
    //Vamos a intentar hacer la transpuesta 
    for( i=0;i<m;i++)
    /**/
    {
        for(j=0;j<n;j++)
        {
        TMA[j][i]=MA[i][j];

        }
    }
    //Ahora estamos mostrando la transpuesta
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        cout<<TMA[i][j]<<"\t";// el "\t" sirve para que haya como un espacio horizontañ
        }
        cout<<endl;
    }
}