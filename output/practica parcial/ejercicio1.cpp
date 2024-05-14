#include <iostream>

using namespace std;

int main () {
 
 
 int i, nument;
int mayor, menor;
mayor = 0;
menor = 999;

cout<< "ingrese 10 numeros enteros"<<endl;

for (i=0; i<10; i++)
{
   cout<< "ingrese los numeros: "<< i + 1 <<endl;
   cin>>nument;

    if (nument > mayor)
    {
        mayor = nument;
    }
    if (nument < menor)
    {
        menor = nument;
    }

}

cout<< "el mayor numero ingresado es: "<< mayor<< endl;
cout<< "el menor numero ingresado es: "<< menor<< endl; 
 



}