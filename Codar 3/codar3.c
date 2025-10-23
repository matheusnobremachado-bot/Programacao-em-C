#include <stdio.h>

     int main (){

// Declarar variáveis Produto, unsigned int estoque, float valor unitário, double valor total e unsigned int quantidade mínima
        
        char produtoA[30] = "Produto A";
        char produtoB [30] = "Produto B";

        unsigned int estoqueA = 1000;
        unsigned int estoqueB = 2000;

        float valorA = 10.50;
        float valorB = 20.40;

        unsigned int estoqueMinA = 500;
        unsigned int estoqueMinB = 2500;

        double valorTotalA;
        double valorTotalB;

        int resultadoA, resultadoB;

// Exibir as infos dos produtos
        
        printf(" %s tem estoque %u e o valor unitário é R$%.2f\n", produtoA, estoqueA, valorA);
        printf(" %s tem estoque %u e o valor unitário é R$%.2f\n", produtoB, estoqueB, valorB);

// Comparações com valor minimo de estoque

        resultadoA = estoqueA > estoqueMinA;
        resultadoB = estoqueB > estoqueMinB;

        printf("O produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
        printf("O produto %s tem estoque mínimo %d\n", produtoB, resultadoB);

// Calcular valores totais
        
        valorTotalA = estoqueA * valorA;
        valorTotalB = estoqueB * valorB;

// Comparações entre os valores totais dos produtos
     
        printf("O valor total de A (R$%.2f) é maior que o valor total de B (R$%.2f)?: %d\n", valorTotalA, valorTotalB, valorTotalA > valorTotalB);
}