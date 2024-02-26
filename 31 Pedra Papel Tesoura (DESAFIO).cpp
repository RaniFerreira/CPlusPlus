/******************************************************************************
31) [DESAFIO] Crie um jogo de JoKenPo (Pedra-Papel-Tesoura)

*******************************************************************************/
#include <iostream>
#include <random>

using namespace std;

int main() {
   
   int jogada;
   
   cout << "vamos jogar" << endl << endl;
   cout << "1-Pedra" << endl;
   cout << "2-Papel" << endl;
   cout << "3-Tesoura" << endl << endl;
   cout << "Insira a sua jogada: " << endl;
   cin >> jogada ;
   
   
   
    // Seed para o gerador de números aleatórios
    std::random_device rd;
    
    // Gerador de números aleatórios
    std::mt19937 gen(rd());
    
    // Definindo o intervalo do sorteio (de 1 a 100, por exemplo)
    std::uniform_int_distribution<int> dis(1, 3);
    
    // Sorteando um número
    int numeroSorteado = dis(gen);
    
    printf("JOGADA DA MAQUINA = %d \n",numeroSorteado);
    
    
    if((jogada == 1) and (numeroSorteado == 1)){
        printf("Os dois jogadores escolheram Pedra \n");
        printf("EMPATE");
    }
    else if((jogada == 2) and (numeroSorteado == 2)){
        printf("Os dois jogadores escolheram Papel \n");
        printf("EMPATE");
    }
    else if((jogada == 3) and (numeroSorteado == 3)){
        printf("Os dois jogadores escolheram Tesoura \n");
        printf("EMPATE");
    }
    else if((jogada == 1) and (numeroSorteado == 2)){
        printf("Você escolheu Pedra, a maquina escolheu Papel \n");
        printf("A MAQUINA GANHOU");
    }
    else if((jogada == 2) and (numeroSorteado == 1)){
        printf("Você escolheu papel, A maquina escolheu Pedra \n");
        printf("VOCE GANHOU");
    }
    else if((jogada == 1) and (numeroSorteado == 3)){
        printf("Você escolheu Pedra, A maquina escolher Tesoura \n");
        printf("VOCE GANHOU");
    }
    else if((jogada == 3) and (numeroSorteado == 1)){
        printf("Você escolheu Tesoura, A maquina escolher Pedra \n");
        printf("A MAQUINA GANHOU");
    }
     else if((jogada == 2) and (numeroSorteado == 3)){
        printf("Você escolheu Papel, A maquina escolher Tesoura \n");
        printf("A MAQUINA GANHOU");
    }
    else if((jogada == 3) and (numeroSorteado == 2)){
        printf("Você escolheu Tesoura, A maquina escolher Papel \n");
        printf("VOCE GANHOU");
    }
    else{
         printf("JOGADA INVALIDA");
    }
    
    return 0;
}


