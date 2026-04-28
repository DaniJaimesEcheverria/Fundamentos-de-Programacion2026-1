#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float notas=0,max=0,min=5.0;
    int n=0,promedio=0,good=0,bad=0;
    /*cout<<"Ingrese la cantidad de notas:  ";
    cin>>i;*/
    cout<<"Ingrese -1 en notas para finalizar el programa"<<"\n";
        while (notas!=-1)
        {    
            cout<<"Ingrese la nota de [0.0;5.0]: ";
            cin>>notas;
            if (notas!=-1&&notas>=0&&notas<=5.0)
            {
                if(notas>=3.0)
                {
                    //cout<<"Aprobado"<<endl;
                    good=good+1;
                    /* if(resultado>notas)
                        {
                    cout<<resultado<<" es la nota maxima"<<endl;
                        }
                        else
                        {
                        cout<<notas<<" es la nota maxima"<<endl;
                        }*/
                }
                else
                {
                //cout<<"Reprobado"<<endl;
                bad=bad+1;
                }
                    if(max<notas)
                    {
                    max=notas;
                    }
                    if(min>notas)
                    {//cout<<resultado<<" es la nota minima"<<endl;
                    //cout<<notas<<" es la nota maxima"<<endl
                    min=notas;
                    }
                
        n=n+1;
        promedio=promedio+notas;
        
            }
            else
            {
                cout<<"Ingrese una nota valida"<<"\n";
            }}
            
                if(notas==-1)
                {
                    cout<<"Se acabo el programa"<<endl;
                    cout<<"Estadisticas del grupo:"<<endl;
                    cout<<"Cantidad total de notas ingresadas:"<<n<<endl;
                    cout<<"Promedio de las notas:"<<promedio/n<<endl;
                    cout<<"Nota maxima: "<<setprecision(2)<<max<<endl;
                    cout<<"Nota minima: "<<setprecision(2)<<min<<endl;
                    cout<<"Cantidad de estudiantes aprobados:"<<good<<"\n";
                    cout<<"Cantidad de estudiantes reprobados:"<<bad<<"\n";
                }
            
            
            

}


