#include <stdio.h>
#include <stdlib.h>
#include "product.h"

struct product
{
  int id;
  float value;
  char *name;
};

struct productsArray
{
  Product *product;
  int size;
  int n;
};

Product *create(int id, float value, char *name)
{
  Product *product = (Product *)malloc(sizeof(Product));
  product->id = id;
  product->value = value;
  product->name = name;

  return product;
}

ProductsArray *createArray(int size)
{
  ProductsArray *array = (ProductsArray *)malloc(sizeof(ProductsArray));
  array->product = (Product *)malloc(sizeof(Product) * size);
  array->size = size;
  array->n = 0;

  return array;
}

void add(ProductsArray *array, Product *product)
{
  if (array->n < array->size)
  {
    array->product[array->n] = *product;
    array->n++;
  }
  else
  {
    printf("Array is full!\n");
  }
}

ProductsArray *populateArray()
{
  ProductsArray *array = createArray(10);
  Product *p;

  p = create(1, 120.0, "Arroz");
  add(array, p);

  p = create(2, 20.0, "Feijao");
  add(array, p);

  p = create(3, 70.0, "Macarrao");
  add(array, p);

  p = create(4, 100.0, "Carne");
  add(array, p);

  p = create(5, 70.0, "Frango");
  add(array, p);

  p = create(6, 60.0, "Peixe");
  add(array, p);

  p = create(7, 50.0, "Ovo");
  add(array, p);

  p = create(8, 30.0, "Leite");
  add(array, p);

  p = create(9, 85.0, "Cafe");
  add(array, p);

  p = create(10, 20.0, "Acucar");
  add(array, p);

  return array;
}

void printProduct(Product *product)
{
  printf("Product %d: %s\n", product->id, product->name);
  printf("Price %.2f\n", product->value);
}

void printArray(ProductsArray *array)
{
  for (int i = 0; i < array->n; i++)
  {
    printf("Product %d: %s\n", array->product[i].id, array->product[i].name);
    printf("Price %.2f\n", array->product[i].value);
  }
}

ProductsArray *insertionSort(ProductsArray *array)
{
  int i, j;
  Product key;

  for (i = 1; i < array->n; i++)
  {
    key = array->product[i];
    j = i - 1;

    while (j >= 0 && array->product[j].value > key.value)
    {
      array->product[j + 1] = array->product[j];
      j = j - 1;
    }

    array->product[j + 1] = key;
  }

  return array;
}

ProductsArray *selectionSort(ProductsArray *array)
{
  int i, j, min;
  Product aux;

  for (i = 0; i < array->n - 1; i++)
  {
    min = i;

    for (j = i + 1; j < array->n; j++)
    {
      if (array->product[j].value < array->product[min].value)
      {
        min = j;
      }
    }

    if (i != min)
    {
      aux = array->product[i];
      array->product[i] = array->product[min];
      array->product[min] = aux;
    }
  }

  return array;
}

ProductsArray *bubbleSort(ProductsArray *array)
{
  int i, j;
  Product aux;

  for (i = 0; i < array->n - 1; i++)
  {
    for (j = 0; j < array->n - i - 1; j++)
    {
      if (array->product[j].value > array->product[j + 1].value)
      {
        aux = array->product[j];
        array->product[j] = array->product[j + 1];
        array->product[j + 1] = aux;
      }
    }
  }

  return array;
}

// ProductsArray *mergeSort(ProductsArray *array, int left, int right)
// {
//   if (left < right)
//   {
//     int middle = left + (right - left) / 2;

//     mergeSort(array, left, middle);
//     mergeSort(array, middle + 1, right);

//     merge(array, left, middle, right);
//   }

//   return array;
// }

// ProductsArray *quickSort(ProductsArray *array, int left, int right)
// {
//   if (left < right)
//   {
//     int pivot = partition(array, left, right);

//     quickSort(array, left, pivot - 1);
//     quickSort(array, pivot + 1, right);
//   }

//   return array;
// }
