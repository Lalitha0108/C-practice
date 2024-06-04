#include <stdio.h>

int main()
{
    int arr[5][3];
    
    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(arr[0][0]);
    int nos = (sizeof(arr)/sizeof(arr[0])) * (sizeof(arr[0])/sizeof(arr[0][0]));
    int size = nos * sizeof(arr[0][0]);
    
    printf("size of arr: [%d] [%d] - [%d] - %d bytes \n", row, col, nos, size );
    
    return 0;


}

O/P:-
15
