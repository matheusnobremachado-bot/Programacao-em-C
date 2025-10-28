#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int escolhadoPlayer, escolhadoPC;
    srand (time (0));

    printf ("---= Jokenpô =---\n");
    printf ("*Escolha uma opção*\n");
    printf ("1. Pedra\n");
    printf ("2. Papel\n");
    printf ("3. Tesoura\n");
    printf ("Insira sua escolha: ");
    scanf ("%d", &escolhadoPlayer);

    escolhadoPC = rand() % 3 + 1;

    switch (escolhadoPlayer) 
    {
    case 1:
         printf ("Jogador: Pedra - ");
         break;
    case 2:
         printf ("Jogador: Papel - ");
         break;
    case 3:
         printf ("Jogador: Tesoura - ");
         break;
    default:
         printf ("Opção Inválida!\n");
    }

    switch (escolhadoPC) 
    {
    case 1:
         printf ("Máquina: Pedra\n");
         break;
    case 2:
         printf ("Máquina: Papel\n");
         break;
    case 3:
         printf ("Máquina: Tesoura\n");
         break;
    }
    
    if (escolhadoPlayer == escolhadoPC)
    {
       printf ("Empate!\n");
    } else if ((escolhadoPlayer == 1) && (escolhadoPC == 3) || 
                (escolhadoPlayer == 2) && (escolhadoPC == 1) ||
                 (escolhadoPlayer == 3) && (escolhadoPC == 2))
    {
        printf ("Você venceu! ^-^\n");
    }        else { 
        printf ("Você perdeu. T-T\n");
    }


    return 0;

}