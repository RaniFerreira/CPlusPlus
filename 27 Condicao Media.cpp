/******************************************************************************

27) Crie um programa que leia duas notas de um aluno e calcule a sua média, 
mostrando uma mensagem no final, de acordo com a média atingida:
 - Média até 4.9: REPROVADO
 - Média entre 5.0 e 6.9: RECUPERAÇÃO
 - Média 7.0 ou superior: APROVADO

*******************************************************************************/
#include <iostream>


int main()
{
    double nota1,nota2,media;
    
    printf("Digite as duas notas: \n");
    scanf("%lf %lf",&nota1,&nota2);
    
    media = (nota1 + nota2) / 2;
    
    if(media < 5 ){
        printf("REPROVADO");
    }
    else if((media >= 5) and (media < 7 )){
         printf("RECUPERAÇÃO");
    } 
    else{
         printf("APROVADO");
    }
    return 0;
}