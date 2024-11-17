#include <stdio.h>
#include <stdlib.h>

// Define doubly linked list
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to print elements of doubly linked list
void traverseList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Create doubly linked list
struct Node* createList(int n) {
    if (n <= 0) {
        return NULL;
    }

    int data;
    printf("Enter data for node 1: ");
    scanf("%d", &data);
    struct Node* head = createNode(data);
    struct Node* temp = head;

    for (int i = 2; i <= n; ++i) {
        printf("Enter data for node %d: ", i);
        scanf("%d", &data);
        struct Node* newNode = createNode(data);
        temp->next = newNode;
        newNode->prev = temp;
        temp = newNode;
    }

    return head;
}

int main() {
    int n;
    printf("Enter the number of nodes you want to enter: ");
    scanf("%d", &n);

    struct Node* head = createList(n);

    printf("Doubly Linked List: ");
    traverseList(head);

    return 0;
}
