#include<stdio.h>  //remove duplicates from sorted array2 leetcode 80
#include<stdlib.h>

void Removing_Duplicates(int nums[],int *size);
void Sorting_array(int nums[],int size);


int main(){
    int nums[10];
    int size=sizeof(nums)/sizeof(nums[0]);
    printf("enter elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&nums[i]);
    }

    Removing_Duplicates(nums,&size);
    Sorting_array(nums,size);

    printf("Sorted array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}
void Removing_Duplicates(int nums[],int *size){
    int count[100]={0};
    int k=0;
    int temp[10];
    for(int i=0;i<*size;i++){
        count[nums[i]]++;
        if(count[nums[i]]<=2){
            temp[k++]=nums[i];
        }
    }
    for (int i = 0; i < k; i++) {
        nums[i] = temp[i];
    }
    *size=k;
}
void Sorting_array(int nums[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(nums[j]>nums[j+1]){
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
}


