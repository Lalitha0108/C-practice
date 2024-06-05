#include<stdio.h>
#include<stdlib.h>
int main(){
    char str[100];
    printf("enter elements:\n");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        char c=str[i];
        if(c>'a'&& c<'z'){
            int ascii_value=c+10;
            if(ascii_value>'z'){
                // c = (9 - ('z'-c)) + 'a';
                c = (ascii_value - 'z') % 26 + 'a'-1;
            }
            else{
                c = c+10;
            }

        }
        else if(c>'A'&& c<'Z'){
            int ascii_value=c+10;
            if(ascii_value>'Z'){
                c = (ascii_value - 'Z') % 26 + 'A'-1;
            }
            else{
                c=c+10;
            }

        }
        str[i]=c;
        
    
    }
    printf("\n%s\n",str);
    // printf("\n%d\n",('z'-'w'));

    return 0;

}

/*
QWEqwe
AGOago
*/
