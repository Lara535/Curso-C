#include <stdio.h>
// questão 13: 

int main(){
    int valor, i, divisores = 0, Ndivisores = 0;

    do{
        printf("Digite um numero inteiro maior que 2: ");
        scanf("%d", &valor);
    }while(valor <= 2);

        for(i = 1; i <= valor; i++){
            if(valor % i == 0)// NÃO PRIMOS
            divisores ++;

            else if(valor % 1 == 0 && valor % valor == 0 && valor % i != 0)// PRIMOS
            Ndivisores ++;
        }

        if(divisores > 2)
           printf("%d nao e primo\n", valor);

             else if(Ndivisores == 1 && Ndivisores == valor)// so com o else resolve !!
                printf("%d e primo\n", valor);

    return 0;
}