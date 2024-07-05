/******************************************************************************

Neste problemas iremos lidar com sequências de caracteres, muitas vezes chamadas de strings. Uma sequência é não-trivial se ela possui ao menos dois elementos.

Dada uma sequência s, dizemos que um trecho si, ... ,sj é monótono se todos seus caracteres são iguais, e dizemos que ela é maximal se este trecho não pode ser estendido à esquerda e nem à direita sem perder a monotonicidade.

Dada uma sequência composta apenas por caracteres “a” e “b”, determine quantos caracteres “a”
ocorrem em trechos monótonos maximais não-triviais.

Entrada
A entrada é composta por duas linhas. A primeira linha contém um único inteiro N, satisfazendo 1≤  N ≤105. A segunda linha contém uma string, com exatamente N caracteres, composta apenas pelos caracteres “a” e “b”.

Saída
A saída é composta por uma única linha contendo um inteiro correspondente à quantidade total de vezes que o caractere “a” ocorre em trechos monótonos maximais não-triviais.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
   int n,a = 0, cont =0;
   
   cin >> n;
   
   char letra[n];
   
   for(int i=0;i<n;i++){
       cin >> letra[i];
       
   }
   
   for(int i=0;i<n;i++){
       
        if(letra[i] == 'a'){
            
            a++;
        }else{
            if(a > 1){
                cont = cont + a;
            }
            a = 0;
        }
        
   }
   
   if(a > 1){
       cont +=a;
   }
   
   cout << cont << endl;

    return 0;
}