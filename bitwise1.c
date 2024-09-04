#include<stdio.h>
#include<stdlib.h>
int main(){
    unsigned char byte;
    printf("enter unsigned char byte:");
    scanf("%hhx",&byte);

    unsigned char first,last,swapped;

    first=byte & 0xF0;
    first>>=4;
    last=byte & 0x0F;
    last<<=4;

    swapped=first | last;

    printf("original byte 0x%x \n",byte);
    printf("after swapping 0x%x \n",swapped);

    return 0; 
}