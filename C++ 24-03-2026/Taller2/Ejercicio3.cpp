#include<iostream>
using namespace std;
int main()
{
float notas=0;
int i,n=0,promedio=0,good=0,bad=0;
/*cout<<"Ingrese la cantidad de notas:  ";
cin>>i;*/
cout<<"Ingrese -1 en notas para finalizar el programa"<<"\n";
while (i!=-1)
    {    
        cout<<"Ingrese la nota de [0.0;5.0]: ";
        cin>>notas;
        if (notas!=-1&&notas>=0&&notas<=5.0)
        {
            if(notas>=3.0)
            {
            cout<<"Aprobado"<<endl;
            good=good+1;
            }
            else
            {
            cout<<"Reprobado"<<endl;
            bad=bad+1;

            }
            n=n+1;
            promedio=promedio+notas; 
        }
        else
        {
            cout<<"Ingrese una nota valida"<<"\n";
        
            if(notas==-1)
            {
            
                
                
                    cout<<"Estadisticas del grupo:"<<endl;
                    cout<<"Cantidad total de notas ingresadas:"<<n<<endl;
                    cout<<"Promedio de las notas:"<<promedio/n<<endl;
                    cout<<"Cantidad de estudiantes aprobados:"<<good<<"\n";
                    cout<<"Cantidad de estudiantes reprobados:"<<bad<<"\n";
            }
        }
    }
}

