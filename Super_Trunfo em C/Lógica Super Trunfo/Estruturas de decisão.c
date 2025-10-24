#include <stdio.h>

int main() {
    
    float umidade, temperatura;
    unsigned int estoque, estoqueMinimo;

    estoqueMinimo = 1000;

    printf("Insira a temperatura: \n");
    scanf("%f", &temperatura);

    printf("Insira a umidade do local: \n");
    scanf("%f", &umidade);

    printf("Insira a quantidade de intens no estoque: \n");
    scanf("%u", &estoque);

    
    // Indicações

    if ( temperatura >= 50 ) {
        printf ("Atenção, a temperatura do ambiente está acima do permitido!\n");
    } else {
        printf ("Temperatura do ambiente OK!\n");
    }

    
    if ( umidade >= 50 ) {
        printf ("Atenção, a umidade do ambiente está acima do permitido!\n");
    } else {
        printf ("Umidade do ambiente OK!\n");
    }


    if ( estoque <= estoqueMinimo ) {
        printf ("O volume de estoque abaixo do mínimo!\n");
    } else {
        printf ("Volume de estoque dentro dos parâmetros.\n");
    }
        
      return 0;
    }