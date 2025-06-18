#include <stdio.h>
// questão 1
int main(){
    int vet[10], vet2[10], i;

    for(i = 0; i < 10; i++){
        printf("Escolha o %d valor: ", i);
        scanf("%d", &vet[i]);  
    }

    for(i = 0; i < 10; i++)
        vet2[i] = vet[i] * vet[i];
    
    printf("\nVetor 1: ");
    for(i = 0; i < 10; i++) // sempre colocar o FOR antes do printf para fazer a lista dos valores no final 
        printf("%3d ", vet[i]);

    printf("\nVetor 2: ");
    for(i = 0; i < 10; i++)
        printf("%3d ", vet2[i]);

    return 0;
}