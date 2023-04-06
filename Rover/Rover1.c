#include <stdio.h>
#include<stdlib.h>

int linha = 0;
int coluna = 0;
int posicao = 0;
int tamMatriz = 4;
int i = 0;
int movimentar (char[], int, int);

int  main ()
{
  char movimentos[] = { 'D', 'D','E','B','D','D' };
  printf ("Rover em Marte \n");
  posicao = movimentar (movimentos, sizeof(movimentos), tamMatriz);
  printf ("Nova posicao: %d", posicao);
  return 0;
}

int movimentar (char movimentos[], int tam, int tamMatriz)
{
    for(i = 0; i < tam; i++)
    {
       if(coluna < tamMatriz -1 && movimentos[i] == 'D')
       {
            coluna++;
       }
       else if(coluna > 0 && movimentos[i] == 'E')
       {
            coluna--;
       }
       else if(linha < tamMatriz -1  && movimentos[i] == 'B')
       {
            linha++;
       }
       else if(linha > 0  && movimentos[i] == 'C')
       {
            linha--;
       }
       else{
            printf ("Comando invalido na posicao: %d\n", i);
       }
    }
    
    return linha*tam+coluna;
}
