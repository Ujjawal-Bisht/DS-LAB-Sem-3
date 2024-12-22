#include<stdio.h>
#include<stdlib.h>

struct stack{
    int data;
    struct stack* next;
};

struct stack* push(int data, struct stack* head){
    struct stack* newnode = (struct stack*) malloc (sizeof (struct stack));
    newnode -> data = data ;
    newnode -> next = head ;
    head = newnode ;
    return head ;
}

struct stack* pop(struct stack* head){
    if (head == NULL){
        printf("Stack Underflow...");
    }
    else{
        head =  head -> next ;
        return head;
    }
}

int top (struct stack* head){
    if (head == NULL){
        printf("Emply Stack...");
        return 0;
    }
    else{
        return head -> data ;
    }
}

void display(struct stack* head){
    if (head == NULL){
        printf("empty stack");
    }
    else{
        while(head -> next != NULL){
            printf("%d", head -> data);
            head = head -> next ;
        }
    }
}

void main(){

    int n;
    printf("Enter how many nodes you want to enter:- ");
    scanf("%d",&n) ;

    for (int i=0 ; i<n ; i++){
        int elm;
        printf("Enter element:- ");
        scanf("%d",&elm);
        push(elm, newnode);
    }

    display(newnode) ;
}