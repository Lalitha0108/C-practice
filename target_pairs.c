#include <stdio.h>
#include<stdbool.h>
int main() {
    int n;
    int arr[30];  
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int value;
    printf("enter value:");
    scanf("%d",&value);
    

    int i,j;
    int sum=0;
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    } 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            if (arr[i] + arr[j] == value) {
                
                printf("%d %d \n ",arr[i],arr[j]);
                printf("pair found %d \n",value);
            }
        
        }
    }

    printf("No pair found");

    return 0;
}