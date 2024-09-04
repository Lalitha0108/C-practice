#include<stdio.h>
int add(int x,int y){
    int sum=x+y;
    printf("sum of %d \n",sum);
}
int sub(int x,int y){
    int sub1=x-y;
    printf("sub of %d  \n",sub1);
}
int mul(int x,int y){
    int mul1=x*y;
    printf("mul of %d  \n",mul1);
}
int div(int x,int y){
    if(y==0){
        printf("divide by zero exception error");
    }
    int div1=x/y;

    printf("div of %d  \n",div1);
}
int main(){
    int var,x,y;
    int sum1,mul1,sub1,div1;
    printf("input two values: \n");
    scanf("%d %d",&x,&y);

    printf("select which operation we want: \n");
    printf("1.Addition \n");
    printf("2.Subtraction \n");
    printf("3.Multiplication \n");
    printf("4.Division \n");
    scanf("%d",&var);
    switch (var)
    {
    case 1:
       sum1=add(x,y);
       break;
    
    case 2:
       sub1=sub(x,y);
       break;
    case 3:
        mul1=mul(x,y);
        break;
    case 4:
        div1=div(x,y);
        break;

    default:
        printf("wrong choice: \n");
    }
    return  0;
}