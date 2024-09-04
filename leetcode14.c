#include<stdio.h>       //find first and last position of element in sorted array leetcode:-34
int main(){
    int arr[6];
    int size=sizeof(arr)/sizeof(arr[0]);
    int target;
    int found=0;

    printf("enter elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter target:");
    scanf("%d",&target);

    printf("target found at [");
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            if (found>0){
                printf(",");
            }
            printf("%d",i);
            found=1;
            continue;
        }
        
    }
    if(found==1){
        printf("] \n");
    }
    if(found==0){
        printf("[-1 -1]");
        printf("] \n");
    }

    
    printf("\n");
    return 0;
}