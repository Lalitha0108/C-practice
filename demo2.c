#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void Func(char *str){
    int len=strlen(str);
    int i;
    for(i=0;i<len/2;i++){
        char temp=str[i];
        str[i]=str[len-i-1];
        str[len-1-i]=temp;
    }
     printf("%s",str);
}
int main(){
    char *str;
    char size;

    printf("enter the size of the string:");
    scanf("%hhd",&size);

    str=(char*)malloc(size+1);
    printf("Enter the string: ");
    scanf(" %[^\n]s", str); 
    Func(str);
    return 0;


}