#include <iostream>
using namespace std;
int main(){
cout<<"Calculadora de Indice De Masa Corporal";
//DEFINIMOS NUESTRAS VARIABLES
float peso = 0;
float altura=0;
cout<<"\n-------------------------------------------";
cout<<"\nIngrese su Peso en KG por favor\n";
//INGRESO DE DATOS
cin>>peso;
cout<<"\nIngrese su Altura en Metros por favor\n";
cin>>altura;
//FORMULA
float resultado=peso/(altura*altura);
cout<<"Su IMC es de "<<resultado;
return 0;

}
