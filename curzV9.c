#include <stdio.h>
// questão 9
int main(){
    int i, j, mat[5][7], soma, linhas[5], colunas[7];

    for(i = 1; i <= 5; i++){
        for(j = 1; j <= 7; j++){
            printf("Valores %d %d: ", i, j);
            scanf("%d ", &mat[i][j]);
        }
    }

    for(i = 1; i <= 5; i++){
        soma = 0; // inicialização da soma
        for(j = 1; j <= 7; j++){
            soma += mat[i][j];
        }
        linhas[i] = soma;
    }

    for(j = 1; j <= 7; j++){
        soma = 0;
        for(i = 1; i <= 5; i++){
            soma += mat[i][j];
        }
        colunas[j] = soma;
    }
    
    printf("\nSoma das LINHAS:\n");
    for(i = 1; i <= 5; i++){
        printf("Linha %d: %d\n", i, linhas[i]);
    }

    printf("\nSoma das COLUNAS:\n");
    for(j = 1; j <= 7; j++){
        printf("Coluna %d: %d\n", j, colunas[j]);
    }

    return 0;
}