#include<stdio.h>        //search in rotated sorted array leetcode:-33
int main(){
    int arr[7];
    int size=sizeof(arr)/sizeof(arr[0]);

    int target;
    int j,l=0;
    int first_three[3];
    int remaining[4];
    int second_array[7];
    printf("enter elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter target:");
    scanf("%d",&target);

    for(int i=0;i<3;i++){
        first_three[i]=arr[i];
    }
    for(int i=3;i<size;i++){
        remaining[i-3]=arr[i];
    }
    for(int i=0;i<size;i++){
        second_array[j++]=remaining[i];
    }
    for(int i=0;i<3;i++){
        second_array[j++]=first_three[i];
    }
    printf("after rotation elements are:");
    for(int l=0;l<size;l++){
        printf("%d ",second_array[l]);

    }
    printf("\n");
    for(int i=0;i<size;i++){
        if(second_array[i]==target){
            printf("index %d number is  %d\n", target, i);
            return 0;
           
        }
    }
    printf("target not found");
    return -1;
    printf("\n");
    return 0;
}