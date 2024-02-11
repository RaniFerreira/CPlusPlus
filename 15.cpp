/******************************************************************************

15) Crie um programa que leia o número de dias trabalhados em um mês e mostre o 
salário de um funcionário, sabendo que ele trabalha 8 horas por dia e ganha R$25 
por hora trabalhada.
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
  double diasTrabalhados,precoHoras,total;
  
  cout<<"Digite a quantidade de dias que trabalhou neste mês: "<<endl;
  cin>>diasTrabalhados;
  
  precoHoras = 8 * 25;
  
  total = precoHoras * diasTrabalhados;
  
  cout<<"O funcionário irá receber: R$"<<total<<",00 reais";
  

    return 0;
}