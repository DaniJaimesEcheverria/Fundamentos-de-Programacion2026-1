#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include<iomanip>
using namespace std;
/*Escribir un programa en C++ que gestione las calificaciones de un grupo de 
estudiantes. El programa debe:
a)
Leer el número de estudiantes (n) y el número de asignaturas (m). Almacenar las 
calificaciones en una matriz de n × m, donde cada fila representa un estudiante y cada 
columna una asignatura. Las calificaciones deben estar entre 0.0 y 5.0.
b)
Calcular el promedio de cada estudiante (promedio por filas) y almacenarlo en un 
vector de n elementos.
c)
Calcular el promedio de cada asignatura (promedio por columnas) y almacenarlo 
en un vector de m elementos.
d)
Determinar cuál es el estudiante con el promedio más alto y cuál es la asignatura 
con el promedio más bajo, mostrando los índices y valores correspondientes.*/
int main()
{
    int n,m;//n es filas y m es columnas
    int i,j,a;
    float suma,promedio,acumulado;
    cout<<"Introduzca el número de estudiantes: ";
    cin>>n;
    cout<<"Introduzca el número de asignaturas: ";
    cin>>m;
    cout<<endl;
    //La matriz guarda las calificaciones
    float MatrizCalificaciones[n][m];
    float PromedioFila[n];//quedo como matriz
    float PromedioColum[m];
    srand(time(0));
    for(i=0;i<n;i++)
    {
        suma=0;
        for(j=0;j<m;j++)
        {
            MatrizCalificaciones[i][j]=(float)rand()/RAND_MAX*5;
            //RAND MAX representa el valor máximo que puede devolver rand()
            //es como dividir un numero grande en un numero mas grande lo que genera datos de 0<x<1 y a multiplicarlo por 5 llega a 5.0
            suma=suma+MatrizCalificaciones[i][j];//Promedio para la fila/estudiante
        }
        //Promedio para el estudiante/fila
        promedio=suma/m;
        PromedioFila[i]=promedio;
        cout<<"Promedio del estudiante numero "<<i+1<<" de la lista es "<<setprecision(2)<<PromedioFila[i];

        
        cout<<endl;
    }
    cout<<endl;
    //Para mostrar la matriz sin interrupciones por el promedio
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        cout<<setprecision(2)<<MatrizCalificaciones[i][j]<<"\t";
        }
    cout<<endl;
    }

    //El promedio de la materia
    for(j=0;j<n;j++)//Empezando por las columnas primero para encontrar así el promedio
    {
        suma=0;
        for(i=0;i<m;i++)
        {
            suma=suma+MatrizCalificaciones[i][j];//Promedio para la fila/estudiante
        }
        //Promedio para el estudiante/fila
        promedio=suma/m;
        PromedioColum[j]=promedio;
        cout<<"Promedio de la materia numero "<<j+1<<" de la lista es "<<setprecision(2)<<PromedioColum[j];

        
        cout<<endl;
    }
}
//Tengo que almacenarlo en un vector para que aparezca en varias filas y una sola columna
//Tengo que almacenarlo en un vector para luego recorrerlo y comparar y saber cual es el más alto

