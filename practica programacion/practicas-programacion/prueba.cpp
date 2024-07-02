#include <iostream>
#include <string>

using namespace std;

const int MAX_PEDIDOS = 1000;

struct Pedido {
    string codigo;
    double peso;
    string provincia;
    double costo;
    string responsable;
    string dni_responsable;
};

void ingresarPedido(Pedido pedidos[], int& count) {
    if (count >= MAX_PEDIDOS) {
        cout << "No se pueden ingresar más pedidos." << endl;
        return;
    }

    Pedido p;
    cout << "Ingrese el código del pedido: ";
    cin >> p.codigo;
    cout << "Ingrese el peso del pedido: ";
    cin >> p.peso;
    cout << "Ingrese la provincia a la que llegó: ";
    cin >> p.provincia;
    cout << "Ingrese el costo del pedido: ";
    cin >> p.costo;
    cout << "Ingrese el nombre del responsable: ";
    cin.ignore();
    getline(cin, p.responsable);
    cout << "Ingrese el DNI del responsable: ";
    cin >> p.dni_responsable;

    pedidos[count] = p;
    count++;
}

string provinciaConMasPedidos(Pedido pedidos[], int count) {
    int contadorProvincias[5] = {0};
    string provincias[5] = {"buenos aires", "jujuy", "cordoba", "santiago del estero", "salta"};

    for (int i = 0; i < count; i++) {
        for (int j = 0; j < 5; j++) {
            if (pedidos[i].provincia == provincias[j]) {
                contadorProvincias[j]++;
            }
        }
    }

    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (contadorProvincias[i] > contadorProvincias[maxIndex]) {
            maxIndex = i;
        }
    }

    return provincias[maxIndex];
}

void pedidosFacturadosANombreDe(Pedido pedidos[], int count, const string& nombre) {
    for (int i = 0; i < count; i++) {
        if (pedidos[i].responsable == nombre) {
            cout << "Código: " << pedidos[i].codigo << ", Peso: " << pedidos[i].peso << ", Provincia: " << pedidos[i].provincia << ", Costo: " << pedidos[i].costo << ", Responsable: " << pedidos[i].responsable << ", DNI: " << pedidos[i].dni_responsable << endl;
        }
    }
}

double porcentajePedidosPesoEntre(Pedido pedidos[], int count, double minPeso, double maxPeso) {
    int contador = 0;
    for (int i = 0; i < count; i++) {
        if (pedidos[i].peso >= minPeso && pedidos[i].peso <= maxPeso) {
            contador++;
        }
    }
    return (contador * 100.0) / count;
}

string dniPedidoMasPesado(Pedido pedidos[], int count) {
    if (count == 0) return "";
    int maxIndex = 0;
    for (int i = 1; i < count; i++) {
        if (pedidos[i].peso > pedidos[maxIndex].peso) {
            maxIndex = i;
        }
    }
    return pedidos[maxIndex].dni_responsable;
}

string responsablePedidoMenosPesadoEnProvincia(Pedido pedidos[], int count, const string& provincia) {
    int minIndex = -1;
    for (int i = 0; i < count; i++) {
        if (pedidos[i].provincia == provincia) {
            if (minIndex == -1 || pedidos[i].peso < pedidos[minIndex].peso) {
                minIndex = i;
            }
        }
    }
    return (minIndex == -1) ? "" : pedidos[minIndex].responsable;
}

string dniPedidoPorCodigo(Pedido pedidos[], int count, const string& codigo) {
    for (int i = 0; i < count; i++) {
        if (pedidos[i].codigo == codigo) {
            return pedidos[i].dni_responsable;
        }
    }
    return "";
}

double costoTotalPedidosEnProvincia(Pedido pedidos[], int count, const string& provincia) {
    double total = 0;
    for (int i = 0; i < count; i++) {
        if (pedidos[i].provincia == provincia) {
            total += pedidos[i].costo;
        }
    }
    return total;
}

double porcentajePedidosPorResponsable(Pedido pedidos[], int count, const string& responsable) {
    int contador = 0;
    for (int i = 0; i < count; i++) {
        if (pedidos[i].responsable == responsable) {
            contador++;
        }
    }
    return (contador * 100.0) / count;
}

int cantidadPedidosMenoresDePeso(Pedido pedidos[], int count, double maxPeso) {
    int contador = 0;
    for (int i = 0; i < count; i++) {
        if (pedidos[i].peso < maxPeso) {
            contador++;
        }
    }
    return contador;
}

