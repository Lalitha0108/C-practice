#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};

    int (*ptr)[5]=&arr;
    int *p1=arr, *p2=arr, *p3=arr;


    // printf("before incrementing p=%p ,ptr=%p \n",p,ptr);

    // *p++;
    // ptr++;
    // ++p;
    // ++ptr;

    printf("p=%d\n",*++p1); // pre increment first it execute increment and next pointer
    printf("p=%d\n",*p2++); // post increment first it execute pointer and next increment
    printf("p=%d\n",*(p2++)); // post increment first it execute pointer and next increment
    printf("p=%d\n",++*p3); // post increment first it execute pointer and next increment
    // printf("p=%d\n",*(p+1));
    
    // printf("after incrementing p=%p ,ptr=%p \n",p,ptr);
    
    return 0;






}