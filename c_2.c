#include<stdio.h>
int Set(int num,int bit_position){
    return(1&(num>>(bit_position-1)));
}
int main(){
    int num;
    int bit_position;
    printf("enter number:");
    scanf("%d",&num);
    printf("enter bit position:");
    scanf("%d",&bit_position);

    if (Set(num, bit_position)) { 
        printf("Bit %d is set in %d\n", bit_position, num); 
    } else { 
        printf("Bit %d is not set in %d\n", bit_position, num); 
    } 
    return 0;
}
/*10:- 8 4 2 1
       1 0 1 0 
       right shift 2 bits
          0  0 1 0
    & 1:- 0  0 0 1
          ---------
          0  0  0 0*/

