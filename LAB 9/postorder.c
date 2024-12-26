#include <stdio.h>
#include <stdlib.h>

typedef struct BSTNode{
    int data;
    struct BSTNode *left;
    struct BSTNode *right;
} BSTNode;

BSTNode *createNode(int data){
    BSTNode *newNode = (BSTNode *)malloc(sizeof(BSTNode));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

BSTNode *insertNode(BSTNode *root, int data){
    if (root == NULL)
        return createNode(data);
    if (data < root->data)
        root->left = insertNode(root->left, data);
    else
        root->right = insertNode(root->right, data);
    return root;
}

void postorderTraversal(BSTNode *root){
    if (root){
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

int main(){
    BSTNode *root = NULL;

    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 70);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 60);
    root = insertNode(root, 80);

    printf("Postorder Traversal: ");
    postorderTraversal(root);
    printf("\n");
    return 0;
}