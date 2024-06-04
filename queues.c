#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void enqueue(struct node** head,struct node** tail,int new_data){
    struct node* new_node=malloc(sizeof(struct node));
    new_node->data= new_data;
    if(new_node==NULL){
        printf("queue overflow");
        return;
    }
    if(*head==NULL){
        *head=new_node;
        *tail=new_node;
        printf("pushed %d \n", new_data);
        return;
    }
    (*tail)->next=new_node;
    *tail=new_node;
    printf("pushed %d \n", new_data);
}
void dequeue(struct node** head,struct node** tail){
    struct node* current=*head;
    if(current==NULL){
        printf("queue is empty\n");
        return;
    }

    if(*head==*tail){
        *tail=NULL;
    }

    *head=(*head)->next;
    printf("popped %d \n", current->data);
    free(current);
    current=NULL;

}

void printlist(struct node** head,struct node** tail){
    struct node* node=*head;
    

    while(node!=NULL){
        printf("%d ->", node->data);
        node=node->next;
    }
    printf("NULL\n");
}
void circularenqueue(struct node** head, struct node** tail,int new_data){
    struct node* new_node=malloc(sizeof(struct node));
    new_node->data=new_data;
    if(new_node==NULL){
        printf("queue is full");
    }
    if(*head==NULL){
        *head=new_node;
        *tail=new_node;
        (*tail)->next=*head;
        return;
    }
    (*tail)->next=new_node;
    new_node->next=*head;
    *tail=new_node;
    return;

}
void circulardequeue(struct node** head,struct node** tail){
    struct node* current=*head;
    if(current==NULL){
        printf("queue is empty:");
        return;
    }
    if(*head==*tail){
        *tail=NULL;
        *head=NULL;
    }
    else{
        *head=(*head)->next;
        (*tail)->next=*head;
    }
    free(current);
    current=NULL;


}
void printList2(struct node** head,struct node** tail) {  
    if((*head) == NULL){
        printf("\nQueue is empty... \n");
        return;
    }
    
    struct node* current = *head;
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != *head && current != NULL);  // Loop until we reach the head again
    printf("\n");
}
int main(){
    struct node* head= malloc(sizeof(struct node));
    struct node* tail=malloc(sizeof(struct node));
    head=NULL;
    tail=NULL;
    enqueue(&head,&tail,20);
    enqueue(&head,&tail,30);
    enqueue(&head,&tail,40);
    printf("after pushinf elements queue is:\n");
    printlist(&head,&tail);

    dequeue(&head,&tail);
    // dequeue(&head,&tail);
    // dequeue(&head,&tail);
    // dequeue(&head,&tail);
    printf("after popped elements queue is:\n");
    printlist(&head,&tail);

    circularenqueue(&head,&tail,70);
    printf("after pushing elements queue is:\n");
    printList2(&head,&tail);

    circulardequeue(&head, &tail);
    circulardequeue(&head, &tail);
    circulardequeue(&head, &tail);

    printf("after popped elements queue is:\n");
    printList2(&head,&tail);

    return 0;


}
O/P:-
  pushed 20 
pushed 30 
pushed 40 
after pushinf elements queue is:
20 ->30 ->40 ->NULL
popped 20 
after popped elements queue is:
30 ->40 ->NULL
after pushing elements queue is:
30 -> 40 -> 70 -> 
after popped elements queue is:

Queue is empty... 
