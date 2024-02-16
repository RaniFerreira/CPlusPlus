/******************************************************************************

19) Crie um algoritmo que leia o nome e as duas notas de um aluno, calcule a sua
média e mostre na tela. No final, analise a média e mostre se o aluno teve ou
não um bom aproveitamento (se ficou acima da média 7.0).


*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
   float nota1, nota2 ,media;
   string nome;
   
   
   cout<<"Digite o nome do aluno: "<<endl;
   cin>>nome;
   
   cout<<"Digite a primeira nota: "<<endl;
   cin>>nota1;
   
   cout<<"Digite a segunda nota: "<<endl;
   cin>>nota2;
   
   media = (nota1+nota2)/2;
   
   if(media>=7){
       cout<<nome<<" teve um bom aproveitamento"<<endl;
    }
    else{
        cout<<nome<<" não teve um bom aproveitamento"<<endl; 
    }
   

    return 0;
}