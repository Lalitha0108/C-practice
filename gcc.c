#include <stdio.h>

void add(int a, int b) {
    int sum = a + b;
    printf("Sum of %d and %d is: %d\n", a, b, sum); // Print the result within the function
}

void sub(int a, int b) {
    int difference = a - b;
    printf("Difference of %d and %d is: %d\n", a, b, difference); // Print the result within the function
}

void mul(int a, int b) {
    int product = a * b;
    printf("Product of %d and %d is: %d\n", a, b, product); // Print the result within the function
}

int main() {
    int a = 10;
    int b = 20;

    add(a, b);
    sub(a, b);
    mul(a, b);

    // No need to call functions again for printing results, they are printed within the functions

    return 0;
} //gcc -c gcc.c -o gcc.o
//gcc -g gcc.c 
//gdb ./a.out

