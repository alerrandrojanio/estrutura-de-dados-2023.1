typedef struct head Head;
typedef struct element Element;

Head *create();
int add(Head *head, int n);
int removeElement(Head *head, int n);
int size(Head *head);
int find(Head *head, int n);
int isEmpty(Head *head);
void clear(Head *head);
int showList(Head *head);
int showListUpsideDown(Head *head);