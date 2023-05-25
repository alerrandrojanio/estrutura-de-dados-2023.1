typedef struct lista Lista;

Lista *create(int n);
int add(Lista *l, int n);
int removeElement(Lista *l, int position);
int size(Lista *l);
int find(Lista *l, int n);
bool isFull(Lista *l);
bool isEmpty(Lista *l);
void clear(Lista *l);
