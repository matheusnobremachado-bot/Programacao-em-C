#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    // Comparação entre variavel inteira e de ponto flutuante

    int x = 5;
    float y = 5.0;

    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    // O programa realiza uma conversão implicita para realizar o comparativo

    // Exemplo de conversão explícita necessária para a comparação ser feita corretamente

    int num = 10;
    float result = 10.0;

    int comparison = (float)num == result;

    printf("num == result: %d\n", comparison);

    return 0;
}