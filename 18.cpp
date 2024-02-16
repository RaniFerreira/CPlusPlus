/******************************************************************************

18) Faça um programa que leia o ano de nascimento de uma pessoa, calcule a idade 
dela e depois mostre se ela pode ou não votar.
*******************************************************************************/
#include <iostream>

using namespace std;
int main()
{
    int anoNascimento,idade;
    
   cout <<"Em que ano você nasceu ? "<<endl;
   cin>>anoNascimento;
   
   idade = 2024 - anoNascimento;
   
   if(idade<18){
        cout<<"Você é de menor e não poderá votar";  
   }
   else{
       cout<<"você tem "<<idade<<" anos ,Ta liberado você poderá votar"; 
   }

    return 0;
}