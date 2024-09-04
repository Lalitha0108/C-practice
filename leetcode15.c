#include<stdio.h>        //leetcode multiply strings leetcoe:-43
#include<stdlib.h>
#include<string.h>

void *Func(char* str1,char* str2){
    int num1=0,num2=0;
    char* result;

   
//    if (sscanf(str1, "%d", &num1) != 1) {
//         printf("Failed to convert str1 to an integer.\n");
//         return NULL;
//     }
//     if (sscanf(str2, "%d", &num2) != 1) {
//         printf("Failed to convert str2 to an integer.\n");
//         return NULL;
//     }
    sscanf(str1, "%d", &num1);
    sscanf(str2, "%d", &num2);

    int product=num1*num2;
    // printf("%d",product);

    char buffer[32];
    sprintf(buffer,"%d",product);
    result=(char*)malloc(strlen(buffer)+1);
    strcpy(result,buffer);
    
   printf("\"%s\"\n", result);
    
    return result;
}
int main(){
    char str1[32];
    char str2[32];

    printf("enter string1:");
    scanf("%s",str1);
    
    int c;
    while ((c = getchar()) != '\n' && c != EOF);


    printf("enter string2:");
    scanf("%s",str2);
    

    char* result=Func(str1,str2);

    return 0;

}