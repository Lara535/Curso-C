#include <stdio.h>
// questão 2
int main(){
    int i, vet1[25], vet2[25], vet3[25];

    for(i = 0; i < 25; i++){
        printf("Insira %d valor: ", i);
        scanf("%d", &vet1[i]);
    }
    
    for(i = 0; i < 25; i++){ // faz 2 FOR e usa o "i" de novo pra assim efetuar as contas certinhas 
        printf("Insira %d valor: ", i);
        scanf("%d", &vet2[i]);
    }

    for(i = 0; i < 25; i++)
    vet3[i] = vet1[i] + vet2[i];

    printf("\nVetor 1: ");
    for(i = 0; i < 25; i++)
        printf("%2d ", vet1[i]);
    
    printf("\nVetor 2: ");
    for(i = 0; i < 25; i++)
        printf("%2d ", vet2[i]);
    
    printf("\nVetor 3: ");
    for(i = 0; i < 25; i++)
        printf("%2d ", vet3[i]);
 
    return 0;
}