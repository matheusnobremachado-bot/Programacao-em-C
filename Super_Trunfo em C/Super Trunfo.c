#include <stdio.h>

#include <stdio.h>

int main() {
    // ===== Declaração das variáveis da Carta 1 =====
    char estado1;
    char codigo1[5];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibpercapita1;

    // ===== Declaração das variáveis da Carta 2 =====
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibpercapita2;

    // ===== Entrada de dados da Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // ===== Cálculos da Carta 1 =====
    densidadePopulacional1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1;
    float inversoDensidade1 = 1.0 / densidadePopulacional1;

    // ⚠️ Cuidado com os tipos: conversões explícitas para float
    float SuperPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibpercapita1 + inversoDensidade1;

    // ===== Entrada de dados da Carta 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===== Cálculos da Carta 2 =====
    densidadePopulacional2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;
    float inversoDensidade2 = 1.0 / densidadePopulacional2;

    float SuperPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibpercapita2 + inversoDensidade2;

    // ===== Exibição dos dados =====
    printf("\n==============================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: R$ %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    // ===== Comparação das Cartas =====
    printf("\n==============================\n");
    printf("Comparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);

    printf("==============================\n");

    return 0;
}

