/******************************************************************************
Faça um programa que leia um valor N. Este N será o tamanho de um vetor X[N]. 
A seguir, leia cada um dos valores de X, encontre o menor elemento deste vetor 
e a sua posição dentro do vetor, mostrando esta informação.

Entrada
A primeira linha de entrada contem um único inteiro N (1 < N < 1000), 
indicando o número de elementos que deverão ser lidos em seguida para o vetor X[N] de inteiros. 
A segunda linha contém cada um dos N valores, separados por um espaço. 
Vale lembrar que nenhuma entrada haverá números repetidos.

Saída
A primeira linha apresenta a mensagem “Menor valor:” seguida de um espaço e 
do menor valor lido na entrada. A segunda linha apresenta a mensagem “Posicao:” 
seguido de um espaço e da posição do vetor na qual se encontra o menor valor lido,
lembrando que o vetor inicia na posição zero.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
   int n;
   
   cin >> n;
   
   int numero[n], posicao;
   
   for(int i=0;i<n;i++){
       
       cin >> numero[i];
   }
   
   int menor = 9999;
   
   for(int i=0;i<n;i++){
       
       if(numero[i] < menor){
           
           menor = numero[i];
           posicao = i;
       }
   }
   
   cout << "Menor valor: " << menor << endl;
   cout << "Posição: " << posicao << endl;
   
   
   
    return 0;
}