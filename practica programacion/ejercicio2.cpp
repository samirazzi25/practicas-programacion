#include <iostream>
using namespace std;
/*Elabore un programa que lea las edades de 2 mujeres que son familiares, e implemente una
función que devuelva el nombre de la madre(la edad mayor).*/
 string obtenermadre (int n1, string nomb1, int n2, string nomb2){

    if (n1>n2)
    {
        return nomb1;
    }else
    {
        return nomb2;
    }
    
    
}
    

int main () {
string nom1,nom2;
int edad1, edad2;
cout<<"ingrese el nombre de la primera mujer"<<endl;
cin>>nom1;
cout<<"ingrese la edad de la primera mujer"<<endl;
cin>>edad1;
cout<<"ingrese el nombre de la segunda mujer"<<endl;
cin>>nom2;
cout<<"ingrese la edad de la segunda mujer"<<endl;
cin>>edad2;

cout<<"La madre es: "<<obtenermadre(edad1,nom1,edad2,nom2);

}