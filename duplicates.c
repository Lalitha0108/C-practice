#include<stdio.h>
int main(){
    int arr[20];
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("enter how many elements:");
    scanf("%d",&len);

    printf("enter elements:");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<len-1;k++){
                    arr[k]=arr[k+1];
                }
                   len--;
                }
        }
    }
    printf("remaining elemnts are:");
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    return 0;


}