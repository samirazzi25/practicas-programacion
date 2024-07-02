#include <iostream>
using namespace std;
int main()
{

    int i, aux, j, A[5], band = 0;

    for (i = 0; i < 5; i++)
    {

        cout << "Indique el elemento" << i + 1 << endl;
        cin >> A[i];
    }

    while (band == 0)
    {
        band = 1;
        for (i = 0; i < 4; i++)
        {
            if (A[i] > A[i + 1])
            {

                aux = A[i];
                A[i] = A[i + 1];
                A[i + 1] = aux;
                band = 0;
            }
        }
    }

    cout << "El vector resultante es: " << endl;

    for (i = 0; i < 5; i++)
    {

        cout << A[i] << ",";
    }
}