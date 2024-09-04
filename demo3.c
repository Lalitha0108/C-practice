#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void Func(char *str1,char*str2){
    int i=0,j=0;
    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]!='\0';
    printf("concatenated string %s",str1);
}
int main(){
    char *str1 = malloc(20*sizeof(char));
    char *str2 = malloc(20*sizeof(char));

    int len1=strlen(str1);
    int len2=strlen(str2);
    
    str1=(char*)realloc(str1,len1+len2+1);

    printf("enter string1 : ");
    scanf(" %[^\n]s", str1);

    printf("enter string2 : ");
    scanf(" %[^\n]s", str2);

    Func(str1,str2);

    return 0;
}