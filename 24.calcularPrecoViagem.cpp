/******************************************************************************

24) Faça um algoritmo que pergunte a distância que um passageiro deseja
percorrer em Km. Calcule o preço da passagem, cobrando R$0.50 por Km para
viagens até 200Km e R$0.45 para viagens mais longas.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    double quilometros,preco;
    
    std::cout << "Digite quanto Km deseja viajar: " << std::endl;
    std::cin >> quilometros;
    
    if(quilometros<=200){
       
       preco = quilometros * 0.50;
       cout<<"O preço da viagem é: R$ "<<preco<<" reais"<<endl;
    }
    else{
        
       preco = quilometros * 0.45;
       cout<<"O preço da viagem é: R$ "<<preco<<" reais"<<endl;
    }
    
    
    return 0;
}
