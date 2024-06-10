/******************************************************************************
Faça um algoritmo para ler um número indeterminado de dados, 
contendo cada um, a idade de um indivíduo. O último dado, que não entrará nos cálculos, 
contém o valor de idade negativa. Calcular e imprimir a idade média deste grupo de indivíduos.

Entrada
A entrada contém um número indeterminado de inteiros. A entrada será encerrada quando um valor negativo for lido.

Saída
A saída contém um valor correspondente à média de idade dos indivíduos.

A média deve ser impressa com dois dígitos após o ponto decimal.

*******************************************************************************/
#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int idades,cont=0;;
    double soma = 0;
    
    
    do{
       cin >> idades;
       if(idades > 0){
          
       soma = soma + idades;
       cont ++; 
       }

    }while(idades >= 0);
    
    double media = soma / cont;
    
    cout << fixed << setprecision(2) << media << endl;

    return 0;
}