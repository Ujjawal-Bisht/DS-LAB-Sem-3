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

struct Node* deleteAtPosition(struct Node* head, int position) {
    if (head == NULL) return NULL;
    
    struct Node* temp = head;
    
    if (position == 1) {
        head = head->next;
        free(temp);
        return head;
    }
    
    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) return head;

    struct Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;

    return head;
}

int main() {
    struct Node* head = createNode(10);
    struct Node* second = createNode(20);
    struct Node* third = createNode(30);
    struct Node* fourth = createNode(40);

    head->next = second;
    second->next = third;
    third->next = fourth;

    printf("Before Deletion: ");
    traverse(head);

    int position;
    printf("Enter the position to delete: ");
    scanf("%d", &position);

    head = deleteAtPosition(head, position);

    printf("After Deletion at Position %d: ", position);
    traverse(head);

    return 0;
}