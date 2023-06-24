typedef struct tree Tree;
typedef struct node Node;

Tree *create();
void clear(Tree *tree);
void printAllPos(Tree *tree);
void printAllPre(Tree *tree);
void printAllIn(Tree *tree);
int insert(Tree *tree, int value);
Node *search(Tree *tree, int value);