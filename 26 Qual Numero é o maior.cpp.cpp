/******************************************************************************
26) Escreva um algoritmo que leia dois números inteiros e compare-os, mostrando
na tela uma das mensagens abaixo:
 - O primeiro valor é o maior
 - O segundo valor é o maior
 - Não existe valor maior, os dois são iguais

*******************************************************************************/

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int num1,num2;
   
   
    cout <<"Digite o primeiro valor: "<< endl;
    cin >> num1;
    
    cout <<"Digite o segundo valor: "<< endl;
    cin >> num2;
    
    if(num1 > num2){
        cout << "O primeiro valor é o maior" << endl;
    }
    else if(num2 > num1){
        cout <<"O segundo valor é o maior" << endl;
        
    }
    else{
        cout <<"Não existe valor maior, os dois são iguais" << endl;
    }
    
    return 0;
}
