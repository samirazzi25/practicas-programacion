#include <iostream>
using namespace std;

int main (){


int A[5],i; // esto es un vector 

for (i=0;i<5;i++) // un for para contar los numeros que va a indicar 
{
    cout<<"indique el numero"<<i+1<<endl;
    cin>>A[i];
}

 cout<<"los numeros leidos son: "<<endl;

for(i=0;i<5;i++)  // un for para poder el vector, aunque se lo puede hacer en un for.
{

cout<<A[i]<<""; // las comillas son para el espacio
} 




}