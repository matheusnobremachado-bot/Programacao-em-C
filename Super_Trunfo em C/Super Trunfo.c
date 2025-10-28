#include <stdio.h>

int main() {
    printf("--= Bem-vindo ao Super Trunfo! =--\n");

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

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // ===== MENU DINÂMICO DE ATRIBUTOS =====
    int attr1 = 0, attr2 = 0;
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Super Poder\n");
    scanf("%d", &attr1);

    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    do {
        scanf("%d", &attr2);
        if (attr2 == attr1) printf("Escolha inválida. Selecione outro atributo: ");
    } while (attr2 == attr1);

    // ===== COMPARAÇÃO DOS ATRIBUTOS =====
    float valor1_attr1, valor2_attr1, valor1_attr2, valor2_attr2;

    // Atribuindo valores dinamicamente com switch
    switch(attr1) {
        case 1: valor1_attr1 = populacao1; valor2_attr1 = populacao2; break;
        case 2: valor1_attr1 = area1; valor2_attr1 = area2; break;
        case 3: valor1_attr1 = pib1; valor2_attr1 = pib2; break;
        case 4: valor1_attr1 = pontosTuristicos1; valor2_attr1 = pontosTuristicos2; break;
        case 5: valor1_attr1 = densidade1; valor2_attr1 = densidade2; break;
        case 6: valor1_attr1 = pibPerCapita1; valor2_attr1 = pibPerCapita2; break;
        case 7: valor1_attr1 = superPoder1; valor2_attr1 = superPoder2; break;
        default: valor1_attr1 = valor2_attr1 = 0; break;
    }

    switch(attr2) {
        case 1: valor1_attr2 = populacao1; valor2_attr2 = populacao2; break;
        case 2: valor1_attr2 = area1; valor2_attr2 = area2; break;
        case 3: valor1_attr2 = pib1; valor2_attr2 = pib2; break;
        case 4: valor1_attr2 = pontosTuristicos1; valor2_attr2 = pontosTuristicos2; break;
        case 5: valor1_attr2 = densidade1; valor2_attr2 = densidade2; break;
        case 6: valor1_attr2 = pibPerCapita1; valor2_attr2 = pibPerCapita2; break;
        case 7: valor1_attr2 = superPoder1; valor2_attr2 = superPoder2; break;
        default: valor1_attr2 = valor2_attr2 = 0; break;
    }

    // ===== Cálculo da soma dos atributos (respeitando a regra da densidade) =====
    float soma1 = 0, soma2 = 0;
    soma1 += (attr1 == 5) ? (valor2_attr1 < valor1_attr1 ? 1 : 0) : valor1_attr1;
    soma2 += (attr1 == 5) ? (valor1_attr1 < valor2_attr1 ? 1 : 0) : valor2_attr1;
    soma1 += (attr2 == 5) ? (valor2_attr2 < valor1_attr2 ? 1 : 0) : valor1_attr2;
    soma2 += (attr2 == 5) ? (valor1_attr2 < valor2_attr2 ? 1 : 0) : valor2_attr2;

    // ===== EXIBIÇÃO DO RESULTADO =====
    printf("\n=== RESULTADO FINAL ===\n");
    printf("Carta 1 - %s | Carta 2 - %s\n", nomeCidade1, nomeCidade2);
    printf("Atributo 1: %.2f vs %.2f\n", valor1_attr1, valor2_attr1);
    printf("Atributo 2: %.2f vs %.2f\n", valor1_attr2, valor2_attr2);
    printf("Soma dos atributos: Carta 1 = %.2f | Carta 2 = %.2f\n", soma1, soma2);
    printf("Vencedora: %s\n", (soma1 > soma2) ? nomeCidade1 : (soma2 > soma1) ? nomeCidade2 : "Empate!");

    printf("==============================\n");
    return 0;
}
