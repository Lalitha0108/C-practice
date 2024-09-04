// #include<stdio.h>
// int main(){
//     int a=20;
//     int b=25;

//     int add,sub,mul,div,mod;

//     int *ptr1,*ptr2;

//     ptr1=&a;
//     ptr2=&b;

//     //airthematic operators

//     add=*ptr1 + *ptr2;
//     sub=*ptr1 - *ptr2;
//     mul=*ptr1 * *ptr2;
//     div=*ptr1 / *ptr2;
//     mod=*ptr1 % *ptr2;
//     printf("Addition = %d\n", add);
//     printf("Subtraction = %d\n", sub);
//     printf("Multiplication = %d\n", mul);
//     printf("Division = %d\n", div);
//     printf("Modulo = %d\n", mod);

//     //relational operators

//     if (*ptr1 < *ptr2) {
//         printf("%d is less than %d.", *ptr1, *ptr2);
//     }
 
//     // Greater than operator
//     if (*ptr1 > *ptr2) {
//         printf("%d is greater than %d.", *ptr1, *ptr2);
//     }
 
//     // Equal to
//     if (*ptr1 == *ptr2) {
//         printf( "%d is equal to %d. \n", *ptr1, *ptr2);
//     }

//     //assignment operator
//     *ptr1 = 50;
 
//     // Printing value of 'a' after
//     // updating its value
//     printf(" \n Value of variable a = %d \n", *ptr1);

//     // unary operators
//     printf("before incrementing the value is:%d \n",*ptr1);    //post incremnent
//     (*ptr1)++;
//     printf("after incrementing the value is: %d \n",*ptr1);

//     printf("-------------------------------------- \n");

//     ++*ptr1;
//     printf("after incrementing the value is: %d \n",*ptr1); //preincrememnt

//     // Bitwise operators

//     int and,or,ex_or;
//     and =*ptr1&*ptr2;
//     or=*ptr1|*ptr2;
//     ex_or=*ptr1^*ptr2;

//     printf("and of ptr1 and ptr2 is:%d \n",and);
//     printf("or of ptr1 and ptr2 is:%d \n",or);
//     printf("ex_or of ptr1 and ptr2 is:%d \n",ex_or);
//     return 0;
// }
#include<stdio.h>
int main(){
    int a=10;
  printf("before incrementing the value is:%d",a);
  a++;
  printf("after increementing the values is:%d",a);
  printf("before decremnting the value is:%d",a);
  a--;
  printf("after decrementing the values is:%d",a);
  printf("before preincrementing the value is:%d",a);
  ++a;
  printf("after preincreementing the values is:%d",a);
  printf("before predecrermenting the value is:%d",a);
  --a;
  printf("after predecrementing the values is:%d",a);
  printf("before the value is:%d",a);
  a;
  printf("after the values is:%d",a);

  printf("%d,%d,%d,%d,%d\n",a++,a--,++a,--a,a);
  return 0;
  

}