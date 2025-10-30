#include <stdio.h>

// ====== Funções Recursivas ======

// Torre - move-se em linha reta horizontal (Direita)
void moverTorre(int casas) {
    if (casas == 0)
        return; // Caso base: termina a recursão
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Bispo - move-se na diagonal (Cima, Direita)
// Agora com recursividade e loops aninhados
void moverBispo(int casas) {
    if (casas == 0)
        return; // Caso base

    for (int i = 1; i <= 1; i++) {          // Movimento vertical
        for (int j = 1; j <= 1; j++) {      // Movimento horizontal
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casas - 1); // Chamada recursiva
}

// Rainha - move-se em linha reta (Esquerda)
void moverRainha(int casas) {
    if (casas == 0)
        return; // Caso base
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// ====== Cavalo com Loops Complexos ======
// Movimento em "L": 2 para cima e 1 para a direita
void moverCavalo() {
    int movimentoVertical = 2;
    int movimentoHorizontal = 1;

    printf("Movimento do CAVALO:\n");

    for (int i = 1; i <= movimentoVertical; i++) {
        if (i == 1) {
            printf("Cima\n");
            continue; // pula para a próxima iteração (segunda casa pra cima)
        }
        printf("Cima\n");

        // Segundo loop: movimento horizontal (uma casa à direita)
        for (int j = 1; j <= movimentoHorizontal; j++) {
            if (j > 1) break; // segurança — impede loop extra
            printf("Direita\n");
        }
    }
}

// ====== Função Principal ======
int main() {
    // TORRE (Recursiva)
    printf("Movimento da TORRE:\n");
    moverTorre(5);
    printf("\n");

    // BISPO (Recursiva + Loops Aninhados)
    printf("Movimento do BISPO:\n");
    moverBispo(5);
    printf("\n");

    // RAINHA (Recursiva)
    printf("Movimento da RAINHA:\n");
    moverRainha(8);
    printf("\n");

    // CAVALO (Loops Aninhados + Controle de Fluxo)
    moverCavalo();

    // ====== Fim da Simulação ======
    return 0;
}
