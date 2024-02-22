/******************************************************************************

16) [DESAFIO] Escreva um programa para calcular a redução do tempo de vida de um 
fumante. Pergunte a quantidade de cigarros fumados por dias e quantos anos ele 
já fumou. Considere que um fumante perde 10 min de vida a cada cigarro. Calcule 
quantos dias de vida um fumante perderá e exiba o total em dias.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int quantidadeAnosFumando,quantidadeCigarrosFumadoDia,totalCigarros,minutoPerdido,diaPerdido;
    
    cout<<"Digite a quantidade de cigarros fumados por dia: "<<endl;
    cin>>quantidadeCigarrosFumadoDia;
    
    cout<<"Digite quantos anos fumou: "<<endl;
    cin>>quantidadeAnosFumando;
    
    totalCigarros = quantidadeAnosFumando * 365 * quantidadeCigarrosFumadoDia; 
    minutoPerdido = totalCigarros * 10;
    diaPerdido    = minutoPerdido / (24*60); //convertendo minutos em dias
    
    cout<<"Você perdeu aproximadamente "<<diaPerdido<<" dias de vida fumando "<<endl;
    return 0;
}