string codigoPedidoMasLivianoEnProvincia(Pedido pedidos[], int count, const string& provincia) {
    int minIndex = -1;
    for (int i = 0; i < count; i++) {
        if (pedidos[i].provincia == provincia) {
            if (minIndex == -1 || pedidos[i].peso < pedidos[minIndex].peso) {
                minIndex = i;
            }
        }
    }
    return (minIndex == -1) ? "" : pedidos[minIndex].codigo;
}

double totalFacturado(Pedido pedidos[], int count) {
    double total = 0;
    for (int i = 0; i < count; i++) {
        total += pedidos[i].costo;
    }
    return total;
}

double totalFacturadoPorNoResponsable(Pedido pedidos[], int count, const string& responsable) {
    double total = 0;
    for (int i = 0; i < count; i++) {
        if (pedidos[i].responsable != responsable) {
            total += pedidos[i].costo;
        }
    }
    return total;
}

string dniPedidoMasCostosoEnProvincia(Pedido pedidos[], int count, const string& provincia) {
    int maxIndex = -1;
    for (int i = 0; i < count; i++) {
        if (pedidos[i].provincia == provincia) {
            if (maxIndex == -1 || pedidos[i].costo > pedidos[maxIndex].costo) {
                maxIndex = i;
            }
        }
    }
    return (maxIndex == -1) ? "" : pedidos[maxIndex].dni_responsable;
}

void listarDNIsOrdenados(Pedido pedidos[], int count) {
    string dnis[MAX_PEDIDOS];
    for (int i = 0; i < count; i++) {
        dnis[i] = pedidos[i].dni_responsable;
    }

    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (dnis[j] > dnis[j + 1]) {
                swap(dnis[j], dnis[j + 1]);
            }
        }
    }

    for (int i = 0; i < count; i++) {
        cout << dnis[i] << endl;
    }
}

int main() {
    Pedido pedidos[MAX_PEDIDOS];
    int count = 0;
    char continuar;

    do {
        ingresarPedido(pedidos, count);
        cout << "¿Desea ingresar otro pedido? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    // Llamadas a las funciones y mostrar resultados
    cout << "Provincia con más pedidos: " << provinciaConMasPedidos(pedidos, count) << endl;

    cout << "Pedidos facturados a nombre de Carlos:" << endl;
    pedidosFacturadosANombreDe(pedidos, count, "Carlos");

    cout << "% de pedidos cuyo peso está entre 50 y 100 kilos: " << porcentajePedidosPesoEntre(pedidos, count, 50, 100) << "%" << endl;
    cout << "DNI del responsable que facturó el pedido más pesado: " << dniPedidoMasPesado(pedidos, count) << endl;
    cout << "Nombre del responsable que facturó el pedido menos pesado en la provincia de Jujuy: " << responsablePedidoMenosPesadoEnProvincia(pedidos, count, "Jujuy") << endl;
    cout << "DNI del responsable que facturó el pedido cuyo código es 0012655: " << dniPedidoPorCodigo(pedidos, count, "0012655") << endl;
    cout << "Costo total de los pedidos que llegaron a la provincia de Córdoba: " << costoTotalPedidosEnProvincia(pedidos, count, "cordoba") << endl;
    cout << "% de pedidos facturados por Raul: " << porcentajePedidosPorResponsable(pedidos, count, "Raul") << "%" << endl;
    cout << "% de pedidos cuyo peso está entre 90 y 120 kilos: " << porcentajePedidosPesoEntre(pedidos, count, 90, 120) << "%" << endl;
    cout << "Cantidad de pedidos menores de 50 kilos: " << cantidadPedidosMenoresDePeso(pedidos, count, 50) << endl;
    cout << "Código del pedido más liviano que llegó a la provincia de Catamarca: " << codigoPedidoMasLivianoEnProvincia(pedidos, count, "Catamarca") << endl;
    cout << "% de pedidos cuyo peso está entre 200 y 500 kilos: " << porcentajePedidosPesoEntre(pedidos, count, 200, 500) << "%" << endl;
    cout << "Total facturado por todas las provincias: " << totalFacturado(pedidos, count) << endl;
    cout << "Total facturado por pedidos cuyo responsable no sea Raul: " << totalFacturadoPorNoResponsable(pedidos, count, "Raul") << endl;
    cout << "DNI del responsable con el pedido más costoso dentro de la provincia de Ushuaia: " << dniPedidoMasCostosoEnProvincia(pedidos, count, "Ushuaia") << endl;

    cout << "Listado de DNIs ordenados de menor a mayor:" << endl;
    listarDNIsOrdenados(pedidos, count);

    return 0;
}
