#include <stdio.h>
void inorderTraversal(struct node *ptr)
{
    if (ptr != NULL)
    {
        inorderTraversal(ptr->left);
        inorderTraversal(ptr->right);
        printf("%d", ptr->data);
    }
}
int main() {}