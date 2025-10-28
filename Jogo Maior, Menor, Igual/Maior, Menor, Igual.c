#include <stdio.h>

    int main() {
        int numeroPlayer, numeroPC, resultado;
        char tipoComparacao;

        //Gerar número aletório
        srand (time(0));
        
        numeroPC = rand() % 100 + 1; //Números entre 1 e 100

        //Inicio do Jogo
        printf ("*** Bem vindo ao jogo Maior, Menor ou Igual! ***\n");
        printf ("Escolha um número e o tipo de comparação\n");
        printf ("M = Maior\n");
        printf ("N = Menor\n");
        printf ("I = Igual\n");

        printf ("Escolha a comparação: ");
        scanf (" %c", &tipoComparacao);

        printf ("Escolha um número (1 a 100): ");
        scanf ("%d", &numeroPlayer);

        //Exibir número do Computador
        printf ("O número do computador é: %d\n", numeroPC);


        switch (tipoComparacao) 
        {
          case 'M':
          case 'm':
                printf ("Você selecionou a opção Maior\n");
                resultado = numeroPlayer > numeroPC ? 1 : 0;
                printf ("O número do computador é %d e o seu número é %d\n", numeroPC, numeroPlayer);
        break;
          case 'N':
          case 'n':
                printf ("Você selecionou a opção Menor\n"); 
                resultado = numeroPlayer < numeroPC ? 1 : 0;
                printf ("O número do computador é %d e o seu número é %d\n", numeroPC, numeroPlayer);
        break;
          case 'I':
          case 'i':
                printf ("Você selecionou a opção Igual\n"); 
                resultado = numeroPlayer == numeroPC ? 1 : 0;
                printf ("O número do computador é %d e o seu número é %d\n", numeroPC, numeroPlayer);
        break;

        default:
               printf ("Opção invalida, tente novamente!\n");
        }
    
        if (resultado == 1)
        {
           printf ("*** Você venceu ***\n");
        } else {
            printf ("Você perdeu T-T");
        } 


    }