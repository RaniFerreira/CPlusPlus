/******************************************************************************
Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares,
quantos valores digitados foram ímpares, quantos valores digitados foram positivos 
e quantos valores digitados foram negativos.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final de linha após cada uma.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int valores[5];
    
    int negativo = 0, positivo = 0, impares = 0, pares = 0;
    
    
    for(int i=0; i<5;i++){
        
        cin >> valores[i];
        
        if(valores[i] > 0){
            positivo++;
        }
        else if(valores[i] < 0){
            negativo++;
        }
        
         if(valores[i] % 2 == 0){
            pares++;
        }
        else{
            impares++;
        }
    }
    
    cout << pares<<" valor(es) par(es)" << endl;
    cout << impares<<" valor(es) impar(es)" << endl;
    cout << positivo<<" valor(es) positivo(s)" << endl;
    cout << negativo<<" valor(es) negativo(s)" << endl;


    return 0;
}