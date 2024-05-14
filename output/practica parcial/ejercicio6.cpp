#include <iostream>
using namespace std;

int main()
{

    /*hacer un algoritmo que pida el nombre y edad a 10 alumnos y muestre por pantalla lo
    siguiente:
    a) si el alumno se llama pedro y tiene igual o menos de 18 años: mostrar = “hola pedrito”
    b) si el alumno no se llama pedro mostrar = “tu no eres pedro”.
    c) si el alumno se llama Pedro y tiene más de 18 mostrar = “hola pedro”.*/

    string nombre;
    int edad, i;

    for (i = 0; i < 10; i++)
    {
        cout << "ingrese el nombre del alumno " << i + 1 << endl;
        cin >> nombre;
        cout << "ingrese la edad del alumno " << i + 1 << endl;
        cin >> edad;

        if ((nombre == "pedro") && (edad <= 18))
        {
            cout << "hola pedrito" << endl;
        }
        else
        {
            cout << "tu no eres pedro" << endl;
        }
        if ((nombre == "pedro") && (edad >= 18))
        {
            cout << "hola pedro" << endl;
        }
    }
}