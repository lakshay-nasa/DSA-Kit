#include <stdio.h>
#include <malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n;
    n = (struct node *) malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void PreOrder(struct node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}


void PostOrder(struct node* root){
    if(root!=NULL){
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d ", root->data);
    }
}

void InOrder(struct node* root){
    if(root!=NULL){
        InOrder(root->left);
        printf("%d ", root->data);
        InOrder(root->right);
    }
}

int main(){

    struct node*p = createNode(4);
    struct node*p1 = createNode(6);
    struct node*p2 = createNode(2);
    struct node*p3 = createNode(1);
    struct node*p4 = createNode(9);

    // Tree Looks Like --> 
    //        4
    //       / \
    //      6   2
    //     / \    
    //    1   9    

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    PreOrder(p);        // Output -> 4 6 1 9 2
    printf("\n");
    PostOrder(p);       // Output ->  1 9 6 2 4
    printf("\n");
    InOrder(p);         // Output ->  1 6 9 4 2

    return 0;
}