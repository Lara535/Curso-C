#include <stdio.h>
// questão 14 : media de salarios

int main(){
    int quantFunc, i, salario, totalSAL = 0, mediaSAL, maiorSal = 10000, menorSal = 0;
    
    printf("Quantidade de funcionarios: ");
    scanf("%d", &quantFunc);
    
    for(i = 1; i <= quantFunc; i++){
        printf("Qual salario de cada um: ", i);// colocar i dentro do printf para direcionar o valor de cada func.
        scanf("%d", &salario); 

        totalSAL += salario;
        if(menorSal > salario)
            menorSal = salario;
        
        if(maiorSal > salario)
            maiorSal = salario;
    }
    
    mediaSAL = totalSAL/ quantFunc;
    
    printf("Media Salarial: R$ %d,00\n Maior Salario: R$ %d,00\n Menor Salario: R$ %d,00\n", mediaSAL, maiorSal, menorSal);

    return 0;
}