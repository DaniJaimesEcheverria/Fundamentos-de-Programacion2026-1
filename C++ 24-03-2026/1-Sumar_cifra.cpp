
#include<iostream>
using namespace std;
int main()
{
    int num,resultado=0,r,factor;
    factor=1;
    cout <<"Ey,ponga un numero: ";
    cin >>num;
    while(num>0){
        r=num%10;//saco el residuo de num por 10 
        num=num/10;
        resultado=resultado+((r+2)%10)*factor;
        factor=/*prueba*/factor*10;
        //factor*=10;
    }
    cout<<resultado;
}