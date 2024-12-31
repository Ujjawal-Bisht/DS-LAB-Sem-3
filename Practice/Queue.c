#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enQueue(int data){
    if (rear == MAX-1){
        printf("Queue Overflow...\n");
    }
    else{
        front = 0;
        queue[++rear] = data;
    }
}

void deQueue(){
    if (front == -1){
        printf("Queue Underflow...\n");
    }
    if(front == rear){
        front = rear = -1;
    }
    else{
        front++;
    }
}

void display(){
    if (front == -1){
        printf("Queue Empty...\n");
    }
    else{
        for (int i=front ; i<=rear ; i++){
            printf("%d\t", queue[i]);
        }
        printf("\n");
    }
}

void main(){
    display();
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    enQueue(60);
    display();
    deQueue();
    display();
    deQueue();
    display();
    deQueue();
    display();
    deQueue();
    display();
    deQueue();
    display();
    deQueue();    
}
