#include <stdio.h>
#define MAX 10
int queue[MAX];
int front = -1, rear = -1;
int enqueue()
{
    int data;
    printf("Enter the data: ");
    scanf("%d", &data);

    // Check if queue is full
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("Queue is full\n");
        return 0;
    }

    // Check if queue is empty and assign first value
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
    }

    // Handle queue circular rotation
    else if (rear == MAX - 1 && front != 0)
    {
        rear = 0;
    }

    // Enqueue the new data
    else
    {
        rear++;
    }
    queue[rear] = data;
    return 1;
}
int dequeue()
{
}
int traversal__circularQueue(){
    int i;
    if(front <= rear){
        for(i = front; i <= rear; i++){
            printf("%d ",queue[i]);
        }
    }
    else{
        for(i = front; i < MAX; i++){
            printf("%d ",queue[i]);
        }
        for(i = 0; i <= rear; i++){
            printf("%d ",queue[i]);
        }
    }
}
int main()
{
    enqueue();
    traversal();
}