#include<stdio.h>
#include<stdlib.h>
void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubblesort(int arr[],int n){
    int i,j;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[]={2,6,3,4,8,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    bubblesort(arr,n);

    
    printf("Sorted array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    return 0;

}
