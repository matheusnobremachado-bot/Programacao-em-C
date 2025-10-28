#include <stdio.h>

int main() {
    int escolhaPlayer1, escolhaPlayer2;

    printf ("--= Bem-vindo ao Super Trunfo! =--\n");
    
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
    printf("==============================\n");

    // ===== MENU INTERATIVO =====
    int opcao;
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");

    switch(opcao) {
        case 1:
            printf("Comparando População:\n");
            printf("%s: %lu | %s: %lu\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedora: Carta 1 (%s)\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Vencedora: Carta 2 (%s)\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Comparando Área:\n");
            printf("%s: %.2f | %s: %.2f\n", nomeCidade1, area1, nomeCidade2, area2);
            if (area1 > area2)
                printf("Vencedora: Carta 1 (%s)\n", nomeCidade1);
            else if (area2 > area1)
                printf("Vencedora: Carta 2 (%s)\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Comparando PIB:\n");
            printf("%s: %.2f | %s: %.2f\n", nomeCidade1, pib1, nomeCidade2, pib2);
            if (pib1 > pib2)
                printf("Vencedora: Carta 1 (%s)\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Vencedora: Carta 2 (%s)\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d | %s: %d\n", nomeCidade1, pontosTuristicos1, nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedora: Carta 1 (%s)\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedora: Carta 2 (%s)\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Comparando Densidade Populacional:\n");
            printf("%s: %.2f | %s: %.2f\n", nomeCidade1, densidade1, nomeCidade2, densidade2);
            if (densidade1 < densidade2) // menor vence
                printf("Vencedora: Carta 1 (%s)\n", nomeCidade1);
            else if (densidade2 < densidade1)
                printf("Vencedora: Carta 2 (%s)\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Comparando PIB per Capita:\n");
            printf("%s: %.2f | %s: %.2f\n", nomeCidade1, pibPerCapita1, nomeCidade2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2)
                printf("Vencedora: Carta 1 (%s)\n", nomeCidade1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Vencedora: Carta 2 (%s)\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 7:
            printf("Comparando Super Poder:\n");
            printf("%s: %.2f | %s: %.2f\n", nomeCidade1, superPoder1, nomeCidade2, superPoder2);
            if (superPoder1 > superPoder2)
                printf("Vencedora: Carta 1 (%s)\n", nomeCidade1);
            else if (superPoder2 > superPoder1)
                printf("Vencedora: Carta 2 (%s)\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    printf("==============================\n");
    return 0;
}