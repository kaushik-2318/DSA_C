#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *left;
    int data;
    struct node *right;
};
struct node *root = NULL;
struct node *ptr = NULL;
void create()
{
    // int n;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->left = NULL;
    newnode->right = NULL;

    if (root == NULL)
    {
        root = newnode;
    }
    else
    {
        ptr = root;
        while (ptr != NULL)
        {
            if (newnode->data < ptr->data)
            {
                if (ptr->left == NULL)
                {
                    ptr->left = newnode;
                    break;
                }
                else
                {
                    ptr = ptr->left;
                }
            }
            else
            {
                if (ptr->right == NULL)
                {
                    ptr->right = newnode;
                    break;
                }
                else
                {
                    ptr = ptr->right;
                }
            }
        }
    }
}