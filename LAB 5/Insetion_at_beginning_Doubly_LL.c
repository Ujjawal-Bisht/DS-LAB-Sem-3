#include <stdio.h>
#include <stdlib.h>

// Define the structure for a doubly linked list node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end
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

// Function to insert a node at the beginning
struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head != NULL) {
        head->prev = newNode;
        newNode->next = head;
    }
    return newNode;
}

// Function to traverse the doubly linked list and print the elements
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
    int n, data;

    // Ask for the number of elements
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Ask for data for each node
    for (int i = 1; i <= n; i++) {
        printf("Enter data for node %d: ", i);
        scanf("%d", &data);
        head = insertAtEnd(head, data);
    }

    // Print the list after all insertions
    printf("Doubly Linked List after initial insertion: ");
    traverseList(head);

    // Ask for another element to insert at the beginning
    printf("Enter data to insert at the beginning: ");
    scanf("%d", &data);

    // Insert the new element at the beginning
    head = insertAtBeginning(head, data);

    // Print the list after the new insertion
    printf("Doubly Linked List after inserting at beginning: ");
    traverseList(head);

    return 0;
}
