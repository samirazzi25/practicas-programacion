#include<iostream>
using namespace std;

int main (){

int sexo[10], i, edad[10], ch=0,cm=0;
int maximo=0, minimo=999, posMax,posmin;
string nombre[3];



for  (i = 0; i < 3  ; i++)
{
cout<<"Ingrese su sexo 0=hombre / 1=mujer "<<endl;
cin>>sexo[i];

cout<<"ingrese el nombre de la persona"<<i+1<<endl;
cin>>nombre[i];

cout<<"ingrese la edad de la persona"<< i+1<<endl;
cin>>edad[i];

if (sexo[i]==0)
{
    ch++;
}else
{
    cm++;
}
if (edad[i]>maximo)
{
    maximo=edad[i];
    posMax=i;
}
if (edad[i]<minimo)
{
    minimo=edad[i];
    posmin = i;
}


}

cout<<"La cantidad de hombres son: "<<ch<<endl;
cout<<"La cantidad de mujeres son: "<<cm<<endl;
cout<<"El nombre de la persona con mayor edad es: "<<nombre[posMax]<<endl;
cout<<"El nombre de la persona con menor edad es: "<<nombre[posmin]<<endl;





}