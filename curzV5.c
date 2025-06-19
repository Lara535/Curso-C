#include <stdio.h>
// questão 5
int main(){
    int i, indice_Maior, indice_Menor; // salvar os indices  do vetor
    float temp_Media[12], maior_temp = 0/* n tem como a MAIOR temp ser 0 */, menor_temp = 99/* n tem como a MENOR temp ser 99*/;

    for(i = 1; i <= 12; i++){
        printf("Temperatura no %d mes: ", i);
        scanf("%f", &temp_Media[i]);
    }

    for(i = 1; i <= 12; i++){
        if(menor_temp > temp_Media[i]){ // impossivel ter uma temperatura maior q 99
            menor_temp = temp_Media[i];
            indice_Menor = i; // salva o valor do indice 
        }

        if(maior_temp < temp_Media[i]){ // impossivel ter uma teperatura menor q 0
            maior_temp = temp_Media[i]; 
            indice_Maior = i; // salva o valor do indice
        }
    }

    printf("\nA menor temeratura foi %.2lf e ocorreu em ", menor_temp);
    
    switch (indice_Menor){
    case 1:
        printf("janeiro");
       
        break;
    
    case 2:
        printf("fevereiro");
       
        break;
    
    case 3:
        printf("marco");
       
        break;
    
    case 4:
        printf("abril");
       
        break;
    
    case 5:
        printf("maio");
       
        break;
    
    case 6:
        printf("junho");
       
        break;
    
    case 7:
        printf("julho");
       
        break;
    
    case 8:
        printf("agosto");
       
        break;
    
    case 9:
        printf("setembro");
       
        break;
    
    case 10:
        printf("outubro");
       
        break;

    case 11:
        printf("novembro");
       
        break;
    
    case 12:
        printf("dezembro");
       
        break;
    }
    
    printf("\nA maior temeratura foi %.2f e ocorreu em ", maior_temp);
    
    switch (indice_Maior){
    case 1:
        printf("janeiro");
       
        break;
    
    case 2:
        printf("fevereiro");
       
        break;
    
    case 3:
        printf("marco");
       
        break;
    
    case 4:
        printf("abril");
       
        break;
    
    case 5:
        printf("maio");
       
        break;
    
    case 6:
        printf("junho");
       
        break;
    
    case 7:
        printf("julho");
       
        break;
    
    case 8:
        printf("agosto");
       
        break;
    
    case 9:
        printf("setembro");
       
        break;
    
    case 10:
        printf("outubro");
       
        break;

    case 11:
        printf("novembro");
       
        break;
    
    case 12:
        printf("dezembro");
       
        break;
    }

    return 0;
}