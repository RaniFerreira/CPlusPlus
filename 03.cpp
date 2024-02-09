/******************************************************************************

3) Crie um programa que leia o nome e o salário de um funcionário, mostrando no
final uma mensagem.
Ex:
Nome do Funcionário: Maria do Carmo
Salário: 1850,45
O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    string nomeFuncionario;
    double salario;
    
    cout << "Nome: "<<endl;
    getline(cin, nomeFuncionario);//getline permite receber texto contendo espaços em branco.
    
    cout <<"Salario:"<<endl;
    cin>>salario;
    
    cout<<"Nome do Funcionario: "<< nomeFuncionario<<endl<<"Salário: "<<salario<<endl;
    

    return 0;
}