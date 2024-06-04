#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void push(struct node** top,int new_data){
    struct node* new_node=malloc(sizeof(struct node));
    new_node->data=new_data;

    if(new_node==NULL){
        printf("stack is full");
        exit(1);
    }
    new_node->next=*top;
    *top=new_node;

}
void pop(struct node** top){
    struct node* current=*top;
    if(*top==NULL){
        printf("stack is underflow");
        exit(1);
    }
    *top=current;
    *top=current->next;
    free(current);
    current=NULL;


}
void printlist(struct node** top){
    struct node *node = *top;
    while(node!=NULL){
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
int main(){
    struct node* top=malloc(sizeof(struct node));
    top=NULL;

    push(&top,20);
    push(&top,30);
    push(&top,40);
    pop(&top);

    printf("after adding elements:");
    printlist(&top);

    return 0;

}