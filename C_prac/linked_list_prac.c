#include <stdio.h>
//  Initializing singly linked list

struct node {
    int data ;
    struct node * next ;
} ;
/*
struct node * head = NULL ;

newnode = (struct node *)malloc(sizeof(struct node)) ;
//User input data

printf("Enter data : ");
scanf("%d", &newnode->data);

head ->next = newnode ;
newnode->next = NULL ;

*/
// Initializing doubly linked list

struct node2 {
    int data;
    struct node2 * next ;
    struct node2 * prev ;
} ;
