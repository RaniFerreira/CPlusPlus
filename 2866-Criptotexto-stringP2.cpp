/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream> // Biblioteca para entrada e saída
#include <cstring>  // Biblioteca para funções de manipulação de strings
#include <cctype>   // Biblioteca para funções de teste de caracteres
using namespace std; // Usa o namespace padrão para evitar prefixar std::

int main()
{
    int n; // Declara uma variável inteira para armazenar o número de mensagens
    cin >> n; // Lê o número de mensagens que serão processadas
    
    char mensagem[95]; // Declara um array de caracteres com tamanho 95 para armazenar cada mensagem
    
    // Loop para processar cada mensagem
    for(int i = 0; i < n; i++){
        cin >> mensagem; // Lê uma mensagem do usuário e armazena no array 'mensagem'
        
        // Loop para percorrer a string 'mensagem' de trás para frente
        for(int j = strlen(mensagem)/*calcula o comprimento da variavel*/ - 1; j >= 0; j--){
            if(islower(mensagem[j])){ // Verifica se o caractere na posição 'j' é uma letra minúscula
                cout << mensagem[j]; // Se for, imprime o caractere minúsculo
            }
        }
        cout << endl; // Imprime uma nova linha após processar uma mensagem
    }
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
