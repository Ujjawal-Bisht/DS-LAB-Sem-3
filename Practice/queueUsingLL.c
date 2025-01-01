#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int data;
    struct Queue* next;
};

struct Queue* front = NULL;
struct Queue* rear = NULL;

void enqueue(int data) {
    struct Queue* new_node = (struct Queue*)malloc(sizeof(struct Queue));
    new_node->data = data;
    new_node->next = NULL;
    if (front == NULL) {
        front = rear = new_node;
    } else {
        rear->next = new_node;
        rear = new_node;
    }
}

void dequeue() {
    if (front == NULL) {
        printf("Queue Underflow\n");
        return;
    }
    struct Queue* temp = front;
    front = front->next;
    free(temp);
    if (front == NULL) {
        rear = NULL;
    }
}

void display() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    struct Queue* temp = front;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    display();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    
    return 0;
}