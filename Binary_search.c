#include<stdio.h>
#include<stdlib.h>
int Binary(int arr[],int low,int high,int x){
    while(low<=high){
        int mid = (low + high) / 2;
    if (mid < low || mid > high) {
        return -1;
    }  
    if(arr[mid]==x)
        return mid;
    if(arr[mid]<x)
        low=mid+1;
    else
        high=mid-1;
    }
    return -1;

}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=3;
    int result=Binary(arr,0,n-1,x);
    printf("element found at:%d \n",result);

    return 0;
}
