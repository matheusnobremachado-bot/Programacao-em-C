#include <stdio.h>

int main() {
    // ===== Carta 1 =====
    char estado1[3], codigo1[10], nomeCidade1[50];
    unsigned long populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

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

    // ===== Carta 2 =====
    char estado2[3], codigo2[10], nomeCidade2[50];
    unsigned long populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

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

    // ===== Comparação (Atributo fixo: Densidade Populacional) =====
    printf("\n=== Comparação de cartas (Atributo: Densidade Populacional) ===\n");
    printf("Carta 1 - %s (%s): %.4f hab/km²\n", nomeCidade1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %.4f hab/km²\n", nomeCidade2, estado2, densidade2);

    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (densidade1 > densidade2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}


