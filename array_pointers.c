#include <stdio.h>
int main(){

    int var1=10;
    int var2=20;
    int var3=30;
    int *ptr[3]={&var1,&var2,&var3};

    for(int i=0;i<3;i++){
        printf("\n value of var %p : %d \n" ,ptr[i], *ptr[i]);
    }

    return 0;


}
O/P:-
value of var 0x7ffe6113f1f0 : 10 

 value of var 0x7ffe6113f1f4 : 20 

 value of var 0x7ffe6113f1f8 : 30
