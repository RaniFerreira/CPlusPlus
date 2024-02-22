/******************************************************************************

2) Faça um programa que leia o nome de uma pessoa e mostre uma
mensagem de boasvindas para ela:
Ex:
Qual é o seu nome? João da Silva
Olá João da Silva, é um prazer te conhecer!

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    string nome;
    
    cout<<"Qual é o seu nome?"<<endl;
    cin>>nome;
    
    cout<<"Olá "<<nome<<" é um prazer te conhecer!"<<endl;
    

    return 0;
}
