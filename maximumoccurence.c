#include <stdio.h>
#include<string.h>

int main()
{
    char str[256];
    printf("enter the string:");
    scanf("%s",str);
    int len=strlen(str);
    char maxchar;
    int maxcount=0;
    int count[256]={0};
    for(int i=0;i<len;i++){
        count[str[i]]++;
        if(count[str[i]]>maxcount){
            

            count[str[i]]==maxchar;
            maxchar=str[i];
            
        }
    }
    printf("the highest occurence number is: %c ",maxchar);
    return 0;
}
