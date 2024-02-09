/******************************************************************************

4) Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório
entre eles.
Ex:
Digite um valor: 8
Digite outro valor: 5
A soma entre 8 e 5 é igual a 13.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    
    cout<<"Digite dois valores inteiros"<<endl;
    cin>>a;
    cin>>b;
    
    cout<< "A soma entre "<< a << " e " << b <<" é igual a "<< a + b << endl;
    

    return 0;
}