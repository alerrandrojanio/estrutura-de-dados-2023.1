typedef struct fila Fila;

Fila *create(int n);
int push(Fila *f, int n);
int pop(Fila *f);
int size(Fila *f);
int top(Fila *f);
int bottom(Fila *f);
int find(Fila *f, int n);
bool isFull(Fila *f);
bool isEmpty(Fila *f);
void clear(Fila *f);