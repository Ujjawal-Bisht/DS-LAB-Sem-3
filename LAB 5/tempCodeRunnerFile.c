#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("!!!ERROR!!!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    }
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}


void traverseList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int n, data, position;

    // Ask for the number of elements
    printf("Enter the number of nodes: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("!!!ERROR!!!\nPlease enter a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        printf("Enter data for node %d: ", i);
        if (scanf("%d", &data) != 1) {
            printf("Invalid input\n");
            return 1;
        }
        head = insertAtEnd(head, data);
    }

    printf("Linked list before inserting new element: ");
    traverseList(head);

    // Ask for the position and value to insert at the end
    printf("Enter data : ");
    if (scanf("%d", &data) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    // Insert the new element at the end
    head = insertAtEnd(head, data);

    // Print the list after the new insertion
    printf("Linked list after inserting new element: ");
    traverseList(head);

    return 0;
}
