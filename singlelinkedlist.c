#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void printlist(struct node**, struct node**);

void pushEnd(struct node** head, struct node** tail, int new_data){   //inserting new node at head
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;
    if(*head==NULL){
        *head=new_node;
    }
    else{
        (*tail)->next = new_node;
    }
    *tail = new_node;
}
void pushFront(struct node** head, struct node** tail, int new_data){   //inserting new node at head
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;
    if(*head==NULL){
        *head=new_node;
        *tail=new_node;
    }
    else{
        new_node->next=*head;
        *head=new_node;
    }
    
}
void pushAfter(struct node** head, struct node** tail, int new_data, int after_data){
    struct node *node = *head;
    struct node* new_node=malloc(sizeof(struct node));
    new_node->data=new_data;

    while(node!=NULL){
        if(node->data==after_data){
            new_node->next=node->next;
            node->next=new_node;
            return;
        }
        else{
            node=node->next;
        }
    }
    
}
void deleteFront(struct node** head,struct node** tail){   //deleting the starting element 
    struct node *temp=*head;
    if(*head==NULL){
        printf("list is empty");
    }
    else{
        *head=(*head)->next;
        free(temp);
        temp=NULL;
    }
}

void deleteEnd(struct node** head,struct node** tail){
    struct node *temp= (*head);

    if(*head==NULL){
        printf("list is empty\n");
    }
    if((*head)->next==NULL){
        free(*head);
        *head=NULL;
        return;
    }
    else{ 
        while(temp->next!=*tail){
            temp=temp->next;   
        }
        struct node *del= temp->next;
        temp->next=NULL;
        free(del);
        del = NULL;
    }
}
void particularPosition(struct node** head,struct node ** tail,int position){
    int p = position;
    struct node *current=(*head);
    struct node *previous=(*head);
    if(*head==NULL){
        printf("list is empty \n");
    }

    if(position == 1){
        *head=(*head)->next;
        free(current);
        current = NULL;
        return;
    }
    else{
        while(position!=1 && current!=NULL){
            previous=current;
            current=current->next;
            position--;
        }
        if(current==NULL){
            printf("\nElement-%d is not there in the linked list... So no deletion occured...\n", p);
            return;
        }
        previous->next=current->next;
        free(current);
        current=NULL;
    }
}
void reverse(struct node** head, struct node** tail){
    struct node* prev=NULL;
    struct node* next=NULL;

    while(*head!=NULL){
        next=(*head)->next;
        (*head)->next=prev;
        prev=*head;
        *head=next;
    } 
    *head=prev;
}
void deleteLinkedList(struct node** head,struct node** tail){
    struct node *temp = *head;
    while(*head!=NULL){
        *head=(*head)->next;
        free(temp);
        temp=*head;
    }
    printlist(head, tail);


}

void printlist(struct node** head, struct node** tail){
    struct node *node = *head;
    while(node!=NULL){
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main(){

    struct node* head = malloc(sizeof(struct node));
    struct node* tail = malloc(sizeof(struct node));
    head = NULL;
    tail = NULL;

    int position=2;

    // Push elements to the list
    pushEnd(&head, &tail, 20);
    pushEnd(&head, &tail, 40);
    pushEnd(&head, &tail, 60);

    pushFront(&head,&tail,50);
    pushAfter(&head,&tail,30,40);

    printf("\nCreated Linked List is:\n");                      
    printlist(&head, &tail);

    deleteFront(&head,&tail);
    deleteEnd(&head,&tail);

    printf("\nLinked List after deletion 1st & last element :\n");
    printlist(&head, &tail);

    particularPosition(&head,&tail,4);
    
    printf("\nLinked List after deleting 2nd element :\n");
    printlist(&head, &tail);

    
    // reverse(&head,&tail);
    printf("\n linked list after reversing:\n");
    reverse(&head,&tail);

    printf("\nAfter deleting whole linked list:\n");
    deleteLinkedList(&head,&tail);

    return 0;
}