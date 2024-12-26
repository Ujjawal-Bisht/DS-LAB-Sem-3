// Inserting new elements in stack in linked list
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data ;
    struct node* next ;
};

struct node* top = NULL;

void push(int x){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = top;
    top = temp;
}

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
    int n,new_elm;
    printf("Enter how many elements u want to enter:- ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        printf("Enter element %d:- ", i + 1);
        scanf("%d", &x);
        push(x);
    }
    printf("Entered stack-");
    traverse(top);

    printf("Enter new element:- ");
    scanf("%d",&new_elm);
    push(new_elm);
    
    printf("New Stack after insertion:- ");
    traverse(top);
    return 0;
}  
