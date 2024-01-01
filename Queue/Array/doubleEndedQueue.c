#include <stdio.h>
#define MAX 10
int queue[MAX];
int front = -1, rear = -1;

void enqueue_doubleEndedQueue_front(int ele){
    if(front == 0 && rear == MAX - 1){
        printf("Overflow");
    }
    else if(front == -1 && rear == -1){
        front = rear = 0;
        queue[front] = ele;
    }
    else if(front == 0){
        front = MAX - 1;
        queue[front] = ele;
    }
    else{
        front--;
        queue[front] = ele;
    }
}

void dequeue_doubleEndedQueue(){}

int main() {}