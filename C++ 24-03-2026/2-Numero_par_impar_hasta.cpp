#include <iostream>
using namespace std;
int main(){
    int num,i=0;
    cout<<"Ingrese un número ";
    cin>>num;
    while(i<num){
        if (num%2==0){
            cout<<num<<" es par ";
        }else{
            cout<<num<<" es impar ";
        }
    
        num=num-1;
    }
}