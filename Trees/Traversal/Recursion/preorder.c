#include <stdio.h>
void inorderTraversal(struct node *ptr)
{
    if (ptr != NULL)
    {
        printf("%d", ptr->data);
        inorderTraversal(ptr->left);
        inorderTraversal(ptr->right);
    }
}
int main() {}