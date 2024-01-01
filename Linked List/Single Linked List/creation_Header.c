#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
int create(int n)
{
    struct node *newnode;
    for (int i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data for node %d: ", i);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            struct node *ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newnode;
        }
    }

    
    struct node *header;
    header = (struct node *)malloc(sizeof(struct node));
    header->next = head;
    head = header;
    header->data = n;
}

int traversal()
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    create(n);

    traversal();
}