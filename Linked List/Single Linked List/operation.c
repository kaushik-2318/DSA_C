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
int traversal()
{
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        printf("%d->", ptr->info);
        ptr = ptr->next;
    }
    printf("%d", ptr->info);

    printf("\n");
}
int sort()
{
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        struct node *ptr2 = ptr->next;
        while (ptr2 != NULL)
        {
            if (ptr->info > ptr2->info)
            {
                int temp = ptr->info;
                ptr->info = ptr2->info;
                ptr2->info = temp;
            }
            ptr2 = ptr2->next;
        }
        ptr = ptr->next;
    }
}
int reverse()
{
    struct node *ptr = head;
    struct node *prev = NULL;
    struct node *next = NULL;
    while (ptr != NULL)
    {
        next = ptr->next;
        ptr->next = prev;
        prev = ptr;
        ptr = next;
    }
    head = prev;
}
int search(int ele)
{
    struct node *ptr = head;
    int pos = 1;
    while (ptr != NULL)
    {
        if (ptr->info == ele)
        {
            printf("Element Found at %d", pos);
            return 0;
        }
        ptr = ptr->next;
        pos++;
    }
    printf("Element Not Found");
}
int main()
{
    printf("Enter No of Node:- ");
    int n;
    scanf("%d", &n);
    create(n);
    traversal();
    search(2);
    traversal();
    sort();
    traversal();
    reverse();
    traversal();
}