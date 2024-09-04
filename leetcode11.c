#include<stdio.h>             //   4Sum Leetocde-18
void swap(int* a,int* b){
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
int main(){
    int arr[6];
    int size=sizeof(arr)/sizeof(arr[0]);
    int target;

    printf("enter elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter target:");
    scanf("%d",&target);
    int sum;
    int i,j;
    bubble_sort(arr,size);

    for (int i = 0; i < size - 3; i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }
        for(int j=i+1;j<size-2;j++){
            if(j>i+1 && arr[j]==arr[j-1]){
                 continue;
            }
            

            int left=i+1;
            int right=size-1;

    

            while(left<right){
                sum=arr[i]+arr[j]+arr[left]+arr[right];
                if(sum==target){
                    printf("[%d, %d, %d,%d]\n",arr[i],arr[j],arr[left],arr[right]);

                    while (left < right && arr[left] == arr[left + 1]){
                        left++;
                    } 
                    while (left < right && arr[right] == arr[right - 1]){
                        right--;

                    }
                    left++;
                    right--;
                }
                else if(sum<target){
                    left++;
                }
                else{
                    right--;
                }
            }
        } 
    }
    return 0;       
}

