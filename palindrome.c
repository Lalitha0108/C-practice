#include<stdio.h>
#include<string.h>
void Func(char** str){
    int len=strlen(*str);
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i]){
            printf("not palindrome \n");
            return;
        }
        
    }
    printf("palindrome");



}
int main(){
    char* str="ababba";
    Func(&str);
    return 0;
}