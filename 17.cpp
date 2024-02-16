/******************************************************************************

17) Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse 
80Km/h, exiba uma mensagem dizendo que o usuário foi multado. Nesse caso, exiba 
o valor da multa, cobrando R$5 por cada Km acima da velocidade permitida.
*******************************************************************************/
#include <iostream>

using namespace std;
int main()
{
    int velocidade;
    
   cout <<"Qual a velocidade do carro ? "<<endl;
   cin>>velocidade;
   
   if(velocidade>80){
        cout<<"Você esta acima da velocidade permitida,"<<endl<<"voce ira pagar R$ "<<(velocidade - 80) * 5<<",00"<<endl;  
   }

    return 0;
}