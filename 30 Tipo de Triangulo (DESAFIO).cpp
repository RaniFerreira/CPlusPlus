/******************************************************************************

30) [DESAFIO] Refaça o algoritmo 25, acrescentando o recurso de mostrar que tipo
de triângulo será formado:
 - EQUILÁTERO: todos os lados iguais
 - ISÓSCELES: dois lados iguais
 - ESCALENO: todos os lados diferentes

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
       
       if((A == B) and (A==C) and (B == C)){
           printf("TRIANGULO EQUILATERO");
       }
       else if((A!=B) and (A!=C) and (C!=B) ){
           printf("TRIANGULO ESCALENO");
       }
       else{
           printf("TRIANGULO ISOCELES");
       }
   }
   else{
       
        cout<<"Não pode formar um triangulo"<<endl;
   }
    
    
    return 0;
}