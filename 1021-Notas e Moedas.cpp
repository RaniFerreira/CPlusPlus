/******************************************************************************
Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário.
A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. 
As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01.
A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n100, n50, n20, n10, n5, n2;
    int m1, m50, m25, m10, m05, m01;
    int nota, moeda, aux;
    char ponto;
    
    
    cin >> nota >> ponto >> moeda;
    
    n100 = nota / 100;
    aux = nota % 100;
    
    n50 = aux / 50;
    aux = aux % 50;
    
    n20= aux / 20;
    aux = aux % 20;
    
    n10 = aux / 10;
    aux = aux % 10;
    
    n5 = aux / 5;
    aux = aux % 5;
    
    n2= aux / 2;
    aux = aux % 2;
    
    m1 = aux;
    
    
    m50 = moeda / 50;
    aux = moeda% 50;
    
    m25 = aux / 25;
    aux = aux % 25;
    
    m10 = aux / 10;
    aux = aux % 10;
    
    m05 = aux / 5;
    aux = aux % 5;
    
    m01 = aux / 1;
    aux = aux % 1;
    
    
    cout << "NOTAS:" << endl;
    cout << n100 << " nota(s) de R$ 100.00" << endl;
    cout << n50 << " nota(s) de R$ 50.00" << endl;
    cout << n20 << " nota(s) de R$ 20.00" << endl;
    cout << n10 << " nota(s) de R$ 10.00" << endl;
    cout << n5 << " nota(s) de R$ 5.00" << endl;
    cout << n2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << m1 << " moeda(s) de R$ 1.00" << endl;
    cout << m50 << " moeda(s) de R$ 0.50" << endl;
    cout << m25 << " moeda(s) de R$ 0.25" << endl;
    cout << m10 << " moeda(s) de R$ 0.10" << endl;
    cout << m05 << " moeda(s) de R$ 0.5" << endl;
    cout << m01 << " moeda(s) de R$ 0.01" << endl;
    return 0;
}