#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for clock_t, clock(), CLOCKS_PER_SEC
#include "product.h"

int main()
{
  double time_spent = 0.0;

  ProductsArray *array = populateArray();

  printf("# ORIGINAL ARRAY:\n");
  printArray(array);
  printf("\n");

  system("pause");

  ProductsArray *insertionSortArray = insertionSort(array);
  printf("# INSERTION SORT:\n");

  clock_t begin = clock(); // inicia o contator de tempo
  printArray(insertionSortArray);
  clock_t end = clock(); // finaliza o contador de tempo

  printf("\n");

  time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

  printf("O tempo de execucao do INSERTION SORT foi %f segundos \n\n", time_spent);
  system("pause");

  ProductsArray *selectionSortArray = selectionSort(array);
  printf("# SELECTION SORT:\n");

  begin = clock();
  printArray(selectionSortArray);
  end = clock();

  printf("\n");

  time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

  printf("O tempo de execucao do SELECTION SORT foi %f segundos \n\n", time_spent);
  system("pause");

  ProductsArray *bubbleSortArray = bubbleSort(array);

  printf("# BUBBLE SORT:\n");

  begin = clock();
  printArray(bubbleSortArray);
  end = clock();

  printf("\n");

  time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

  printf("O tempo de execucao do BUBBLE SORT foi %f segundos \n\n", time_spent);
  system("pause");
}
