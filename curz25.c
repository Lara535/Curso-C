#include <stdio.h>
// questão 25
int main(){
   int x, y, j;

   printf("Informe os valores de X e Y: ");
   scanf("%d %d", &x, &y);
   
    for(j = 1; j <= y; j++){
        printf("%d ", j);
        if(j % x == 0) // tente ser mais criativa! nem tudo precisa ser usado o for
            printf("\n");
    }
    
    return 0;
}