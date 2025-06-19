#include <stdio.h>
// questão 4
int main(){

// letra a)

    int vetValorU[10], vetVendidos[10], valMaisVend = 0, valVendasTotal = 0;
    int i, TotalU;  

    for(i = 0; i < 10; i++){
        printf("Insira o preco do %d objeto: ", i);
        scanf("%d", &vetValorU[i]);
    }
    
    for(i = 0; i < 10; i++){
        printf("Insira a quantidade de vendas do %d objeto: ", i);
        scanf("%d", &vetVendidos[i]);
    }

    printf("\nQuantidade vendida: ");
    for(i = 0; i < 10; i++)
        printf("%2d", vetVendidos[i]);

    
    for(i = 0; i < 10; i++)
        printf("\nValor Unitario: R$ %2d", vetValorU[i]);
        
    
    for(i = 0; i < 10; i++){
        printf("\nValor total: R$ ");
        TotalU = vetValorU[i] * vetVendidos[i];
        printf("%3d", TotalU);
        valVendasTotal += TotalU; // sempre se usa += para somar TUDO
    }
  
    printf("\nValor total das vendas: R$ %d,00", valVendasTotal);
    printf("\nValor salarial final do vendedor: R$ %d,00", valVendasTotal * 0.05);

// letra b)

    for(i = 0; i < 10; i++){
        if( vetVendidos[i] > valMaisVend)
            valMaisVend = vetVendidos[i];    
    }
    
    for(i = 0; i < 10; i++){
        if(valMaisVend == vetVendidos[i])
        printf("\nSua posicao no vetor: %d\nValor mais vendido: R$ %2d,00", i, vetValorU[i]);
    }

    return 0;
}