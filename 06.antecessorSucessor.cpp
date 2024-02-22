/******************************************************************************

6) Faça um programa que leia um número inteiro e mostre o seu antecessor e seu
sucessor.
Ex:
Digite um número: 9
O antecessor de 9 é 8
O sucessor de 9 é 10
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int numero;
    
    cout<<"Digite um numero: "<<endl;
    cin>>numero;
    
    
    cout<<" O Antecessor de "<<numero <<" é "<< numero - 1<<endl;
    cout<<" O Sucessor de "<<numero<<" é "<<numero + 1;
    

    return 0;
}
