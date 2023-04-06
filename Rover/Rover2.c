#include <stdio.h>
#include<stdlib.h>

int posicao = 0;
int i = 0;
int movimentar (char[], int);

int  main ()
{
  char movimentos[] = { 'D', 'D', 'D', 'E', 'E' };
  printf ("Rover em Marte \n");
  posicao = movimentar (movimentos, 5);
  printf ("Nova posicao: %d", posicao);
  return 0;
}

int movimentar (char movimentos[], int tam)

{
  for (i = 0; i < tam; i++)    
  {
        if (movimentos[i] == 'D')
    	{
    	  posicao++;
    	}
        else if (posicao > 0 && movimentos[i] == 'E')
    	{
    	  posicao--;
    	}
        else
    	{
    	  printf ("Comando invalido na posicao: %d\n", i);
    	}

    }
    return posicao;
}
