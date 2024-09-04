#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void push(struct node** top,char value){
    struct node* new_node=malloc(sizeof(struct node));
    if(new_node==NULL){
        printf("stack is full");
        exit(1);
    }
    new_node->next=*top;
    *top=new_node;
}
int pop(struct node** top){
    struct node* current=*top;
    if(*top==NULL){
        printf("unbalanced parenthesis...");
        exit(1);
    }
    *top=current;
    *top=current->next;
    free(current);
    current=NULL;
}
void parenthesis(char str[]){
    
    struct node* top=NULL;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='('|| str[i]=='[' || str[i]=='{'){
            push(&top,str[i]);
        }
        else if(str[i]==')' || str[i]==']' || str[i]=='}'){
            char popped=pop(&top);
            if((popped=='(' && str[i]==')')|| (popped=='(' && str[i]==')') ||(popped=='(' && str[i]==')')){
                printf("unbalanced parenthesis...");
                return;
            }

        }
    }
}
int main(){
    char str[]="([])";

    parenthesis(str);
    printf("balanced parenthesis...");
    return 0;



}