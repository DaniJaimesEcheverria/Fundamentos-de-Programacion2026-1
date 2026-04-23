#include <iostream>
using namespace std;
int main(){
    int ultimo=0,penultimo=1,suma=0,num;
    cout<<"Ingrese el numero ";
cin>>num;
while(suma<=num){
    suma=ultimo+penultimo;
    ultimo=penultimo;
    penultimo=suma;
   // cout<<suma<<"\n";
    cout<<ultimo<<"\n";
}
}