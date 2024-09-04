#include<stdio.h>
#include<stdlib.h>
// int main(){
//     int arr[5];
//     int n=sizeof(arr);
//     printf("enter no.of elements:");
//     scanf("%d",&n);
//     printf("enter elements:");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]%2==0){
//             printf("even elemnts are:%d \n",arr[i]);
//         }
//         else{
//             printf("odd elements are:%d \n",arr[i]);
//         }
//     }
//     return 0;
// }
int even(int arr[]){
    int arr[5];
    static int i;
    if(arr[i]%2==0){
        printf("even elements:%d",arr[i]);
    }
}
int prime(int arr[]){
    int flag;
    int n=sizeof(arr);
    static int i;
    if(n==0||n==1){
        flag=1;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
      if(flag==0)
    {
       printf("prime number %d",arr[i]);
    }
    else
    {
       printf("Not an prime number %d",arr[i]);
    }
   return 0;
} 
int main(){
    int arr[5];
    int n=sizeof(arr);
    printf("enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    

}   
