/******************************************************************************
29) Desenvolva um programa que leia o nome de um funcionário, seu salário, 
quantos anos ele trabalha na empresa e mostre seu novo salário, reajustado de 
acordo com a tabela a seguir:
 - Até 3 anos de empresa: aumento de 3%
 - entre 3 e 10 anos: aumento de 12.5%
 - 10 anos ou mais: aumento de 20%
*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char nomefuncionario[50];
    int anosEmpresa;
    double salario,novoSalario;
    
    
    printf("Insira o nome do funcionário: ");
    fgets(nomefuncionario,sizeof(nomefuncionario),stdin);
    
    
    printf("Insira há quantos anos esta na empresa: ");
    scanf("%d",&anosEmpresa);
    
    printf("Insira o salário");
    scanf("%lf",&salario);
    
    if(anosEmpresa<=3){
        
        novoSalario =((salario * 3) / 100) + salario;
        printf("%s\n",nomefuncionario);
        printf("Novo Salário = %.2lf\n ",novoSalario);
    }
    else if((anosEmpresa > 3) && (anosEmpresa < 10)){
       
        novoSalario =((salario * 12.5) / 100) + salario;
        printf("%s\n",nomefuncionario);
        printf("Novo Salário = %.2lf\n ",novoSalario);
    }
    else{
        
        novoSalario =((salario * 20) / 100) + salario;
        printf("%s\n",nomefuncionario);
        printf("Novo Salário = %.2lf\n ",novoSalario);
    }

    return 0;
}
