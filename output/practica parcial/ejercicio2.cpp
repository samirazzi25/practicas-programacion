#include <iostream>
using namespace std;

int main (){

/*Ingresar 8 números por teclado. Contabilizar la cantidad de pares, impares que hay.*/
int i, pares = 0, impares = 0, n;


for (i=0; i<8; i++)
{
cout<< "ingrese los numeros: "<< i + 1<<endl;
cin>> n;

if (n % 2 == 0)
{
    pares++;
}else
{
    impares++;
}


}

cout<< "los numeros pares son: "<<pares<< endl;
cout<< "los numeros impares son: "<<impares<<endl;


}