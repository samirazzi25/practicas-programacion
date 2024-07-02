#include <iostream>
using namespace std;

/*Las notas de un conjunto de N alumnos se guardan en un arreglo unidimensional, Las notas
son valores entre 0 y 10. Obtener un programa que solicite la cantidad N de alumnos,
sucesivamente los datos en el vector y determine la cantidad de estudiantes en cada categoría
según la nota obtenida:
 Deficientes 0-3
 Regulares 4-5
 Buenos 6-8
 Excelentes 9-10*/
int main()
{

    int i, n;
    float notas[10];
    int a = 0, b = 0, c = 0, d = 0;

    cout << "cuatos alumnos son " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "ingrese las notas del alumno"<< i+1 << endl;
        cin >> notas[i];

        if (notas[i] <= 3)
        {
            a++;
        }
        if (notas[i] > 3 && notas[i] <= 5)
        {
            b++;
        }
        if (notas[i] > 5 && notas[i] <=8)
        {
            c++;
        }
        if (notas[i]>8)
        {
            d++;
        }
        
        
    }

    cout << "deficiente" << a<<endl;
    cout << "regular" << b<<endl;
    cout<<"bueno"<<c<<endl;
    cout << "exelente" << d <<endl;
}