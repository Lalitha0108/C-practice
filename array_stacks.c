#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int arr[MAX];
int top=-1;
void Push(int data){
    if(top==MAX-1){
        printf("stack is overflow");
    }
    top=top+1;
    arr[top]=data;

}
void Pop(){
    if(top==-1){
        printf("stack underflow");
    }
    int value=arr[top];
    top=top-1;
}
void Print(){
    int i;
    for(i=top;i>=0;i--){
        printf("%d ",arr[i]);
        // printf("\n");
    }
}
int main(){
    int data;
    Push(10);
    Push(20);
    Push(30);
    Push(40);
    Print();
    // data = Pop();

    return 0;

}