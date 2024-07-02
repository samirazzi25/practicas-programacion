#include <iostream>
using namespace std;

int main()
{

    int A[100], i, n, x;
    cout << "cual es el tamano de vector" << endl;
    cin >> n;

    cout << "cual es el numero a multiplicar" << endl;
    cin >> x;

    for (i = 0; i < n; i++) // asignar el elemento para que lo pueda multiplicar
    {
        A[i] = (i + 1) * x;
    }

    for (i = 0; i < n; i++) // for para poder mostrar el resultado
    {
        cout << A[i] << ",";
    }
}