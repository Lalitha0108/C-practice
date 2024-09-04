#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* prev;
    struct node* next;
};

void addFront(struct node** head,struct node** tail,int new_data){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;

    new_node->next=(*head);
    new_node->prev=NULL;

    if(*head==NULL){
        *tail = new_node;
    }
    else{
        (*head)->prev=new_node;
    }
    (*head)=new_node;
}
void addLast(struct node** head,struct node** tail,int new_data){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    struct node* temp=*tail;
    new_node->data=new_data;

    new_node->next=NULL;

    if(*head==NULL){
        new_node->prev=NULL;
        *head=new_node;
        *tail = new_node;
        return;
    }
    if(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->prev=temp;

    return;



}
void addAfter(struct node** head, struct node** tail,int new_data,int after_data){
    struct node* new_node=malloc(sizeof(struct node*));
    struct node* current=*head;
    struct node* next;
    struct node* prev;
    new_node->data=new_data;

    while(current!=NULL && current->data!=after_data){
        current=current->next;

    }
    if(current->next==NULL){
        current->next=new_node;
        new_node->prev=current;
        new_node->next=NULL;
        
    }
    else{
        new_node->next=current->next;
        current->next->prev = new_node;
        current->next=new_node;
        new_node->prev=current;

    }

}
void addBefore(struct node** head, struct node** tail,int new_data,int before_data){
    struct node* new_node=malloc(sizeof(struct node));
     new_node->data=new_data;
     struct node* current=*head;
     struct node* prev;
     struct node* next;

    while(current!=NULL && current->data!=before_data){
        current=current->next;
    }
    if(current==*head){
        *head=new_node;
        new_node->prev=NULL;
        new_node->next=current->prev;
        current->prev=new_node;
    }
    else
    {
        new_node->prev=current->prev;
        current->prev->next=new_node;
        next->prev=new_node;
        new_node->next=current;
    }
}
void deleteFirst(struct node** head,struct node** tail){
    struct node* temp=*head;
    *head=(*head)->next;
    free(temp);
    temp=NULL;

}
void deleteLast(struct node**head, struct node** tail){
    if((*head)==NULL){
        printf("list is empty");
    }
    if (*head == *tail) {
        free(*head);
        *head = *tail = NULL;
        return;
    }
    struct node* current = *head;
    while (current->next != NULL && current->next->next != NULL) {
        current = current->next;
    }

    // Update pointers and free the last node
    struct node* temp = current->next;  // Store the last node
    current->next = NULL;
    // *tail = current;  // Update tail pointer
    free(temp);
    temp=NULL;
}
void particularPosition(struct node** head,struct node** tail,int position){
    struct node* current=(*head);
    struct node* previous=(*head);
    if(*head==NULL){
        printf("list is empty");
        return;
    }
    if(position==1){
        *head = (*head)->next;
        (*head)->prev=NULL;
        free(current);
        return;
    }
    
    while(position!=1 && current!=NULL){
        previous=current;
        current=current->next;
        position--;
        }
        if(current==NULL){
            printf("\nElement-%d is not there in the linked list... So no deletion occured...\n",position);
            return;
        }
        if (current->next == NULL) {
        *tail = current->prev;
        (*tail)->next = NULL;  // Update next pointer for the new tail
        } 
        else 
        {  // Regular deletion in the middle
        current->prev->next = current->next;
        current->next->prev = current->prev;
        }

    // Free the deleted node
        free(current);
    
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

    addFront(&head, &tail, 20);
    addFront(&head, &tail, 30);
    addFront(&head, &tail, 40);
    addLast(&head,&tail,50);
    printf("\nCreated Linked List is:\n");
    printlist(&head, &tail);

    addAfter(&head,&tail,60,20);
    addBefore(&head,&tail,10,60);
    printf("\nCreated Linked List before deletion is:\n");
    printlist(&head, &tail);

    deleteFirst(&head,&tail);
    deleteLast(&head,&tail);
    printf("\nCreated Linked List before deletion particular position is:\n");
    printlist(&head, &tail);
    printf("\nCreated Linked List after deletion particular position is:\n");
    particularPosition(&head,&tail,2);
    printlist(&head, &tail);

    // printf("\nCreated Linked List is:\n");
    // printlist(&head, &tail);

    

    return 0;


}