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

void pop(){
    struct node* temp = top;        
    top = top->next;
    free(temp);
}

void display() {
    if (top == NULL) 
    {
        printf("Stack is empty\n");
        return; 
    }
    struct node* temp = top;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
        }
    int* elements = (int*)malloc(count * sizeof(int));
    if (elements == NULL) { 
        printf("Memory allocation failed\n");
        return;
        } 
    temp = top;
    for (int i = count - 1; i >= 0; i--) {
        elements[i] = temp->data;
        temp = temp->next;
        } 
    for (int i = 0; i < count; i++) {
        printf("%d ", elements[i]);
    }
    printf("\n");
    free(elements);
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
    display();
    printf("Enter new element:- ");
    scanf("%d",&new_elm);
    push(new_elm);
    display();
    return 0;
}  
