#include <stdio.h>
#include <stdlib.h>

struct node
{
    int empno;
    char name[10];
    int salary;
    struct node *prev, *next;
};
struct node *head = NULL;
struct node *tail = NULL;
void create()
{
    struct node *newnode;
    for (int i = 0; i < 2; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the employee number:-");
        scanf("%d", &newnode->empno);
        printf("Enter the employee name:-");
        scanf("%s", newnode->name);
        printf("Enter the employee salary:-");
        scanf("%d", &newnode->salary);
        newnode->prev = NULL;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
}
void traverse()
{
    struct node *ptr = head;
    printf("Employee data:\n");
    printf("Employee No\tName\tSalary\t\n");
    while (ptr->next != NULL)
    {
        printf("%d\t%s\t%d\n", ptr->empno, ptr->name, ptr->salary);
        ptr = ptr->next;
    }
    printf("%d\t%s\t%d\n", ptr->empno, ptr->name, ptr->salary);

    printf("\n");
}
void delete()
{
    struct node *ptr = head, *previous = NULL;
    while (ptr->next != NULL)
    {
        previous = ptr;
        ptr = ptr->next;
    }
    previous->next = NULL;
    free(ptr);
}
int main()
{
    create();
    traverse();
    delete ();
    traverse();
    return 0;
}
