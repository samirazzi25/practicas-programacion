#include <iostream>
using namespace std;

float porcentajePedidosPesoEntre(float pesos[], int total) {
    int contador = 0;
    for (int i = 0; i < total; i++) {
        if (pesos[i] >= 50 && pesos[i] <= 100) {
            contador++;
        }
    }
    return (contador * 100.0) / total;
}

int main (){

int A[10],i; // esto es un vector 

for (i=0;i<10;i++) // un for para contar los numeros que va a indicar 
{
    cout<<"indique el numero"<<i+1<<endl;
    cin>>A[i];
}

 cout<<"los numeros leidos son: "<<endl;

for(i=0;i<10;i++)  // un for para poder el vector, aunque se lo puede hacer en un for.
{

cout<<A[i]<<""; // las comillas son para el espacio
} 

}