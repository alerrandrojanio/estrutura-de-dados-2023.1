typedef struct list List;

List *create(int n);
int add(List *list, int n);
int removeElement(List *list, int n);
int size(List *list);
int linearSearch(List *list, int n);
int binarySearch(List *list, int n);
int isFull(List *list);
int isEmpty(List *list);
void clear(List *list);
void showList(List *list);
