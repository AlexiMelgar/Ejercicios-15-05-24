#include <iostream>
using namespace std;
int main(){
    
    float angulo=0.00;

    cout<<"Bienvenido al programa para evaluar el tipo de angulo \n";
    cout<<"Ingrese el valor del angulo \n";
    cin>>angulo;

    if(angulo<0){
    cout<<"Valor de angulo invalido";
    }
    else if(angulo>0 && angulo<90){
            cout<<"Su angulo es agudo";
    }
    else if(angulo==90){
            cout<<"Su angulo es recto";
    }
    else if(angulo>90 && angulo<=180){
            cout<<"Su angulo es obtuso";
    }
    else if(angulo>180){
            cout<<"Valor de angulo invalido";
    }

return 0;
}