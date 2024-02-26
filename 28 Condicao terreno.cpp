/******************************************************************************

28) Faça um programa que leia a largura e o comprimento de um terreno 
retangular, calculando e mostrando a sua área em m². O programa também 
devemostrar a classificação desse terreno, de acordo com a lista abaixo:
 - Abaixo de 100m² = TERRENO POPULAR
 - Entre 100m² e 500m² = TERRENO MASTER
 - Acima de 500m² = TERRENO VIP
*******************************************************************************/
#include <iostream>

using namespace std;
int main()
{
    double largura,comprimento,area;
    
    
    printf("Digite a largura: ");
    scanf("%lf", &largura);
    
    printf("Digite o comprimento: ");
    scanf("%lf", &comprimento);
    
    
    area = comprimento * largura;
    
    if(area < 100){
        cout<<"TERRENO POPULAR"<<endl;
    }
    else if((area >= 100) and (area <500)){
        printf("TERRENO MASTER");
        
    }
    else{
         cout<<"TERRENO VIP"<<endl;
    }
    
 
    return 0;
}