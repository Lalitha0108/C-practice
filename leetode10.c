#include<stdio.h>                  //3 sum closest leetcode:-16
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
int main(){
    int arr[4];
    int size=sizeof(arr)/sizeof(arr[0]);
    int target;

    printf("enter elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter target:");
    scanf("%d",&target);

    int triplets[100][3];
    int tripletcount = 0;
    int sum;

    bubble_sort(arr,size);

    for(int i=0;i<size-2;i++){
        int left=i+1;
        int right=size-1;

        while(left<right){
            sum=arr[i]+arr[left]+arr[right];
            if(sum-target==target){
                triplets[tripletcount][0]=arr[i];
                triplets[tripletcount][1]=arr[left];
                triplets[tripletcount][2]=arr[right];
                tripletcount++;
            }
            left++;
            right--;
        }
    }
    if (tripletcount == 0) {
        // printf("No triplets sum to zero.\n");
        printf(" sum is:%d",sum);
    } else {
        // printf("Triplets that sum to zero are:\n");
        printf("the sum is:");
        for (int i = 0; i < tripletcount; i++) {
            // printf("[%d, %d, %d]\n", triplets[i][0], triplets[i][1], triplets[i][2]);
            printf("%d",sum);
        }
    }
    return 0;

}