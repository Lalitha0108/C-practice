// #include<stdio.h>
// enum week{MON=1,TUE,WED=4}day;
// int main(){
//     int i;
//     for(i=MON;i<=WED;i++){
//         printf("%d \n",i);
//     }
//     return 0;
// }
#include <stdio.h>
enum day {sunday = 1, monday, tuesday = 5,
		wednesday, thursday = 10, friday, saturday};

int main()
{
	printf("%d %d %d %d %d %d %d", sunday, monday, tuesday,
			wednesday, thursday, friday, saturday);
	return 0;
}
O/p:-
1 2 5 6 10 11 12  
