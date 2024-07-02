#include <iostream>
using namespace std;

int main () {

 string name;
 int i, ch, cm, sexo, carolina;

 ch=0;
 cm=0;
 i=0;

 do
 {
    cout<<"ingrese el nombre: "<<endl;
    cin>>name;
    cout<<"ingrese el sexo 1=hombre/2=mujer"<<endl;
    cin>>sexo;
    if (sexo==1)
    {
        ch++;
    }else
    {
        cm++;
        if (name=="carolina")
        {
            carolina++;
        }
        
    }

    
    
    cout<<"¿desea continuar 1=si/2=no ";
    cin>>i;
    
 } while (i==1);
 
cout << "Total de hombres: " << ch << endl;
cout << "Total de mujeres: " << cm << endl;
cout << "Totale de carolina: "<< carolina<<endl;







}