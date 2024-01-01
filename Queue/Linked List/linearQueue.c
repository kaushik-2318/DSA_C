#include <stdio.h>
struct node{
    int data;
    struct node *next;
};

struct node * front = NULL;
struct node * rear = NULL;

int enqueue(){
    int data;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data:- ");
    scanf("%d",&data);
    newnode->data = data;
    newnode->next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = newnode;
    }
    else{
        rear->next = newnode;
        rear = newnode;
    }
}
int dequeue(){
    struct node *temp;
    temp = front;
    if(front == NULL){
        printf("Queue is empty");
    }
    else{
        front = front->next;
        free(temp);
    }
}
int traversal(){
    struct node *temp;
    temp = front;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }

}
int main()
{
    enqueue();
    traversal();
}