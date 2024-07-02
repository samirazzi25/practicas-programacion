#include <iostream>
using namespace std; 

int main () {

int A[100],G[100], C[100],n, i;

cout<<"ingrese el tamano del vector"<<endl;
cin>>n;

for (i=0;i<n; i++)
{
cout<<"ingrese el primer valor"<<" del primer vector" <<endl;
cin>> A[i];

cout<<"ingrese el segundo valor"<<" del segundo vector" <<endl;
cin>> G[i];

C[i]= A[i] + G[i];
    
}

for (i=0;i<n; i++)
{
    cout<<""<<C[i];
}










}