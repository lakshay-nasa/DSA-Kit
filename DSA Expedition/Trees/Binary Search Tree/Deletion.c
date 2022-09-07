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

void InOrder(struct node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        printf("%d ", root->data);
        InOrder(root->right);
    }
}

struct node *inOrderPredecessor(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *deleteNode(struct node *root, int value)
{
    struct node *IOP;
    if (root == NULL)
    {
        return NULL;
    }

    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    // Search for the node to be deleted
    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }

    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }

    // Deletion Strategy
    else
    {
        IOP = inOrderPredecessor(root);
        root->data = IOP->data;
        root->left = deleteNode(root->left, IOP->data);
    }

    return root;
}

int main()
{

    struct node *p = createNode(9);
    struct node *p1 = createNode(5);
    struct node *p2 = createNode(12);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(7);
    struct node *p5 = createNode(18);

    // Tree Looks Like -->
    //        9
    //       / \
    //      5   12
    //     / \    \
    //    1   7   18

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->right = p5;

    InOrder(p);
    deleteNode(p, 5);
    printf("\n");
    printf("| New Data is %d | \n", p->data);
    InOrder(p);
    return 0;
}