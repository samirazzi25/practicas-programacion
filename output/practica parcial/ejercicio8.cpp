#include <iostream>
using namespace std;

int main()
{

    /*En la fábrica del señor Juancho todos los días fabrican N cantidad de martillos de Hierro
    donde se tiene como dato el peso y la dureza. Se sabe que el martillo es una pieza
    defectuosa si su peso es menor de 7 kilos. la dureza siempre esta comprendida entre 3.5 y
    20 barras. Elabore un programa en c++ donde lea la cantidad de N martillos producidos y
    determine la cantidad de martillos defectuosos que salieron. Y 2) el valor de la dureza más
    baja en un martillo fabricado.*/

    int n, defectuoso, i;
    float peso, dureza, durezamin;
    // si el martillo es menor a 7 kilos es defectuoso, la durea siempre esta en 3.5 y 20 barras.

    defectuoso = 0;
    durezamin = 20;

    cout << "indique cuantos martillos quiere hacer" << endl;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "indique el peso del marillo "<< i + 1  << endl;
        cin >> peso;

        cout << "indique la dureza del martillo "<< i + 1 << endl;
        cin >> dureza;

        if (peso < 7)
        {
            defectuoso++;
        }
        if (dureza < durezamin)
        {
            durezamin = dureza;
        }
    }
    
    cout << " los Martillos fabricados son: "<< n <<endl;
    cout << "Los Martillos defectuosos son: "<< defectuoso << endl;
    cout << "la dureza minima de un martillo recien fabricado es: " << durezamin << endl;
}