#include <iostream>
using namespace std;

int main() {

int sexo, i, ch, cm;
cm=0;
ch=0;
for ( i=0;i<10;i++)
{
    cout<<"indique su sexo 1=hombre/2=mujer "<<i+1<<endl;
    cin>>sexo;

    if (sexo==cm )
    {
        ch++;

    }else
    {
        cm++;
    }
    
}

cout<<"total de hombres: "<<ch<<endl;
cout<<"total de mujeres: "<<cm<<endl;






}

