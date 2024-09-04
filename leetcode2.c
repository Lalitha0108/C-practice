#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int arr[20];
    int len=sizeof(arr)/sizeof(arr[0]);
     
    printf("enter how many elements:");
    scanf("%d",&len);

    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    printf("enter target:");
    scanf("%d",&target);

    for(int i=0;i<len;i++){
        if(arr[i]==target){
            printf("%d",i);
        }
        else if(arr[i]>target){
            printf("%d",i);
            return 0;
        }

    }
    return 0;
}