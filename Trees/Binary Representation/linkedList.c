#include<stdio.h>
struct node
{
    struct node * left;
    char info;
    struct node * right;
};
char nodeinfo[] = {'A','B'};
int left[] = {1,7,-1,-1,9,-1,13,-1,-1,-1};
int right[] = {2,4,6,10,-1,-1,-1,-1,-1,-1,-1};
struct node *root = NULL;
int create(int i){
    struct node *newnode;
    if(i != -1){
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->left = create(left[i]);
        newnode->info = nodeinfo[i];
        newnode->right = create(right[i]);
        return newnode;
    }
}

int main(){}