#include<stdio.h>
#include <malloc.h>
struct node{
    struct node *next;
    int data;
    struct node *prev;
};
struct node *head = NULL;
struct node *tail = NULL;
int create(int n){
    struct node *newnode;
    for (int i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data:- ");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else{
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
}
int traverse_fwd(){
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        printf("%d->",ptr->data);
        ptr = ptr->next;
    }
    printf("%d ",ptr->data);
    printf("\n");
}
int traverse_bwd(){
    struct node *ptr = tail;
    while (ptr->prev != NULL)
    {
        printf("%d<-",ptr->data);
        ptr = ptr->prev;
    }
    printf("%d ",ptr->data);
    printf("\n");
}
int main(){
    printf("Enter Number of Node:- ");
    int n;
    scanf("%d",&n);
    create(n);
    traverse_fwd();
    traverse_bwd();
}