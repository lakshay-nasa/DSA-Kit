// Recursive Method

#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

struct node *Search(struct node *root, int key)
{
    if (root == NULL)
        return NULL;

    if (root->data == key)
        return root;

    else if (root->data > key)
    {
        return Search(root->left, key);
    }
    else
    {
        return Search(root->right, key);
    }
}

int main()
{

    struct node *p = createNode(9);
    struct node *p1 = createNode(5);
    struct node *p2 = createNode(10);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(7);

    // Tree Looks Like -->
    //        9
    //       / \
    //      5   10
    //     / \    
    //    1   7

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;


    struct node* n = Search(p, 1);
    if(n!=NULL)
    {
    printf("Found: %d", n->data);
    }
    else{
        printf("Element not found");
    }
    return 0;
}