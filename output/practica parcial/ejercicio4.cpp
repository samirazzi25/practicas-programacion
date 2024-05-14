#include <iostream>
using namespace std;

int main()
{

    /*hacer un algoritmo que lea las notas de un alumno y al final calcule su promedio. Si el
    promedio es menor a 4 debe mandar un mensaje que diga “tu promedio es bajo”. Si está
    entre 4 y 7 debe decir “es un buen promedio”. Y si es mayor de 7 “excelente promedio”. Se
    deben pedir notas hasta que el usuario lo desee.*/
    int i, opc;
    float nota, promedio;
    do
    {
        cout << "ingrese sus notas" << endl;
        cin >> nota;
        cout << " desea continuar: 1=si / 0=no";
        cin >> opc;

        promedio = promedio + nota;
        i++;

    } while (opc == 1);

    promedio = promedio / i;

    if (promedio < 4)
    {
        cout << "tu promedio es bajo" << endl;
    }
    if ((promedio > 4) && (promedio < 7))
    {
        cout << "es un buen promedio" << endl;
    }
    if (promedio > 7)
    {
        cout << "exelente promedio" << endl;
    }
    
    cout<< "tu promedio es: "<< promedio<<endl;
}