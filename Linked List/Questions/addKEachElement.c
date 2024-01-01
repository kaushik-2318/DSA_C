// Design algorithm/develop pseudocode/write C code to add a given value K to each element in the LIST.
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
int add(int n, int ele)
{
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr->info = ptr->info + ele;
        ptr = ptr->next;
    }
    ptr->info = ptr->info + ele;
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
int main()
{
    printf("Enter Number of Node:- ");
    int n;
    scanf("%d", &n);
    int ele;
    printf("Enter Number you want to ADD in each element:-");
    scanf("%d", &ele);
    create(n);
    traversal();
    add(n, ele);
    traversal();
}