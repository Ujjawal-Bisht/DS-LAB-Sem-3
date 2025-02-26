#include<stdio.h>
#include<stdlib.h>
//Insertion in linked list from beginning

typedef struct node{
    int data;
    struct node* next;
}node;

node* insertNode(node* head, int data){
    node* new_N = (node*)malloc(sizeof(node));
    new_N->data = data;
    new_N->next = head;
    head = new_N;
    return head;
}

node* insertNode2(node* head, int data){
    node* new_N = (node*)malloc(sizeof(node));
    new_N->data = data;
    new_N->next = NULL;
    while(head->next != NULL){
        head = head->next;
    }
    return head;
}

void main(){
    node* head = NULL;
    /*
    head = insertNode(head, 10);
    head = insertNode(head, 20);
    head = insertNode(head, 30);
    head = insertNode(head, 40);
    */
    head = insertNode2(head, 10);
    head = insertNode2(head, 20);
    head = insertNode2(head, 30);
    head = insertNode2(head, 40);

    while(head != NULL){
        printf("%d\t", head->data);
        head = head->next;
    }
}
