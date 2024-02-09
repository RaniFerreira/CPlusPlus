/******************************************************************************

12) Crie um programa que leia o preço de um produto, calcule e mostre o seu 
PREÇO PROMOCIONAL, com 5% de desconto.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    float preco,promocao,calculo;
    
   cout<<"Digite o preço do produto"<<endl;
   cin>>preco;
   
   calculo = preco*5/100;
   promocao = preco - calculo;
   
   cout<<"Preço Promocional: "<<promocao<<endl;

    return 0;
}