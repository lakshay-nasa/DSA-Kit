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


void InOrder(struct node* root){
    if(root!=NULL){
        InOrder(root->left);
        printf("%d ", root->data);
        InOrder(root->right);
    }
}

// Note -> If InOrder Traversal in Ascending order than it is BST.

int isBST(struct node* root){
    static struct node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;                   // If not BST
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;                   // If not BST
        }
        prev = root;
        return isBST(root->right);

    }

    else{
        return 1;
    }

}

int main(){

    struct node*p = createNode(9);
    struct node*p1 = createNode(5);
    struct node*p2 = createNode(10);
    struct node*p3 = createNode(1);
    struct node*p4 = createNode(7);

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

    InOrder(p);                 // Output ->  1 6 9 4 2
    printf("\n%d", isBST(p));   // Output ->  1 (If BST) 0(If not a BST)  

    return 0;
}