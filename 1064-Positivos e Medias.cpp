/******************************************************************************

Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos.
Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

Entrada
A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante.

Pelo menos um destes números será positivo.

Saída
O primeiro valor de saída é a quantidade de valores positivos. 
A próxima linha deve mostrar a média dos valores positivos digitados.

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int cont = 0;
    double valor, soma = 0;
    
    for(int i=0;i<6;i++){
        
        cin >> valor;
        
        if(valor >= 0){
            soma = soma + valor;
            cont++;
        }
    }
    
    double media = soma / cont;
    
    cout << cont << " valores positivos" << endl;
    cout << fixed << setprecision(1) << media << endl;
    

    return 0;
}