// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int nums[10];
//     int size=sizeof(nums)/sizeof(nums[0]);
   
//     int i;

//     printf("enter elements:");
//     for(int i=0;i<size;i++){
//         scanf("%d ",&nums[i]);

//     }

//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-i-1;j++){
//             if(nums[j]>nums[j+1]){
//                 int temp=nums[j];
//                 nums[j]=nums[j+1];
//                 nums[j+1]=temp;
//             }

//         }
//     }
//     printf("After sorting, the elements in the array are:\n");
//     for (i = 0; i < size; i++) {
//         printf("%d ", nums[i]);
//     }
//     printf("\n");
//     return 0;
// }
#include <stdio.h>  //sort colours leetcode 78
#include <stdlib.h>

int main() {
    int nums[10];
    int size = sizeof(nums) / sizeof(nums[0]);
    int i, j;

    printf("Enter 10 elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];  
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    printf("After sorting, the elements in the array are:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
