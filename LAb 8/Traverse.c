#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void traverse(struct node *top) {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    struct node *temp = top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct node *top = NULL;

    struct node* n1 = (struct node*) malloc (sizeof (struct node));
    n1 -> data = 10 ;
    n1 -> next = NULL ;
    top = n1 ;

    struct node* n2 = (struct node*) malloc (sizeof (struct node));
    n2 -> data = 20 ;
    n2 -> next = top ;
    top = n2 ;

    struct node* n3 = (struct node*) malloc (sizeof (struct node));
    n3 -> data = 30 ;
    n3 -> next = top ;
    top = n3 ;
    
    printf("Stack: ");
    traverse(top);

    return 0;
}