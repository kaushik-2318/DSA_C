#include <stdio.h>
#define MAX 10
int queue[MAX];
int front = -1, rear = -1;
int enqueue()
{
    int data;
    if (rear == MAX - 1)
    {
        printf("OverFlow");
        return 0;
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("Enter the data:- ");
            scanf("%d", &data);
            if (rear == -1 && front == -1)
            {
                front = rear = 0;
                queue[rear] = data;
            }
            else
            {
                rear++;
                queue[rear] = data;
            }
        }
    }
}
int dequeue()
{
    if (front == -1)
    {
        printf("UnderFlow");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}
int traversal()
{
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
}
int main()
{
    enqueue();
    traversal();
}