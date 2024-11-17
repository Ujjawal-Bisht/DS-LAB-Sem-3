//Deletion at the End in Doubly Linked List
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

struct node* createNode(int data){  
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void delete_form_last(struct node** headRef){
    struct node* temp = *headRef;
    if (temp == NULL) return;
    if (temp->next == NULL) {
        free(temp);
        *headRef = NULL;
        return;
    }

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
}

void print(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct node* Start(int arr[], int size) {
    struct node* head = NULL;
    struct node* tail = NULL;

    for (int i = 0; i < size; i++) {
        struct node* newNode = createNode(arr[i]);
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

int main()
{
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    struct node* head = Start(arr, n);

    printf("Original List: ");
    print(head);

    delete_form_last(&head);

    printf("After deleting the last node: ");
    print(head);

    return 0;
}
