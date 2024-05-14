#include <iostream>
using namespace std;

int main()
{

    /*Hacer un algoritmo que pida por pantalla, diferentes números enteros hasta que el valor
    del último sea negativo. Al final mostrar por pantalla la suma de todos los números.*/

    int n, suma;
    suma = 0;
    do
    {
        cout << "indique los numeros enteros" << endl;
        cin >> n;

        suma += n;
        

    } while (n > 0);

    cout<< "la suma de todos los numeros es: "<<suma<<endl;
}