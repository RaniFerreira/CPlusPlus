/******************************************************************************
Timelimit: 1
Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º. Mostre o vetor modificado.

Entrada
A entrada contém 20 valores inteiros, positivos ou negativos.

Saída
Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor armazenado naquela posição.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
   int vet[20];
   
   for(int i=0;i<20;i++){
       
       cin >> vet[i];
       
   }
   
    int vet2[20];
     
    for(int i=0;i<1;i++){
       
       vet2[0] = vet[19];
       vet2[1] = vet[18];
       vet2[2] = vet[17];
       vet2[3] = vet[16];
       vet2[4] = vet[15];
       vet2[5] = vet[14];
       vet2[6] = vet[13];
       vet2[7] = vet[12];
       vet2[8] = vet[11];
       vet2[9] = vet[10];
       vet2[10] = vet[9];
       vet2[11] = vet[8];
       vet2[12] = vet[7];
       vet2[13] = vet[6];
       vet2[14] = vet[5];
       vet2[15] = vet[4];
       vet2[16] = vet[3];
       vet2[17] = vet[2];
       vet2[18] = vet[1];
       vet2[19] = vet[0];
 
   }
   for(int i=0;i<20;i++){
       
       cout << "N[" <<i<<"] = "<< vet2[i] << endl;;
       
   }
   
    return 0;
}