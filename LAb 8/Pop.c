//  Stack implementation using linked list

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
void pop(){
    struct node* temp = top;
    top = top->next;
    free(temp);
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


int main(){
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

    pop();
    
    printf("New Stack after deletion:- ");
    traverse(top);
    return 0;
    }