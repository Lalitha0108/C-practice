#include<stdio.h>
#include<stdlib.h>
int  func1(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    // int arr[]={1,2,3,4,5,6};
    int arr[]={1,4,5,2,6,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=3;

    int position=func1(arr, n, key);
    printf("element found at:%d \n",position);

    return 0;
}
