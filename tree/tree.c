#include <stdio.h>
#include <stdlib.h>

typedef struct treenode {
    int value;
    struct treenode* left;
    struct treenode* right;
} treenode;

treenode* createTreeNode(int value) {
    treenode *tree;
    tree = (treenode*)malloc(sizeof(treenode));
    tree->value = value;
    tree->left = NULL;
    tree->right = NULL;
    return tree;
}

void preorder(treenode *root) {
    if(root != NULL) {
        printf("%d\n", root->value);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(treenode *root) {

}

int main() {
    treenode *p = createTreeNode(4);
    treenode *p1 = createTreeNode(1);
    treenode *p2 = createTreeNode(6);
    treenode *p3= createTreeNode(5);
    treenode *p4= createTreeNode(2);

    // Finally tree looks like this 
    //      4
    //     / \
    //    1   6
    //   / \
    //  5   2

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    preorder(p);

    return 0;
}
