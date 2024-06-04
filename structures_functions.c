#include <stdio.h>
#include <stdlib.h>
 
typedef struct lal{
    int i;
    char c;
}L;
 
void structPrintRef(L *x){  // call by reference
    printf("Before editing : %d - %c\n", x->i, x->c);
    x->i = 20;
    x->c = 'b';
    printf("After editing  : %d - %c\n", x->i, x->c);
}
 
void structPrintVal(L x){      //call by value
    printf("Before editing : %d - %c\n", x.i, x.c);
    x.i = 20;
    x.c = 'b';
    printf("After editing  : %d - %c\n", x.i, x.c);
}
 
 
int main() {
    L l = {10,'a'};
    structPrintVal(l);
    printf("struct in main : %d - %c\n", l.i, l.c);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    structPrintRef(&l);
    printf("struct in main : %d - %c\n", l.i, l.c);
}
 