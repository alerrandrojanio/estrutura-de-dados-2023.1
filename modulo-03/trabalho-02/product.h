typedef struct product Product;
typedef struct productsArray ProductsArray;

Product *create(int id, float value, char *name);
ProductsArray *createArray(int size);
void add(ProductsArray *array, Product *product);
ProductsArray *populateArray();
void printProduct(Product *product);
void printArray(ProductsArray *array);

ProductsArray *insertionSort(ProductsArray *array);
ProductsArray *selectionSort(ProductsArray *array);
ProductsArray *bubbleSort(ProductsArray *array);
ProductsArray *mergeSort(ProductsArray *array, int left, int right);
ProductsArray *quickSort(ProductsArray *array, int left, int right);