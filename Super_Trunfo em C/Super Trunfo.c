#include <stdio.h>

int main() {
    // ===== Carta 1 =====
    char estado1[3], codigo1[10], nomeCidade1[50];
    unsigned long populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código: ");
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

    // ===== Cálculos da Carta 1 =====
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    // Super Poder = soma dos atributos numéricos + inverso da densidade
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // ===== Carta 2 =====
    char estado2[3], codigo2[10], nomeCidade2[50];
    unsigned long populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código: ");
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

    // ===== Cálculos da Carta 2 =====
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // ===== Exibição dos resultados =====
    printf("\n==============================\n");
    printf("Carta 1 - %s (%s)\n", nomeCidade1, estado1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2 - %s (%s)\n", nomeCidade2, estado2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ===== Comparação (Atributo fixo: Densidade Populacional) =====
    printf("\n=== Comparação de cartas (Atributo: Densidade Populacional) ===\n");
    printf("Carta 1 - %s: %.2f hab/km²\n", nomeCidade1, densidade1);
    printf("Carta 2 - %s: %.2f hab/km²\n", nomeCidade2, densidade2);

    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (densidade1 > densidade2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    // ===== Comparação extra: Super Poder =====
    printf("\n=== Comparação de cartas (Atributo: Super Poder) ===\n");
    printf("Carta 1 - %s: %.2f\n", nomeCidade1, superPoder1);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, superPoder2);

    if (superPoder1 > superPoder2) {
        printf("Resultado: Carta 1 (%s) venceu com Super Poder!\n", nomeCidade1);
    } else if (superPoder1 < superPoder2) {
        printf("Resultado: Carta 2 (%s) venceu com Super Poder!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate no Super Poder!\n");
    }

    printf("==============================\n");
    return 0;
}