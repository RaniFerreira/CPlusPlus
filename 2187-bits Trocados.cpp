/******************************************************************************

As Ilhas Weblands formam um reino independente nos mares do Pacífico. Como é um reino recente,
a sociedade é muito influenciada pela informática. A moeda oficial é o Bit; existem notas de B$ 50,00, B$10,00,
B$5,00 e B$1,00. Você foi contratado(a) para ajudar na programação dos caixas automáticos de um grande banco das Ilhas Weblands.

Os caixas eletrônicos das Ilhas Weblands operam com todos os tipos de notas disponíveis, 
mantendo um estoque de cédulas para cada valor (B$ 50,00, B$10,00, B$5,00 e B$1,00). 
Os clientes do banco utilizam os caixas eletrônicos para efetuar retiradas de um certo número inteiro de Bits. 

Sua tarefa é escrever um programa que, dado o valor de Bits desejado pelo cliente, 
determine o número de cada uma das notas necessário para totalizar esse valor, de modo a minimizar 
a quantidade de cédulas entregues. Por exemplo, se o cliente deseja retirar B$50,00, basta entregar uma única nota de 
cinquenta Bits. Se o cliente deseja retirar B$72,00, é necessário entregar uma nota de B$50,00, duas de B$10,00 e duas de B$1,00.

Entrada
A entrada é composta de vários conjuntos de teste. Cada conjunto de teste é composto por uma única linha, 
que contém um número inteiro positivo V (0 ≤ V ≤ 10000), que indica o valor solicitado pelo cliente.
O final da entrada é indicado por V = 0.

Saída
Para cada conjunto de teste da entrada seu programa deve produzir três linhas na saída.
A primeira linha deve conter um identificador do conjunto de teste, no formato “Teste n”, onde 
n é numerado a partir de 1. Na segunda linha devem aparecer quatro inteiros I, J, K e L que representam o resultado 
encontrado pelo seu programa: I indica o número de cédulas de B$50,00, J indica o número de cédulas de B$10,00, K 
indica o número de cédulas de B$5,00 e L indica o número de cédulas de B$1,00. A terceira linha deve ser deixada em branco. 
A grafia mostrada no Exemplo de Saída, abaixo, deve ser seguida rigorosamente.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
   int V, nota50, nota10, nota5, nota1, cont = 1,aux;
   
   do{
      
      cin >> V;
      
      if(V > 0){
        
        nota50 = V / 50;
        aux = V % 50;
        
        nota10 = aux / 10;
        aux = aux % 10;
        
        nota5 = aux /5;
        aux = aux % 5;
        
        nota1 = aux;
        
        cout << "Teste " << cont << endl;
        cout << nota50 << " " << nota10 << " " << nota5 << " " << nota1 << endl;
        cout << endl;
      }
      cont ++;
       
   }while(V != 0);
   
  
    

    return 0;
}