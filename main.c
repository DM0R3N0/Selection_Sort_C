//================================================================
// Nome Do Arquivo: bubblesort.c
//
// Descricao: Implementacao do algoritmo de ordenacaoo por bubble sort
//================================================================

// Libs
#include <stdio.h>
#include <stdlib.h>

// Define uma constante
#define MAX 5

// Prototipo da funcao de ordenacao
void selection_sort (int *vetor);

int
main (int argc, char **argv)
{
  int i, vetor[MAX];

  // MAX ou 10 valores
  for (i = 0; i < MAX; i++)
    {
      printf ("Digite um valor: ");
      scanf ("%d", &vetor[i]);
    }

  printf ("\nOrdem inicial dos itens no array:\n");
  for (i = 0; i < MAX; i++)
    {
      printf ("%4d", vetor[i]);
    }

  // Chamada da funcao que ordena os valores
  selection_sort (vetor);

  // Imprime os valores ordenados
  printf ("\nElementos do array em ordem crescente:\n");
  for (i = 0; i < MAX; i++)
    {
      printf ("%4d", vetor[i]);
    }
}

// Funcao de Ordenacao por Selection Sort

// Funcao de Ordenacao por Selection Sort
void selection_sort (int *v)
{
  int i, j, menor, troca;

  for (i = 0; i < MAX - 1; i++)
    {
      menor = i;
      for (j = i + 1; j < MAX; j++)
	{
	  if (v[j] < v[menor])
	    menor = j;
	}
      if (i != menor)
	{
	  troca = v[i];
	  v[i] = v[menor];
	  v[menor] = troca;
	}
    }

}

