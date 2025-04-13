#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *left;
    struct Node *right;
} node_t;

node_t* createTreeNode(int value) {
    node_t *tree;
    tree = (node_t*)malloc(sizeof(node_t));
    tree->value = value;
    tree->left = tree->right = NULL;
    return tree;
}

void inorderTraversal(node_t *root) {
    if (root == NULL) return ;
    inorderTraversal(root->left);
    printf("%d ", root->value);
    inorderTraversal(root->right);
}

void preorderTraversal(node_t *root) {

}

int main(void) {
    node_t *root = createTreeNode(1);
    root->left = createTreeNode(2);
    root->right = createTreeNode(3);
    root->left->left = createTreeNode(4);
    root->left->right = createTreeNode(5);
    root->right->right = createTreeNode(6);

    inorderTraversal(root);
    printf("\n");

    free(root);
    return 0;
}

