# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include linkedlist.h>

int main(){
    int i;
    struct node * n = make_node(0, "START");
    for(i = 1; i < 5; i++){
        struct node *temp = insert_front(n, i, "APPENDICES");
        n = temp;
    }    
    print_list(n);

    n = free_list(n);

    print_list(n);

    return 0;
}
