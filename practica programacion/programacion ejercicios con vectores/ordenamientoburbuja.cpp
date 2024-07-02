#include <iostream>
using namespace std;

void provincia(int v1, int v2, int v3, int v4, int v5)
{
    if (v1 > v2 && v1 > v3 && v1 > v4 && v1 > v5)
    {
        cout << "La provincia con mas pedidos es Buenos Aires" << endl;
    }

    if (v2 > v1 && v2 > v3 && v2 > v4 && v2 > v5)
    {
        cout << "La provincia con mas pedidos es Cordoba" << endl;
    }

    if (v3 > v1 && v3 > v2 && v3 > v4 && v3 > v5)
    {
        cout << "La provincia con mas pedidos es Jujuy" << endl;
    }

    if (v4 > v1 && v4 > v2 && v4 > v3 && v4 > v5)
    {
        cout << "La provincia con mas pedidos es Santiago del Estero" << endl;
    }

    if (v5 > v1 && v5 > v2 && v5 > v3 && v5 > v4)
    {
        cout << "La provincia con mas pedidos es Salta" << endl;
    }
}

void carlitos(int counter)
{
    if (counter > 0)
    {
        cout << "la cantidad de encargados llamados Carlos es de: " << counter << endl;
    }
}

int main()
{

    int code, eleccion1, dni, eleccion2, contBS = 0, contJU = 0, contCBA = 0, contSE = 0, contSA = 0, contCARLOS = 0;
    int totalpedidos = 0;
    int Dnis [100];
    float peso, precio;
    string name;

    do
    {
        cout << "Metalurgia Capurelli - Registro de Pedidos" << endl
             << "Ingrese el codigo del pedido" << endl;
        cin >> code;
        cout << "Ingrese el peso del pedido" << endl;
        cin >> peso;
        cout << "Indique el destino del pedido  [#1] Buenos Aires [#2] Cordoba [#3] Jujuy [#4] Santiago del Estero [#5] Salta" << endl;
        cin >> eleccion1;

        if (eleccion1 == 1)
        {
            contBS++;
        }

        if (eleccion1 == 2)
        {
            contCBA++;
        }

        if (eleccion1 == 3)
        {
            contJU++;
        }

        if (eleccion1 == 4)
        {
            contSE++;
        }

        if (eleccion1 == 5)
        {
            contSA++;
        }

        cout << "¿Cuanto costo el pedido?" << endl;
        cin >> precio;

        cout << "Nombre al Encargado" << endl;
        cin >> name;

        cout << "Escriba el DNI del Encargado" << endl;
        cin >> dni;

        Dnis[totalpedidos] = dni;
        totalpedidos++;

        cout << "¿Desea repetir el formulario? [#0] No [#1] Si" << endl;
        cin >> eleccion2;

        if (name == "Carlos" || name == "carlos")
        {
            contCARLOS++;
        }

    } while (eleccion2 == 1);

    provincia(contBS, contCBA, contJU, contSE, contSA);

    carlitos(contCARLOS);

     int band = 0, aux;
    while (band == 0)
    {
        band = 1;
        for (int i = 0; i < totalpedidos - 1; i++)
        {
            if (Dnis[i] > Dnis[i + 1])
            {
                aux = Dnis[i];
                Dnis[i] = Dnis[i + 1];
                Dnis[i + 1] = aux;
                band = 0;
            }
        }
    }
   cout << "DNIs de todos los responsables ordenados de menor a mayor:" << endl;
    for (int i = 0; i < totalpedidos; i++)
    {
        cout << Dnis[i] << endl;
    }



}