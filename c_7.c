#include <stdio.h>
int  main() 
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
 
    int arr[n];
 
    printf("Enter %d elements in the array: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Even numbers in the array are: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0){
            printf("%d ", arr[i]);
        }
        else{
            printf("\n odd numbers in the array are: ");
            printf("%d",arr[i]);
        }
            
    }
}