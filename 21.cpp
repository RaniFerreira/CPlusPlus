/******************************************************************************

21) Faça um algoritmo que leia um determinado ano e mostre se ele é ou não
BISSEXTO.

*******************************************************************************/
#include <iostream>


using namespace std;
int main()
{
   int ano;
   
   
   cout<<"Digite o ano: "<<endl;
   cin>>ano;
   
   if(ano%4==0 or (ano % 100 != 0 and ano % 400 == 0)){
       cout<<"o ano é BISSEXTO"<<endl;
   }
   else{
       cout<<"o ano não é BISSEXTO"<<endl; 
   }
   
  

    return 0;
}