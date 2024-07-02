#include <iostream>
using namespace std;

int main (){

int A[10],i, Suma=0;

for  (i=0;i<10;i++)
{
    A[i]=(i+1)*2;

  Suma = Suma + A[i];

}

for (i = 0; i < 10; i++)
{
    cout<< A[i]<<", ";
}

cout<<"la sumatoria de todos los elementos es: "<<Suma<<endl;

}