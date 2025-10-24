#include <stdio.h>

int main() {
    // ===== Carta 1 =====
    char estado1[3], codigo1[10], nomeCidade1[50];
    unsigned long populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (ex: SP): ");
    scanf("%s", estado1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // ===== Carta 2 =====
    char estado2[3], codigo2[10], nomeCidade2[50];
    unsigned long populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);
    printf("Código (ex: A02): ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // ===== Exibição dos dados =====
    printf("\n==============================\n");
    printf("Carta 1 - %s (%s)\n", nomeCidade1, estado1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2 - %s (%s)\n", nomeCidade2, estado2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ===== Comparação do atributo escolhido =====
    printf("\n==============================\n");
    printf("Comparação de Cartas (Atributo: Super Poder)\n");
    printf("%s: %.2f\n", nomeCidade1, superPoder1);
    printf("%s: %.2f\n", nomeCidade2, superPoder2);

    if (superPoder1 > superPoder2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (superPoder1 < superPoder2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    printf("==============================\n");
    return 0;
}