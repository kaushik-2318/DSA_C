#include <stdio.h>
struct node{
    int data;
    struct node *next;
};
struct node * front = NULL;
struct node * rear = NULL;
int enqueue_circularQueue(){
    int data;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data:- ");
    scanf("%d",&data);
    newnode->data = data;
    newnode->next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = newnode;
        rear->next = front;
    }
    else{
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}
int dequeue_circularQueue(){
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
        rear->next = front;
        free(temp);
    }
}
int traversal()
{
}
int main()
{
    enqueue();
    traversal();
}