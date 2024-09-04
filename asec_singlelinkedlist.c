#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void Push(struct node** head, struct node** tail, int new_data) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head == NULL || new_data < (*head)->data) {  
        *head = new_node;
    } else {
        struct node* temp = *head;
        while (temp->next != NULL && temp->next->data < new_data) {
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }
}

void PrintList(struct node** head) {
    struct node* node = *head;
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct node* head = NULL;  
    struct node* tail = NULL;  

    Push(&head, &tail, 20);
    Push(&head, &tail, 40);
    Push(&head, &tail, 70);
    Push(&head, &tail, 50);
    Push(&head, &tail, 30);

    printf("\nCreated Linked List is:\n");
    PrintList(&head);

    return 0;
}
