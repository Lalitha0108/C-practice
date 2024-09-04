#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[20];
    int len=sizeof(arr)/sizeof(arr[0]);
    int n;
    int sum=0;
    printf("enter no.of elsements:");
    scanf("%d",&n);

    printf("enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        
         printf("%d  \n",sum);
    }
    printf("%d",sum);
    

    return 0;


}
