#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ===== Entrada de dados da Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado1); // o espaço antes do %c ignora o \n anterior

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf(" %f", &area1); // espaço antes do %f ignora o \n deixado no buffer

    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &pib1); // mesmo motivo

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);


    // ===== Entrada de dados da Carta 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);


    // ===== Exibição dos dados =====
    printf("\n==============================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    printf("==============================\n");

    return 0;
}
