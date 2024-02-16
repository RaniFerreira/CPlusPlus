/******************************************************************************

20)Desenvolva um programa que leia um número inteiro e mostre se ele é PAR ou
ÍMPAR.


*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
   int numero;
   
   
   cout<<"Digite um número inteiro: "<<endl;
   cin>>numero;
   
   if(numero%2==0){
        cout<<"O numero o PAR"<<endl;
   }
   else{
        cout<<"O numero o ÍMPAR"<<endl;
   }
   
   
  

    return 0;
}