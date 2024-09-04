#include <stdio.h>
#include <stdlib.h>

void func(int* a, int* b, int* sum) {
    a = (int*)malloc(sizeof(int));
    b = (int*)malloc(sizeof(int));


    
    *a;
    *b = *a+6;
    *sum = *a + *b;

    printf("Sum of two numbers is: %d\n", *sum);

    free(a);
    free(b);
}

int main() {
    int a, b, sum;
    func(&a, &b, &sum);
    return 0;
}
