typedef struct tree Tree;

Tree *create();
void clear(Tree *tree);
void printAllPos(Tree *tree);
void printAllPre(Tree *tree);
void printAllIn(Tree *tree);
int insert(Tree *tree, int value);
Tree *search(Tree *tree, int value);