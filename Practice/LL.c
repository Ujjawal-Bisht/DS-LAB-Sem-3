#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node *head = NULL;
int main(){
    printf("Linked List Practice\n");
    struct node *newnode; // Allocate memory for newnode 
    newnode = (struct node *)malloc(sizeof(struct node)); 
    
    // Check if memory allocation was successful 
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Return with an error code 
    } 
    
    // Initialize the node 
    newnode->data = 10; 
    newnode->next = NULL; 
    
    // Now you can link it to the head or another node 
    head = newnode;
    
    // For example, make newnode the head of the list // Print the data to verify 
    printf("Node data: %d\n", head->data);

    return 0 ;
}