#include <stdio.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int ele){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = ele;
    newnode->prev = NULL;
    newnode->next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = newnode;
    }
    else{
        rear->next = newnode;
        newnode->prev = rear;
        rear = newnode;
    }
}
void dequeue_doubleEndedQueue(){
    struct node *temp;
    temp = front;
    if(front == NULL){
        printf("Queue is empty");
    }
    else if(front == rear){
        front = rear = NULL;
        free(temp);
    }
    else{
        front = front->next;
        front->prev = NULL;
        free(temp);
    }
}

int main() {}