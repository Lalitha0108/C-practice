#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void addFront(struct node** head,struct node** tail, int new_data) {
    // Allocate memory for the new node
    struct node* new_node = malloc(sizeof(struct node));
    new_node->data = new_data;
    if (*head == NULL) {
        *head = new_node;
        *tail=new_node;
        new_node->next = *head;  // In a circular list, new node points back to itself
    } else {
        // Find the last node (the node pointing to the current head)
        struct node* current = *head;
        while (current->next != *head) {
            current = current->next;
        }

        // Insert the new node at the front (update last node's next and head pointer)
        new_node->next = *head;
        current->next = new_node;
        *head = new_node;
    }
}
void addLast(struct node** head, struct node** tail,int new_data){
    struct node* new_node=malloc(sizeof(struct node*));
    new_node->data=new_data;
    struct node* current=*tail;

    if(*head==NULL){
        *head=new_node;
        *tail=new_node;
        new_node->next=(*head);

    }
    else{
        current->next=new_node;
        new_node->next=*head;
        *tail=new_node;


    }
}
void addAfter(struct node** head,struct node** tail,int new_data,int after_data){
    struct node* new_node=malloc(sizeof(struct node*));
    new_node->data=new_data;
    struct node* current=(*head);

    do{
        if(current->data==after_data){
            new_node->next=current->next;
            current->next=new_node;
            if(current->data==after_data){
                *tail=(*tail)->next;
            }
            return;    
        }
        current=current->next;
    }while(current!=*head);
    
    // while(current!=*tail){
    //     if(current->data==after_data){
    //         new_node->next=current->next;
    //         current->next=new_node;
    //         return;    

    //     }
    //     current=current->next;
    // }
    // if(current->data==after_data){
    //     new_node->next=current->next;
    //     current->next=new_node;
    //     *tail=(*tail)->next;
    //     return;
    // }
    printf("%d not found",after_data);
}

void addBefore(struct node** head,struct node** tail,int new_data,int before_data){
    struct node* new_node=malloc(sizeof(struct node*));
    new_node->data=new_data;
    struct node* current=(*head)->next;
    struct node* previous=*head;
    if(before_data==(*head)->data){
        new_node->next=*head;
        (*tail)->next=new_node;
        *head=new_node;
    }
    while(current!=*head){
        if(current->data==before_data){
            previous->next=new_node;
            new_node->next=current;
            return;
        }
        current=current->next;
        previous=previous->next;
    }
}
void deleteFront(struct node** head, struct node** tail){
    struct node* current =*head;
    if(*head==NULL){
        printf("list is empty");
    }
    else{
        (*tail)->next=current->next;
        (*head)=(*head)->next;
        free(current);
        current=NULL;
        return;

    }
}
void deleteLast(struct node** head,struct node** tail){
    struct node* current=*head;
    struct node* temp=*tail;
    if(*head==NULL){
        printf("list is empty");
    }
    while(current->next!=*tail){
        current=current->next;
    }
    current->next=temp->next;
    (*tail)=current;
    free(temp);
    temp=NULL;

}
void deleteInter(struct node** head,struct node** tail,int position){
    struct node* current=(*head);
    struct node* previous=(*head);

    if(*head==NULL){
        printf("list is empty");
    }
    if(position==1){
        *head=(*head)->next;
        (*tail)->next=*head;
        free(current);
        current=NULL;
        return;
    }
    while(position!=1 && current!=NULL){
        previous=current;
        current=current->next;
        position--;
    }
    if(current==*tail){
        *tail=previous;
    }
    previous->next=current->next;
    free(current);
    current=NULL;
}


void printList(struct node** head,struct node** tail) {  
    struct node* current = *head;
        
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != *head);  // Loop until we reach the head again
    printf("\n");
}

int main() {
    struct node* head = NULL;
    struct node* tail = NULL;
    addFront(&head,&tail, 20);      // 20 
    addFront(&head,&tail, 40);      // 40 -> 20
    addFront(&head,&tail,50);       // 50 -> 40 -> 20 
    addLast(&head,&tail,60);        // 50 -> 40 -> 20 -> 60
    addAfter(&head,&tail,80,60);    // 50 -> 40 -> 20 -> 60 -> 80
    addBefore(&head,&tail,90,60);   // 50 -> 40 -> 20 -> 90 -> 60 -> 80 -> 
    deleteFront(&head,&tail);       // 40 -> 20 -> 90 -> 60 -> 80 
    deleteLast(&head,&tail);        // 40 -> 20 -> 90 -> 60
    deleteInter(&head,&tail,4);     // 40 -> 20 -> 90
        
    printf("After adding elements: \n");
    printList(&head,&tail);

    return 0;
}
O/P:-
After adding elements: 
40 -> 20 -> 90 -> 
