#include <stdio.h>
void postorder(struct node *root)
{
    struct node *st[15];
    int top = -1;
s:
    while (root != NULL)
    {
        top++;
        st[top] = root;
        root = root->left;
    }
    if (root == NULL && top == -1)
    {
        return;
    }
    else
    {
        if (root != NULL)
        {
            root = st[top];
            top--;
            root = root->right;
            printf("%c", root->data);
            goto s;
        }
    }
}
int main() {}