/******************************************************************************

23) Numa promoção exclusiva para o Dia da Mulher, uma loja quer dar descontos
para todos, mas especialmente para mulheres. Faça um programa que leia nome,
sexo e o valor das compras do cliente e calcule o preço com desconto. Sabendo
que:
 - Homens ganham 5% de desconto
 - Mulheres ganham 13% de desconto
*******************************************************************************/
#include <iostream>


using namespace std;
int main()
{
   char sexo;
   string nome;
   double preco,desconto;
   
   cout<<"Digite o nome: "<<endl;
   cin>>nome;
   
   cout<<"Digite o sexo com (F ou M)"<<endl;
   cin>>sexo;
   
   cout<<"Digite o valor das compras: "<<endl;
   cin>>preco;
   
   if(sexo == 'F'){
       desconto = preco*0.13;
       cout<<"Valor bruto = "<<preco<<endl<<"Valor com desconto de 13% = "<<preco - desconto<<" reais"<<endl;
   }
   else{
       desconto = preco*0.05;
       cout<<"Valor bruto = "<<preco<<endl<<"Valor com desconto de 5% = "<<preco - desconto<<" reais"<<endl;
   }
   
   

    return 0;
}