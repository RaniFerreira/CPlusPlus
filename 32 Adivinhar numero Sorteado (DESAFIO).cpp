/******************************************************************************

32) [DESAFIO] Crie um jogo onde o computador vai sortear um número entre 1 e 5 o
jogador vai tentar descobrir qual foi o valor sorteado.
*******************************************************************************/
#include <iostream>
#include <random>
using namespace std;
int main()

{
    int numero;
   
    std::random_device rd;
    
    std::mt19937 gen(rd());
    
    std::uniform_int_distribution<int> dis(1, 5);

    int numeroSorteado = dis(gen);
    
    cout << "Entre 1 e 5, adivinhe qual o numero que o computador irá sortear" << endl;
    cin >> numero;
    
    if(numero == numeroSorteado){
        cout << "Voce Acertou! O numero sorteado foi " << numeroSorteado << endl;
    }
    else{
        cout << "Voce errou!, Tente novamente" << endl;
    }

    return 0;
}