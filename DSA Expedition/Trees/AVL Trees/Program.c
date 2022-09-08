#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
};

int getHeight(struct node *n)
{
    if (n == NULL)
        return 0;

    return n->height;
}

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    n->height = 1;
    return n;
}

int getBalanceFactor(struct node *n)
{
    if (n == NULL)
    {
        return 0;
    }

    return getHeight(n->left) - getHeight(n->right);
}

struct node *rightRotate(struct node *y)
{
    struct node *x = y->left;
    struct node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;

    return x;
}

struct node *leftRotate(struct node *x)
{
    struct node *y = x->left;
    struct node *T2 = y->left;

    y->left = x;
    x->right = T2;

    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;

    return x;
}

struct node *Insert(struct node *n, int key)
{
    if (n == NULL)
        return (createNode(key));

    if (key < n->data)
        n->left = Insert(n->left, key);
    else if (key > n->data)
        n->right = Insert(n->right, key);
    return n;

    n->height = 1 + max(getHeight(n->left), getHeight(n->right));
    int bf = getBalanceFactor(n);

    // LL Case
    if(bf>)
    // RR Case
    // LR Case
    // RL Case
}


int main()
{

    return 0;
}