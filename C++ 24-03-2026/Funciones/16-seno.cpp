#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int fact(int x)
{
    int prod = 1, i;
    for (i = 1; i <= x; i++)
    {
        prod = prod * i;
    }
    return prod;
}


int main()
{
    
    int n, i, angulo;
    float x, suma = 0.0,sumac=0.0;
    cout << "valor de n (terminos)?: ";
    cin >> n;
    cout << "Angulo (grados)?: ";
    cin >> angulo;
    x = (3.14159/180) * angulo;
    for (i = 0; i <= n; i++)
    {
        suma = suma + ((pow(-1, i)) * (pow(x, 2*i + 1)) ) / (fact(2 * i + 1));
    }    
   // cout << "Seno de " << angulo << " es igual a: " << setprecision(20) << suma << endl;
    //cout << "Seno de " << angulo << " es igual a: " << setprecision(20) << sin(x) << endl;

    for (i = 0; i <= n; i++)
    {
        sumac = sumac + ((pow(-1, i)) * (pow(x, 2*i )) ) / (fact(2 * i ));
    }    
    //cout << "Coseno de " << angulo << " es igual a: " << setprecision(20) << sumac << endl;
    //cout << "Coseno de " << angulo << " es igual a: " << setprecision(20) << cos(x) << endl;
    /*setprecision da la can
    cantidad de cifras que quiere que aparezca*/
    //cout <<"tangente de "<<angulo<<"es igual a :"<<setprecision(20)<<suma/sumac<<endl;
    //cout << "Tangente de " << angulo << " es igual a: " << setprecision(20) << tan(x) << endl;
        int a;
        a=suma/sumac;
        while(a!=2)
        {
            cout << "-- Menu de operaciones --" << "\n";
            cout << "1. Calcular Seno" << "\n";
            cout << "2. Calcular Coseno" << "\n";
            cout << "3. Calcular Tangente" << "\n";
            cout << "0. Salir" << "\n";
            cout << ": " << endl;
            cin >> i;

            switch(a)
            {
                case 1:
                {   
                cout<< "Seno de " << angulo << " es igual a: " << setprecision(20) << suma << endl;
                break;
                }
                case 2:
                {
                cout << "Coseno de " << angulo << " es igual a: " << setprecision(20) << sumac << endl;
                break;
                }
                case 3:
                {
                cout <<"tangente de "<<angulo<<"es igual a :"<<setprecision(20)<<suma/sumac<<endl;
                break;
                }
               
            }   
        
    }
}

