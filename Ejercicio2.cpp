#include <iostream>
using namespace std;
int main(){
int Edad;

cout<<"Programa para verificar que usted es mayor de edad \n";
cout<<"Ingrese su edad \n";
cin>>Edad;


if (Edad<=0){

    cout<<"Valor de edad no valido. \n";
}
else if(Edad>=18)
{
    cout<<"Usted es mayor de edad.";
}
else{
    cout<<"Usted es menor de edad.";
}

return 0;
}