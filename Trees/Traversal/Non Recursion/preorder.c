#include <stdio.h>
void preorder(struct node *root)
{
    struct node *st[15];
    int top = -1;
    s:
    while (root != NULL)
    {
        top++;
        st[top] = root;
        printf("%c", root->data);
        root = root->left;
    }
    if (top == -1)
    {
        return;
    }
    else
    {
        root = st[top];
        top--;
        root = root->right;
        goto s;
    }
}
int main() {}