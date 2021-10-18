struct node {
    int id;
    char name[200];
    struct node * next;
};

void print_list ( struct node * node);
struct node * make_node(int id, char *name);
struct node * insert_front(struct node *f, int id, char * name);
struct node * free_list (struct node * n);
struct node * remove_node(struct node *front, int data);