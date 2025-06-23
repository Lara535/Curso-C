#include <stdio.h>
// questão 10
int main(){
    int i, j, A[3][3], B[3][3], C[3][3];

    for(i = 1; i <= 3; i++){
        for(j = 1; j <= 3; j++){
            printf("Valor para A %d %d: ", i, j);
            scanf("%d",&A[i][j]);
        }
    }

    for(i = 1; i <= 3; i++){
        for(j = 1; j <= 3; j++){
            printf("Valor para B %d %d: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 1; i <= 3; i++){ 
        for(j = 1; j <= 3; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\n MATRIZ A: ");
    for(i = 1; i <= 3; i++){
        for(j = 1; j <= 3; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }

    printf("\n MATRIZ B: ");
    for(i = 1; i <= 3; i++){
        for(j = 1; j <= 3; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }

    printf("\n MATRIZ C: ");
    for(i = 1; i <= 3; i++){
        for(j = 1; j <= 3; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}