#include <stdio.h>
void postorder(struct node *ptr)
{
    struct node *st[15];
    int top = -1;
s:
    while (ptr != NULL)
    {
        top++;
        st[top] = ptr;
        ptr = ptr->left;
    }
    if (ptr == NULL && top == -1)
    {
        return;
    }
    else
    {
        if (ptr != NULL)
        {
            ptr = st[top];
            top--;
            printf("%c", ptr->data);
            ptr = ptr->right;
            goto s;
        }
    }
}
int main() {}