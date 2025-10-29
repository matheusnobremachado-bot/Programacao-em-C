#include <stdio.h>

int main() {
    // -------- TORRE (usando for) --------
    // A Torre move-se em linha reta (horizontal ou vertical).
    // Vamos mover 5 casas para a direita.
    int casasTorre = 5;

    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= casasTorre; i++) 
    {
        printf("Direita\n");
    }
    printf("\n");

    // -------- BISPO (usando while) --------
    // O Bispo move-se na diagonal.
    // Vamos mover 5 casas na diagonal para cima e à direita.
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("Movimento do BISPO:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // -------- RAINHA (usando do-while) --------
    // A Rainha move-se em todas as direções.
    // Vamos mover 8 casas para a esquerda.
    int casasRainha = 8;
    int contadorRainha = 1;

    printf("Movimento da RAINHA:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // ==============================
    // Fim da Simulação
    // ==============================

    return 0;
}