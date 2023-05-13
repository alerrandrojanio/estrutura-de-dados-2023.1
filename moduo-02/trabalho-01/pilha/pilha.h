typedef struct pilha Pilha;

Pilha *create(int n);
int push(Pilha *p, int n);
int pop(Pilha *p);
int size(Pilha *p);
int top(Pilha *p);
int bottom(Pilha *p);
int find(Pilha *p, int n);
bool isFull(Pilha *p);
bool isEmpty(Pilha *p);
void clear(Pilha *p);