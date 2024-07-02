#include <iostream>
using namespace std;

void edadsex(int e[5], char s[5], string n[5])
{
    int i, pos;
    for (i = 0; i < 5; i++)
    {
        if (n[i] == "joaquin")
        {

            pos = i;
        }
    }

    cout << "El sexo es: " << s[pos] << " y la edad es: " << e[pos] << endl;
}

void lista(string n[5], int e[5])
{
    int i;

    for (i = 0; i < 5; i++)
    {
        if (e[i] < 18)
        {

            cout << n[i] << endl;
        }
    }
}

float promedioe(int e[5])
{
    int i, cm = 0, suma = 0;

    for (i = 0; i < 5; i++)
    {

        if (e[i] >= 18)
        {

            cm++;
            suma = suma + e[i];
        }
    }

    return suma / cm;
}

int main()
{

    int i, edad[5];
    string nombre[5];
    char sexo[5];

    for (i = 0; i < 5; i++)
    {

        cout << "Indique el nombre del alumno" << i + 1 << endl;
        cin >> nombre[i];
        cout << "Indique la edad del alumno" << i + 1 << endl;
        cin >> edad[i];
        cout << "Indique el sexo del alumno" << i + 1 << endl;
        cin >> sexo[i];
    }

    edadsex(edad, sexo, nombre);

    cout << "los nombres de los alumnos menores de edad son:" << endl;
    lista(nombre, edad);


    cout<<"el promedio de las edades es: "<<promedioe(edad)<<endl;
}