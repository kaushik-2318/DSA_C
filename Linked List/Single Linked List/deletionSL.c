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

    printf("\n");
}
int deleteBeg(){
    struct node *ptr = head;
    head = head->next;
    free(ptr);
}
int deletePosition(){
    int pos;
    printf("Enter Position:-");
    scanf("%d",&pos);
    struct node * ptr = head;
    struct node *prev;
    for (int i = 1; i < pos; i++){
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = ptr->next;
    free(ptr);
}
int deleteLast(){
    struct node * ptr = head;
    struct node * prev;
    while (ptr->next != NULL)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = NULL;
    free(ptr);
}
int main()
{
    printf("Enter No of Node:- ");
    int n;
    scanf("%d", &n);
    create(n);
    traversal();
    deleteBeg();
    traversal();
    deletePosition();
    traversal();
    deleteLast();
    traversal();
}