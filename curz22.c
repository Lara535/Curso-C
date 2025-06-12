#include <stdio.h>
// questão 22
int main(){
   float chico = 1.5, ze = 1.1;
   int ano = 0;
   
    while(chico >= ze){
        chico = chico + 0.02; // vai ficar somando
        ze = ze + 0.03;
        ano++; // vai ficar CONTANDO quantas vezes foram somadas os 2 ATÉ parar na regra dentro do while
    }

    printf("Sera nescessario %d anos\n", ano);

    return 0;
}
