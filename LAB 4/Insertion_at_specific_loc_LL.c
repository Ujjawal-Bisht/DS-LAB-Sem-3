#include <stdio.h>
#include <stdlib.h>

// Define the structure for a singly linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at a specific position
struct Node* insertAtPosition(struct Node* head, int data, int position) {
    struct Node* newNode = createNode(data);
    if (position == 1) {
        newNode->next = head;
        return newNode;
    }
    struct Node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("!!!Out of Range ERROR!!!\n");
        free(newNode);
        return head;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

// Function to traverse the singly linked list and print the elements
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
    printf("Enter the number of nodes u want to enter: ");
    scanf("%d", &n);

    // Ask for data for each node
    for (int i = 1; i <= n; i++) {
        printf("Enter data for node %d: ", i);
        scanf("%d", &data);
        head = insertAtPosition(head, data, i);
    }

    // Print the list after all insertions
    printf("Linked list before inserting new nodes: ");
    traverseList(head);

    // Ask for another element to insert at a specific position
    printf("Enter data which u want to insert: ");
    scanf("%d", &data);
    printf("Enter position where u want to insert: ");
    scanf("%d", &position);

    // Insert the new element at the specified position
    head = insertAtPosition(head, data, position);

    // Print the list after the new insertion
    printf("Linked List after inserting new element: ");
    traverseList(head);

    return 0;
}
