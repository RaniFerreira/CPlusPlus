/******************************************************************************

5) Faça um programa que leia as duas notas de um aluno em uma matéria e mostre
na tela a sua média na disciplina.
Ex:
Nota 1: 4.5
Nota 2: 8.5
A média entre 4.5 e 8.5 é igual a 6.5

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    float nota1,nota2;
    
    cout<<"Digite as duas notas"<<endl;
    cin>>nota1;
    cin>>nota2;
    
    cout<< "A media entre "<< nota1 << " e " << nota2 <<" é igual a "<< (nota1 + nota2) /2 << endl;
    

    return 0;
}