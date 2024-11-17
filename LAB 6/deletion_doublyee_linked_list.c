//Deletion at the Beginning in Doubly Linked List

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void delete_At_Start(struct Node** headRef) {
    if (*headRef == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = *headRef;
    *headRef = (*headRef)->next;

    if (*headRef != NULL) {
        (*headRef)->prev = NULL;
    }

    free(temp);
}

void print(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct Node* Start(int arr[], int size) {
    struct Node* head = NULL;
    struct Node* tail = NULL;

    for (int i = 0; i < size; i++) {
        struct Node* newNode = createNode(arr[i]);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    return head;
}

int main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    struct Node* head = Start(arr, n);

    printf("Original List: ");
    print(head);

    delete_At_Start(&head);

    printf("After deleting the first node: ");
    print(head);

    return 0;
}

