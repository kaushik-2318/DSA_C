#include<stdio.h>
#include<malloc.h>
struct node{
    int exp;
    int coeff;
    struct node *next;
};

struct node * head = NULL;

int create(int n){
    struct node *newnode;
    for (int i = 0; i <= n; i++){
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the coefficient of x^%d:- ", i);
        scanf("%d", &newnode->coeff);
        newnode->exp = i;
        newnode->next = NULL;
        if (head == NULL){
            head = newnode;
        }
        else{
            struct node *ptr = head;
            while (ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = newnode;
        }
    }
}
void display(){
    struct node *ptr = head;
    while (ptr != NULL){
        printf("%dx^%d + ", ptr->coeff, ptr->exp);
        ptr = ptr->next;
    }
    printf("0");
}
int main(){
    printf("Enter the degree of Polyomial:- ");
    int n;
    scanf("%d", &n);
    create(n);
    display();
}