#include <iostream>
using namespace std;

int main () {

//en unas votaciones para presidente estudiantil se necesita llevar los votos de dos candidatos
//postulados, se sabe que son 9 personas las que votan. Entonces el programa debe permitir tomar el
//voto de las 9 personas y al final mostrar el nombre del candidato ganador
 
int i, can1, can2, opc;  

can1=0;
can2=0;
opc=0;
for (i=0; i<9;i++)
{
    cout<< "ingrese su voto 1=cand1/2=cand2 "<<i+1<<endl;
    cin>>opc;

    if (opc==1)
    {
        can1++;
    }else
    {
        can2++;
        
    } 

    
    
    
}

    if (can1>can2)
    {
        cout<<"candidato 1 es el ganador";
    }else
    {
        cout<<"candidato 2 es el ganador";
    }
    






}