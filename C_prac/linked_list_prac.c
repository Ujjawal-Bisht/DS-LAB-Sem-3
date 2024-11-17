#include <stdio.h>
#include <stdlib.h>
//  Initializing singly linked list
struct node {
    int data ;
    struct node * next ;
} ;

struct node *head = NULL;
struct node2 {
    int data;
    struct node2 *next;
    struct node2 *prev;
};

struct node2 *head2 = NULL;

int main(){
    printf("Linked list practice\n");
    //User input data
/*
    newnode = (struct node *)malloc(sizeof(struct node)) ;
    printf("Enter data : ");
    scanf("%d", &newnode->data);

    head ->next = newnode ;
    newnode->next = NULL ;
*/
}