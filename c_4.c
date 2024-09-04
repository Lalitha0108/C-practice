#include<stdio.h>
void Reverse(int arr[],int start,int end){
    int len=sizeof(arr)/sizeof(arr[0]);
    while(start<end){
        if(len/2){
            char temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
        // int temp=arr[start];
        // arr[start]=arr[end];
        // arr[end]=temp;
        // start++;
        // end--;
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",  arr[i]);
    }
}
int main(){
    int arr[10]={ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n=sizeof(arr)/ sizeof(arr[0]);
    printArray( arr, n);
    Reverse(arr, 0, n - 1);
    printf(" \n Reversed array is \n");
    printArray( arr, n);
    return 0;

}