#include <stdio.h>
// questão 12:

int main(){
    double MI, MA, altura, altVelhos = 0;
    int i, idade;
    int idBaixo = 0, quantBaixo = 0, quantVelhos = 0;

    for(i = 1; i <= 45; i++){
        printf("Sua idade e altura: ");
        scanf("%d %lf", &idade, &altura);

        if(altura < 1.7){
            idBaixo += idade;
            quantBaixo ++;
        }

        if(idade > 20){
            altVelhos += altura;
            quantVelhos ++;
        }
    }

    MI = idBaixo / quantBaixo;
    MA = altVelhos / quantVelhos;

        printf("Media de Idade: %.2lf\n Media de Altura: %.2lf\n", MI, MA);

    return 0;
}