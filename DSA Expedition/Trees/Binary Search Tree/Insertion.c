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

void Insert(struct node* root, int key){
    struct node *prev = NULL;
    struct node *ptr;
    while (root!=NULL)
    {
        prev = root;
        if (key == root->data){
            printf("%d already exist. Insertion not possible.", key);
            return;
        }

        else if(key<root->data){
            root = root->left;
        }

        else{
            root = root->right;
        }
    }

    struct node* newData = createNode(key);
    if(key > prev->data){
        prev->right = newData;
    }
    else{
        prev->left = newData;
    }

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

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->right = p5;

    Insert(p, 10);
    printf("%d", p->right->left->data);
    return 0;
}