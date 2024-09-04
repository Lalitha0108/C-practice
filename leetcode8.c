#include<stdio.h>     //merge sorted array leetcode 88
#include<stdlib.h>

void Merge_array(int nums1[],int nums2[],int nums3[],int size1,int size2);
void Sorting_array(int nums3[],int size);

int main(){
    int nums1[5];
    int size1=sizeof(nums1)/sizeof(nums1[0]);

    int nums2[3];
    int size2=sizeof(nums2)/sizeof(nums2[0]);

    int nums3[8];
    int k=0;
    int i=0,j=0;
    printf("enter elements in the first array:");
    for(int i=0;i<size1;i++){
        scanf("%d",&nums1[i]);
    }
    printf("enter the elements in the second array:");
    for(int j=0;j<size2;j++){
        scanf("%d",&nums2[j]);
    }
    Merge_array(nums1,nums2,nums3,size1,size2);
    Sorting_array(nums3, size1 + size2);

    printf("Elements after sorting: ");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", nums3[i]);
    }
    printf("\n");
    return 0;

}

void Merge_array(int nums1[],int nums2[],int nums3[],int size1,int size2){
    int i,j,k=0;
    for(i=0;i<size1;i++){
        nums3[k++]=nums1[i];
    }
    for(j=0;j<size2;j++){
        nums3[k++]=nums2[j];
    }
    printf("elements after adding two arrays are:");
    for(int l=0;l<k;l++){
        printf("%d ",nums3[l]);
    }
    printf("\n");
}
void Sorting_array(int nums3[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(nums3[j]>nums3[j+1]){
                int temp=nums3[j];
                nums3[j]=nums3[j+1];
                nums3[j+1]=temp;

            }
        }
    }
}
