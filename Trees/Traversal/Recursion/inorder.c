#include <stdio.h>
void inorderTraversal(struct node *ptr)
{
    if (ptr != NULL)
    {
        inorderTraversal(ptr->left);
        printf("%d", ptr->data);
        inorderTraversal(ptr->right);
    }
}
int main() {}