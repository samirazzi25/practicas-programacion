#include <iostream>
using namespace std;

int main()
{

    /*Elabore un programa en C++ que registre los datos de N personas, entre los cuales
    están,nombre,dni,edad y si cobra o no “bono alimentario”. Implemente las siguientes
    soluciones:
    1) cantidad de personas mayores de 65 años
    2) cantidad de personas entre 19 y 40 años
    3) nombre de la persona con mayor edad
    4) % de personas mayores de 90 años
    5) % de personas que no reciben bono alimentario*/

    string nombre, nombremayoredad;
    int dni, edad, bono, n, i;
    int mayores65 = 0, entre19y40 = 0, mayores90 = 0, nobonoalim = 0, edadmax = 0;
    int porcenmayo90;

    cout << "¿cuantas personas quieres resgistrar? " << endl;
    cin >> n;

    for (i = 0; i < n; i++)
    {

        cout << "ingrese el nombre de la persona: "<< i + 1 << endl;
        cin >> nombre;

        cout << " indique el dni de la persona "<< i + 1 << endl;
        cin >> dni;

        cout << "Indique la edad de la persona "<< i + 1 << endl;
        cin >> edad;

        cout << "Indique si cobra bono alimentario 1=si / 0=no"<< i + 1 << endl;
        cin >> bono;

        if (edad > 65)
        {
            mayores65++;
        }
        if ( edad >= 19 && edad <= 40)
        {
            entre19y40++;
        }
        if (edad > edadmax)
        {
            edadmax = edad;
            nombremayoredad = nombre;
        }
        if (edad > 90)
        {
            mayores90++;
        }
        if (bono == 0)
        {
            nobonoalim++;
        }
    }
    mayores90 = (mayores90 * 100) / n;
    nobonoalim = (nobonoalim * 100) / n;


     cout<< "La cantidad de personas mayores a 65 son: "<< mayores65<< endl;
     cout<< "La cantidad de personas entre 19 y 40 son: "<<entre19y40<<endl;
     cout<< "El nombre de la persona de mayor edad es: "<<nombremayoredad<<endl;
     cout<< "El porcentaje de personas mayores de 90 es: "<<"% "<<mayores90<<endl;
     cout<< "El porcentaje de personas que no cobran bono alimenticio son: "<<"% "<<nobonoalim<<endl;




}