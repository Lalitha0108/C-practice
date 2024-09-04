#include<stdio.h>
void Swapping(char num[],int len){
    // int len=sizeof(num)/sizeof(num[0]);
    for(char i=0;i<len/2;i++){
         num[i]=num[i]+num[len-1-i];
         num[len-1-i]=num[i]-num[len-1-i];
         num[i]=num[i]-num[len-1-i];
        // printf("after swapping array is:%d",num[i]);
        
    }
    for(char i=0;i<len;i++){
        printf("%d ",num[i]);
    }
}
int main(){
    char num[]={1,2,3,4,5};
    int len=sizeof(num)/sizeof(num[0]);

    Swapping(num,len);
    return 0;
}
