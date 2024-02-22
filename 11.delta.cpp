/******************************************************************************

11) Desenvolva uma lógica que leia os valores de A, B e C de uma equação do
segundo grau e mostre o valor de Delta.

*******************************************************************************/
#include <iostream>

using namespace std;
int main()
{
    float A,B,C,delta;
    
   cin>>A;
   cin>>B;
   cin>>C;
   
   delta = (B * B) - 4* A* C;
   
   cout<<"Valor em delta: "<<delta;

    return 0;
}
