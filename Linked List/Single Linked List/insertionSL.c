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
int insertBeg(){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the Data:- ");
    scanf("%d", &newnode->info);
    newnode->next = head;
    head = newnode;    
}
int insertPosition(){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the Data:- ");
    scanf("%d", &newnode->info);
    printf("\nEnter Position You want to add Node:-");
    int pos;
    scanf("%d", &pos);
    struct node *ptr = head;
    for (int i = 1; i < pos-1; i++){
        ptr = ptr->next;
    }
    newnode->next = ptr->next;
    ptr->next = newnode;
}
int insertLast(){
    struct node * newnode;
    newnode = (struct node *) malloc(sizeof(struct node));
    printf("\nEnter the Last Data:- ");
    scanf("%d", &newnode->info);
    newnode->next = NULL;
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newnode;
}
int main()
{
    printf("Enter No of Node:- ");
    int n;
    scanf("%d", &n);
    create(n);
    traversal();
    insertBeg();
    traversal();
    insertPosition();
    traversal();
    insertLast();
    traversal();
}