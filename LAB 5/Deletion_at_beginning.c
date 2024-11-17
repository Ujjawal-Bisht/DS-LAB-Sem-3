// Deletion at the Beginning in Singly Linked List:
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void traverse(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


struct Node* deleteAtBeginning(struct Node* head) {
    if (head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return NULL;
    }
    struct Node* temp = head;  
    head = head->next;       
    free(temp);            
    return head;
}       

int main() {
    struct Node* head = createNode(10);
    struct Node* second = createNode(20);
    struct Node* third = createNode(30);

    head->next = second;
    second->next = third;

    printf("\nBefore Deletion: ");
    traverse(head);

    head = deleteAtBeginning(head);

    printf("After Deletion at Beginning: ");
    traverse(head);

    return 0;
}