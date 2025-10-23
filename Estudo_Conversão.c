#include <stdio.h>

    int main(){
      int nota1, nota2, nota3;
      float media;

      printf ("**** Programa de Cálculo de Média ****\n");
      
      printf ("Digite sua Primeira Nota: \n", nota1);
      scanf ("%d", &nota1);

      printf ("Digite sua Segunda Nota: \n", nota2);
      scanf ("%d", &nota2);

      printf ("Digite sua Terceira Nota: \n", nota3);
      scanf ("%d", &nota3);

      media = (float) (nota1 + nota2 + nota3) / 3;

      printf ("A média de suas notas é: %.2f\n", media);


    }