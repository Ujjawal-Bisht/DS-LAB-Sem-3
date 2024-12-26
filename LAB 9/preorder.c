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

void preorderTraversal(BSTNode *root){
    if (root)
    {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
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
    
    printf("Preorder Traversal: ");
    preorderTraversal(root);
    printf("\n");
    return 0;
}