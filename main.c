# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "linkedlist.h"

int main(){
    int i;
    struct node * n = make_node(0, "START");
    for(i = 1; i < 5; i++){
        struct node *temp = insert_front(n, i, "APPENDICES");
        n = temp;
    }    
    printf("List [4,3,2,1,0]-----------\n");

    print_list(n);
    n = remove_node(n, 4);
    n = remove_node(n, 3);
    n = remove_node(n, 2);
    // print_list(n);

    n = remove_node(n, 1);
    n = remove_node(n, 0);

    print_list(n);
    printf("List with 1s-----------\n");

    for(i = 1; i < 5; i++){
        n = insert_front(n, 1, "APPENDICES");
    }    
    print_list(n);
    n = remove_node(n, 1);
    n = remove_node(n, 1);
    print_list(n);
    n = remove_node(n, 1);
    n = remove_node(n, 1);
    // remove from empty
    n = remove_node(n, 1);

    print_list(n);
    printf("Freeing filled list again-----------\n");

    for(i = 1; i < 5; i++){
        n = insert_front(n, i, "APPENDICES");
    }   
    print_list(n);
    n = free_list(n);
    print_list(n);

    return 0;
}
