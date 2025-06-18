#include <stdio.h>
// questão 3
int main(){
    int i, vet[20], copia, fim = 19;

    for(i = 0; i < 20; i++){
        printf("Insira %d valor: ", i);
        scanf("%d", &vet[i]);
    }

    printf("\nVetor original: ");
    for(i = 0; i < 20; i++)
        printf("%2d", vet[i]);

    for(i = 0; i < 10; i++){
        copia = vet[i]; // copiar o valor q está em 1
        vet[i] = vet[fim]; // o valor 1 será o ultimo, ou seja, 19
        vet[fim] = copia; // o 19 ficará com a copia do 1
        fim--; // todo esse processo vai se repetir DIMINUINDO, como o pedido da questão
    }

    printf("\nVetor trocado: ");
    for(i = 0; i < 20; i++)
        printf("%2d", vet[i]);
    
    return 0;
}