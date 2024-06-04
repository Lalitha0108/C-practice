#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* prev;
    struct node* next;
};
void addFront(struct node** head,struct node** tail,int new_data){
    struct node* new_node=malloc(sizeof(struct node*));
    new_node->data=new_data;
    if(*head==NULL){
        *head=new_node;
        *tail=new_node;
        (*head)->prev = *tail;
        (*tail)->next = *head;
        return;
    }
    new_node->next=*head;
    (*head)->prev=new_node;
    (*tail)->next=new_node;
    *head=new_node;
    
}
void addLast(struct node** head,struct node** tail,int new_data){
    struct node* new_node=malloc(sizeof(struct node*));
    new_node->data=new_data;
    if(*head==NULL){
        *head=new_node;
        *tail=new_node;
        (*head)->prev = *tail;
        (*tail)->next = *head;
        return;
    }
    new_node->next=*head;
    new_node->prev=*tail;
    (*tail)->next=new_node;
    (*head)->prev=new_node;
    *tail=new_node;
    return;
}
void addAfter(struct node** head,struct node** tail,int new_data,int after_data){
    struct node* new_node=malloc(sizeof(struct node*));
    new_node->data=new_data;
    struct node* current=(*head);
    
    while(current->data!=after_data){
        if(current->next==*head){
            printf("%d does not exist...", after_data);
            return;
        }
        current=current->next;
    }
    new_node->prev=current;
    new_node->next=current->next;
    current->next=new_node;
    new_node->next->prev=new_node;
    *tail = new_node;
}
void deleteFirst(struct node** head,struct node** tail){
    struct node* current=(*head);
    struct node* temp=(*tail);
    (*head)=(*head)->next;
    (*head)->prev=*tail;
    (*tail)->next=*head;
    free(current);
    current=NULL;
    return;
}
void deleteLast(struct node** head,struct node** tail){
    // struct node* current=(*head);
    struct node* temp=(*tail);
    *tail=(*tail)->prev;
    (*tail)->next=*head;
    (*head)->prev= *tail;
    free(temp);
    temp=NULL;
}
void deleteinter(struct node** head,struct node** tail,int position){
    struct node* current=*head;
    struct node* prev;
    if(*head==NULL){
        printf("list is empty");
    }
    if(position ==1){
        (*head)=(*head)->next;
        (*tail)->next=(*head)->prev;
        (*head)->prev=*tail;
        free(current);
        current=NULL;
    }
    while(position!=1){
        prev=current;
        current=current->next;
        position--;
    }
    if (current == *tail) {
        *tail = prev;
        (*tail)->next = *head;  // Update next pointer of the new tail
        (*head)->prev = *tail;  // Update previous pointer of the head
    } else {
        // Handle deleting a node in the middle
        prev->next = current->next;
        current->next->prev = prev;
    }

}
void printList1(struct node** head,struct node** tail) {  
    struct node* current = *head;
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != *head);  // Loop until we reach the head again
    printf("\n");
}

void printList2(struct node** head,struct node** tail) {  
    struct node* current = *tail;
    do {
        printf("%d -> ", current->data);
        current = current->prev;
    } while (current != *tail);  // Loop until we reach the head again
    printf("\n");
}


int main(){
    struct node* head = NULL;
    struct node* tail = NULL;

    addFront(&head,&tail,20);   // 20
    addFront(&head,&tail,30);   // 30 -> 20
    addFront(&head,&tail,40);   // 40 -> 30 -> 20
    addLast(&head,&tail,50);    // 40 -> 30 -> 20 -> 50
    addAfter(&head,&tail,60,50);// 40 -> 30 -> 20 -> 60 -> 50
    printf("After adding elements correct order : \n");
    printList1(&head,&tail);
    deleteFirst(&head,&tail);
    deleteLast(&head,&tail);
    deleteinter(&head,&tail,2);
    printf("After adding elements correct order : \n");
    printList1(&head,&tail);
    printf("After adding elements reversed order : \n");
    printList2(&head,&tail);

}
O/P:-
After adding elements correct order : 
40 -> 30 -> 20 -> 50 -> 60 -> 
After adding elements correct order : 
30 -> 50 -> 
After adding elements reversed order : 
50 -> 30 ->
