#include<stdio.h>
int main (){
    int var=10;
    int *ptr=&var;
    int **ptr1=&ptr;

    printf("%p- %p\n",ptr,ptr1);
    printf("%d - %p\n",*ptr,*ptr1);
    printf("%d - %d\n",*ptr,**ptr1);

    return 0;


}
