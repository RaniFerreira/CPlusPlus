/******************************************************************************

25) [DESAFIO] Crie um programa que leia o tamanho de três segmentos de reta.
Analise seus comprimentos e diga se é possível formar um triângulo com essas
retas. Matematicamente, para três segmentos formarem um triângulo, o comprimento
de cada lado deve ser menor que a soma dos outros dois.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
   float A,B,C;
   
   cout<<"Vamos ver se pode forma um triangulo: "<<endl<<endl;
   
   std::cout << "Digite o segmento da reta A" << std::endl;
   std::cin >> A;
   
   std::cout << "Digite o segmento da reta B" << std::endl;
   std::cin >> B;
   
   std::cout << "Digite o segmento da reta C" << std::endl;
   std::cin >> C;
   
   if(A+B>C and A+C>B and B+C>A){
       
       cout<<"Pode formar um triangulo"<<endl;
   }
   else{
       
        cout<<"Não pode formar um triangulo"<<endl;
   }
    
    
    return 0;
}