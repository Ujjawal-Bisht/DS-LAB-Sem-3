#include <stdio.h>
#include <stdlib.h>

// Define a struct for a node in the linked list
struct node {
    int data;
    struct node *next;
};

// Function to display the stack
void display(struct node *top) {
    struct node *temp = top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    // Create a stack using a linked list
    struct node *top = NULL;

    // Add elements to the stack
    top = (struct node *)malloc(sizeof(struct node));
    top->data = 1;
    top->next = (struct node *)malloc(sizeof(struct node));
    top->next->data = 2;
    top->next->next = (struct node *)malloc(sizeof(struct node));
    top->next->next->data = 3;
    top->next->next->next = NULL;

    // Display the stack
    printf("Stack: ");
    display(top);

    return 0;
}