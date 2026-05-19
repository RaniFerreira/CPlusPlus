/*Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.*/

#include <iostream>

using namespace std;

int main(){

    int n;
    int hora,resto,min,seg;

    cin >> n;

    hora = n / 3600; //calculando as horas
    resto = n % 3600; // tirando o resto das horas para ir para os minutos
    min = resto / 60; // do resto calcula os minutos
    seg = resto % 60; // tirando o resto dos minutos para ir para os segundos

    cout << hora << ":" << min << ":" << seg << endl;

    return 0;
}