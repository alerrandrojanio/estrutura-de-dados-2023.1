#include <stdio.h>
#include <stdlib.h>
#include "product.h"

int main()
{
  ProductsArray *array = populateArray();
  printf("# ORIGINAL ARRAY:\n");
  printArray(array);
  printf("\n");

  ProductsArray *insertionSortArray = insertionSort(array);
  printf("# INSERTION SORT:\n");
  printArray(insertionSortArray);
  printf("\n");

  ProductsArray *selectionSortArray = selectionSort(array);
  printf("# SELECTION SORT:\n");
  printArray(selectionSortArray);
  printf("\n");

  ProductsArray *bubbleSortArray = bubbleSort(array);
  printf("# BUBBLE SORT:\n");
  printArray(bubbleSortArray);
  printf("\n");
}
