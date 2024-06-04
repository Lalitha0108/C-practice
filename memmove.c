#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "This is a test";
    char part[] = "test";

    memmove(str + 8, str, 5);  // Move "This " four characters to the right (overlapping region)

    printf("Modified string: %s\n", str);
    return 0;
}
Modified string: This is This t
