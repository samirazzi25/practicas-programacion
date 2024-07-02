#include <iostream>
using namespace std;
/*En la carnicería ̈Doña Berta ̈ se atiende a todo tipo de personas con descuentos especiales
según sea el caso. Aunque es una carnicería también se vende pescado y vegetales, además de
pollo y carnes . los clientes son organizados según el tipo, pensionados, comunes o afiliados.
El dueño de la carnicería ha decidido actualizarse y es por eso que lo contrata a Ud para que le
elabore un programa en donde pueda almacenar los siguientes datos por cada uno de los clientes,
nombre, Dni, sexo, tipo de cliente, monto de la compra, tipo de producto que compro.
Supóngase que por día se atiende a 30 clientes. Y al final se necesita conocer lo siguiente:
1- Cantidad de clientes que compraron mas de 5.000 pesos en carnes
2- % de clientes mujeres
3- Sexo del cliente que menos compro
4- Dni del cliente que hizo la mayor compra
5- % de hombres afiliados que compraron menos de 1500 pesos*/
int main () {

int dni[10], sexo[10],sexoMenorcompra=-1,tipoc[10], tipopro[10], i,cmonto=0, cm=0, mayordni=-1, cafiliado=0;
float monto[10], menorcompra=9999999, porcenmujeres, porcenHomAfiliados;

string nombre[10];

for (i = 0; i < 10 ; i++)
{

cout<<"ingrese su nombre"<<endl;
cin>>nombre[i];

cout<<"ingrese su dni"<<endl;
cin>>dni[i];

cout<<"ingrese su sexo 0=hombre / mujer=1 "<<endl;
cin>>sexo[i];

cout<<"Que tipo de cliente es 0= afiliados / 1= comprador / 2= vendedor "<<endl;
cin>>tipoc[i];

cout<<"cuanto es el monto que lleva"<<endl;
cin>>monto[i];

cout<<"que producto fue el que compro 1= carne / 2 = vegetales / 3 = pescado "<<endl;
cin>>tipopro[i];

if (tipopro[i] == 1 && monto[i] >= 5000 )
{
    cmonto++;
}
if (sexo[i] == 1 )
{
    cm++;
}
if (monto[i] < menorcompra )
{
    menorcompra=monto[i];

    sexoMenorcompra = sexo[i];
    
}
if (monto[i] > monto[mayordni])
{   
    mayordni = i;

}
if (tipoc[i] == 0 && monto[i] <= 1500)
{
    cafiliado++;
}

porcenmujeres = (cm * 100) / clientes[i] ;

porcenHomAfiliados = (cafiliado * 100) / 10; 



    
}
cout<<"La cantidad de clientes que compraron mas de $5000 en carne son: "<<cmonto<<endl;
cout<<"El porcentaje de clientes mujeres  son: "<<porcenmujeres<<endl;
cout<<"El sexo del cliente que meno compro es: " <<endl;
if (sexoMenorcompra == 0)
{
    cout<<"Hombre"<<endl;
}
if (sexoMenorcompra == 1)
{
    cout<<"Mujer"<<endl;
}
cout<<"El Dni del cliente que hizo la mayor compra es: "<<dni[mayordni]<<endl;

cout<<"El porcentaje de afiliados con una compra menor a 1500 es: "<<porcenHomAfiliados<<endl;


}