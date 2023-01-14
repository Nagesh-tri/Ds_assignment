#include <stdio.h>
#include <stdlib.h>

struct bin_tree{
    int data;
    struct bin_tree * right,*left;

}
typedef struct bin_tree node;
void insert(node* tree,int val){
    node *temp=NULL;
    if(! (*tree)){
        temp=(node*)malloc(sizeof(node));
        temp->left=temp->right=NULL;
        temp->data=val;
        *tree=temp;
        return;
    }
}