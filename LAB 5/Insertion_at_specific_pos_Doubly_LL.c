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

// Function to insert a node at a specific position
struct Node* insertAtPosition(struct Node* head, int data, int position) {
    struct Node* newNode = createNode(data);
    if (position == 1) {
        if (head != NULL) {
            head->prev = newNode;
            newNode->next = head;
        }
        return newNode;
    }
    struct Node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of range\n");
        free(newNode);
        return head;
    }
    newNode->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;
    return head;
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
    int n, data, position;

    // Ask for the number of elements
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Ask for data for each node
    for (int i = 1; i <= n; i++) {
        printf("Enter data for node %d: ", i);
        scanf("%d", &data);
        head = insertAtPosition(head, data, i);
    }

    // Print the list after all insertions
    printf("Doubly Linked List after initial insertion: ");
    traverseList(head);

    // Ask for another element to insert at a specific position
    printf("Enter data to insert: ");
    scanf("%d", &data);
    printf("Enter position to insert: ");
    scanf("%d", &position);

    // Insert the new element at the specified position
    head = insertAtPosition(head, data, position);

    // Print the list after the new insertion
    printf("Doubly Linked List after inserting at specific position: ");
    traverseList(head);

    return 0;
}
