#include <iostream>
using namespace std;

int main()
{

    /*Hacer un algoritmo que lea N estudiantes. Y para cada estudiante pida las notas de 3
    exámenes. Y muestre el promedio de notas de cada estudiante por pantalla. Usar dos ciclos
    repetitivos.*/

    int n, i, i2;
    float promedio, nota;

    cout << "ingrese la cantidad de alumnos" << endl;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        promedio = 0;
        for (i2 = 0; i2 < 3; i2++)
        {
            cout << "ingrese la nota " << i2 + 1 << "del alumno" << i + 1 << endl;
            cin >> nota;

            promedio = promedio + nota;
        }

        promedio = promedio / 3;
    }

    cout << "el promedio de cada estudiante es: " << promedio << endl;
}