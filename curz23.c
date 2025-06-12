#include <stdio.h>
// questão 23
int main(){
   int i, j;

   for(j = 1; j <= 8; j++){
         for(i = 1; i <= j; i++)
             printf("*", i);
        printf("\n");
   }
/*                     

*
**
***
****
*****
******
*******
********

*/ 

    return 0;
}