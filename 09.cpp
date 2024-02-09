/******************************************************************************

9) Faça um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$)
e mostre quantos dólares ela pode comprar. Considere US$1,00 = R$3,45.
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    double reais;
    
    cout<<"Digite quantos resias voce tem na carteira: "<<endl;
    cin>>reais;
    
    cout<<"Voce poderá comprar "<< reais / 3.45 << " Dolar"<<endl;
    
    
    
 
    return 0;
}

