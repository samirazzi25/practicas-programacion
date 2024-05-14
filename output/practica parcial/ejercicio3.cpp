#include <iostream>
using namespace std;

int main () {

/*para un número de N Alumnos se necesita calcular el promedio de 3 notas de cada uno.
y al final mostrar el promedio más alto y el promedio más bajo. hacer el algoritmo usando el
lenguaje c++.*/

int n, i, i2;
float promedio, promalto, prombajo, nota;

cout<< "ingrese el numero de alumnos"<<endl;
cin>> n;

prombajo = 10;
promalto = 0;

for (i=0; i < n; i++)
{
    promedio = 0;
    for (i2=0; i2 < 3; i2++)
    {
    cout<< "ingrese la nota " << i2 + 1<< "del alumno"<< i + 1 <<endl;
    cin>> nota;
    promedio = promedio + nota;
    }
     
     promedio = promedio / 3;
   
   if (promedio > promalto)
   {
     promalto = promedio;
   }
   if (promedio < prombajo)
   {
     prombajo = promedio;
   }
   
   
}


cout<< "el promedio mas alto es: "<< promalto<<endl;
cout<< "el promedio mas bajo es: "<<prombajo<<endl;


}