#include<stdio.h>
int main(){
    int a=4;
    int *p=&a;
    int *p1=&a;
    int x=4;
    int *p2=&x;
    // pointer increment and decrement
    printf("before incrementing %p \n",p);
    *(p++);
    printf("after incrementing %p \n",p);
    *(p--);
    printf("after decrementing %p \n",p);
    *++p;
    printf("after preincrementing %p \n",p);
    *--p;
    printf("after predecrementing %p \n",p);

    printf("--------------------------------- \n");

    //addition of integer to pointer
    printf("before adding the value:%p \n",p1);
    p1=p1+4;
    printf("after adding the value is: %p \n",p1);

    printf("--------------------------------- \n");
    
    //subtraction of integer to pointer

    printf("before subtracting the value:%p \n",p1);
    p1=p1-2;
    printf("after subtracting the value :%p \n",p1);

    printf("--------------------------------- \n");

    // subtraction of two pointers

    printf("before subtracting the values: *p=%p,*p2=%p",p,p2);
    x=p-p2;
    printf("Subtraction of  %d\n", x);

    printf("--------------------------------- \n");

    // comparison of pointers

    // C Program to illustrare pointer comparision
	// declaring array
	int arr[5];

	// declaring pointer to array name
	int* ptr1 = &arr;
	// declaring pointer to first element
	int* ptr2 = &arr[0];

	if (ptr1 == ptr2) {
		printf("Pointer to Array Name and First Element "
			"are Equal.");
	}
	else {
		printf("Pointer to Array Name and First Element "
			"are not Equal.");
	}

	return 0;
}



O/P:-
before incrementing 0x7ffd77b110d0 
after incrementing 0x7ffd77b110d4 
after decrementing 0x7ffd77b110d0 
after preincrementing 0x7ffd77b110d4 
after predecrementing 0x7ffd77b110d0 
--------------------------------- 
before adding the value:0x7ffd77b110d0 
after adding the value is: 0x7ffd77b110e0 
--------------------------------- 
before subtracting the value:0x7ffd77b110e0 
after subtracting the value :0x7ffd77b110d8 
--------------------------------- 
before subtracting the values: *p=0x7ffd77b110d0,*p2=0x7ffd77b110d4Subtraction of  -1
--------------------------------- 
Pointer to Array Name and First Element are Equal.
