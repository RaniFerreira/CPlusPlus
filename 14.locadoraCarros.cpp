l/******************************************************************************

14) A locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva 
um programa que pergunte a quantidade de Km percorridos por um carro alugado e a 
quantidade de dias pelos quais ele foi alugado. Calcule o preço total a pagar, 
sabendo que o carro custa R$90 por dia e R$0,20 por Km rodado.
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
  double quilometros,quantidadeDias,total,dias,Km;
  
  cout<<"Digite a quantidade de dias que ficou com o carro: "<<endl;
  cin>>quantidadeDias;
  
  cout<<"digite a quantidade de Km rodados por este carro: "<<endl;
  cin>>quilometros;
  
  dias = quantidadeDias * 90;
  Km = quilometros * 0.20 ;
  
  total = dias + Km;
  
  cout<<"Preço a pagar: R$"<<total<<",00 reais"<<endl;

    return 0;
}
