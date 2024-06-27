/******************************************************************************
Substituição no Vetor
Faça um programa para ler 10 valores inteiros e armazenar em um vetor. 
Imprima o valor do menor elemento lido. Depois imprima uma linha contendo todos os índices que o menor valor aparece no vetor. Depois substitua todas as ocorrências do menor valor no vetor por -1 e imprima o vetor resultante.

Entrada
A entrada consiste de dez linhas. Cada linha contém um inteiro.

Saída
A saída consiste de 3 linhas. A primeira linha contém a mensagem "Menor: 
�
Y", sendo 
�
Y o valor do menor elemento do vetor. A seguda linha contém a mensagem "Ocorrencias: 
" seguida dos índices que o menor valor aparece no vetor. A terceira linha contém o vetor após 
serem realizadas as substituições.

Restrições
Todos os valores fornecidos serão não negativos menores que 100.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int vet[10];
    
    for(int i=0;i<10;i++){
        
        cin >> vet[i];
    }
    
    
    int menor = 9999;
    
    for(int i=0;i<10;i++){
        
        if(vet[i] < menor){
            
            menor = vet[i];
            
        }
    }
    
    cout << "Menor: " << menor << endl;
    cout << "Ocorrencias: ";
    
    for(int i=0;i<10;i++){
        
        if(vet[i] == menor){
            cout << i << " ";
        }
    }
     cout << endl;
    for(int i=0;i<10;i++){
        
        if(vet[i] == menor){
            vet[i] = -1;
        }
       
        cout << vet[i] << " ";
    }
   
    
    

    return 0;
}