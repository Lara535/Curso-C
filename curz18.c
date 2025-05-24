#include <stdio.h>
// questão 18
int main(){
    int i, x, idade, salario, mediaSAL, maiorID = 0, menorID = 100, quantM = 0;
    char sexo;

    printf("Quantidade de pessoas: ");
    scanf("%d", &x);

    for(i = 1; i <= x; i++){ // o "for" sempre vai repetir essas perguntas até a quantidade desejada = x
        printf("Idade, sexo e salario: ");
        scanf("%d %c %d", &idade, &sexo, &salario);

        mediaSAL += salario;
/* 
nao precisa pegar o "total" de idades para avaliar qual é o maior e o menor,(menorID = idade), igualar a variavel já basta */
        if(idade < menorID)
            menorID = idade;
        
            if(idade > maiorID)
            maiorID = idade;

        if(sexo == 'F' &&  salario <= 2000)
            quantM++;
    }
          
    printf("\nMedia de salario: %d\n Maior idade e menor idade: %d %d\n Quantidade de mulheres com salario ate R$2000,00: %d\n", mediaSAL, maiorID, menorID, quantM);
    
    return 0;
}