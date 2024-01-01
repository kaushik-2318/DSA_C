// Design algorithm/develop pseudocode/write C code to swap nodes in a linked list without swapping data.
#include <stdio.h>
#include <malloc.h>
struct node
{
    int info;
    struct node *next;
};
struct node *head = NULL;

int create(int n)
{
    struct node *ptr;
    struct node *newnode;
    for (int i = 1; i <= n; i++)
    {
        if (newnode == NULL)
        {
            printf("OverFlow");
        }
        else
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter the Data:- ");
            scanf("%d", &newnode->info);
            newnode->next = NULL;
            if (head == NULL)
            {
                head = newnode;
                ptr = newnode;
            }
            else
            {
                ptr->next = newnode;
                ptr = newnode;
            }
        }
    }
}
int traversal(){
    struct node *ptr = head;
    while (ptr->next != NULL){
        printf("%d->", ptr->info);
        ptr = ptr->next;
    }
    printf("%d", ptr->info);
}
int main()
{
    printf("Enter No of Node:- ");
    int n;
    scanf("%d", &n);
    create(n);
    traversal();
}