#include<stdio.h>  //3sum Leetcode-15
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubble_sort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
int main() {
    int arr[6];
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Enter elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    bubble_sort(arr, size);

    int triplets[100][3];
    int tripletcount = 0;

    for (int i = 0; i < size - 2; i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }

        int left=i+1;
        int right=size-1;

        while(left<right){
            int sum=arr[i]+arr[left]+arr[right];

            if(sum==0){
                triplets[tripletcount][0]=arr[i];
                triplets[tripletcount][1]=arr[left];
                triplets[tripletcount][2]=arr[right];
                tripletcount++;

                while (left < right && arr[left] == arr[left + 1]){
                    left++;
                } 
                while (left < right && arr[right] == arr[right - 1]){
                    right--;

                }
                left++;
                right--;
                
            }
            else if(sum<0){
                left++;
            }
            else{
                right--;

            }
        }
    }
    if (tripletcount == 0) {
        printf("No triplets sum to zero.\n");
    } else {
        printf("Triplets that sum to zero are:\n");
        for (int i = 0; i < tripletcount; i++) {
            printf("[%d, %d, %d]\n", triplets[i][0], triplets[i][1], triplets[i][2]);
        }
    }
    return 0;
    
}