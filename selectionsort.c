#include<stdio.h>
void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void selectionsort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        int index = i;
        for(int j=i+1;j<n;j++){
            if(arr[index]>arr[j]){
                index=j;
            }
        }
        if(index!=i)
            swap(&arr[i],&arr[index]);
        
    }
}
int main(){
    int arr[]={64, 25, 12, 22, 11};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);


    printf("Sorted array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    return 0;


}
