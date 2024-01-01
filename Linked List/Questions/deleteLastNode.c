// Design algorithm/develop pseudocode/write C code to deletes the last node from the LIST
#include<stdio.h>
#include<malloc.h>
struct node
{
    // struct node * prev;             //DL, DCL
    int info;
    struct node * next;
};
struct node * head = NULL;
// struct node * tail = NULL;          //DL

// int create_SL(int ele){
//     struct node * newnode, *ptr = head;
//     newnode = (struct node *)malloc(sizeof(struct node));
//     newnode->info = ele;
//     newnode->next = NULL;
//     if (head == NULL)
//     {
//         head = newnode;
//     }
//     else{
//         while (ptr->next != NULL)
//         {
//             ptr = ptr->next;
//         }
//         ptr->next = newnode;
//     }
// }

// int create_DL(int ele){
//     struct node * newnode;
//     newnode = (struct node *)malloc(sizeof(struct node));
//     newnode->info = ele;
//     newnode->next = NULL;
//     newnode->prev = NULL;
//     if(head == NULL){
//         head = newnode;
//         tail = newnode;
//     }
//     else{
//         tail->next =  newnode;
//         newnode->prev = tail;
//         tail = newnode;
//     }
// }
int create_CL(int ele){
    struct node * newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    struct node * ptr;
    newnode->info = ele;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
        // ptr = newnode;
    }
    else{
        while (ptr->next != NULL)
        {
        ptr = ptr->next;
        }
        ptr->next = newnode;
    }
    ptr->next = head;
}
int traversal(){
    struct node *ptr = head;
    while (ptr->next != NULL){
        printf("%d->", ptr->info);
        ptr = ptr->next;
    }
    printf("%d", ptr->info);
    printf("\n");
}
int deleteLastNode_SL(){
    struct node * ptr = head;
    struct node * prev = NULL;
    while(ptr->next != NULL){
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = ptr->next;
    free(ptr);
}
int deleteLastNode_DL(){
    // struct node *ptr = head;
    // struct  node *prev;
    // while (head != NULL)
    // {
    //     prev = ptr;
    //     ptr = ptr->next;
    // }
    // prev->next = ptr->next;
    // free(ptr);

    // struct node *ptr = tail;
    // struct node *prev = tail->prev;
    // prev->next = ptr->next;
    // free(ptr);   
}
int deleteLastNode_CL(){}
int deleteLastNode_DCL(){}
int main(){
    int n;
    printf("Enter No. of Node:- ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
    int ele;
        printf("Enter element:- ");
        scanf("%d",&ele);
        // create_SL(ele);
        // create_DL(ele);
        create_CL(ele);
    }
    traversal();
    // deleteLastNode_SL();
    // deleteLastNode_DL();
    // deleteLastNode_CL();
    traversal();
}