typedef struct bag Bag;

Bag * create(int n);
void insert(Bag* bag, int e);
int get(Bag* bag);
bool search(Bag* bag, int e);
int size(Bag* bag);
void printAll(Bag* bag);
