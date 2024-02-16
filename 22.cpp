/******************************************************************************

22) Escreva um programa que leia o ano de nascimento de um rapaz e mostre a sua
situação em relação ao alistamento militar.
 - Se estiver antes dos 18 anos, mostre em quantos anos faltam para o
alistamento.
 - Se já tiver depois dos 18 anos, mostre quantos anos já se passaram do
alistamento.

*******************************************************************************/
#include <iostream>


using namespace std;
int main()
{
   int anoNascimento,idade;
   
   cout<<"Digite o ano de nascimento: "<<endl;
   cin>>anoNascimento;
   
   idade = 2024 - anoNascimento;
   
   if(idade>18){
       cout<<"Já se passaram "<<idade-18<<" ano(s) do alistamento"<<endl;
   }
   else if(idade<18){
       cout<<"Faltam "<<18-idade<<" ano(s) do alistamento"<<endl;
   }
   else{
        cout<<"Você tem  "<<idade<<" anos, Pode se alistar agora!"<<endl;
   }

    return 0;
}