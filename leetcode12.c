#include <stdio.h>   //divide two integers leetcode 29

int main() {
    float dividend;
    float divisor;
    float quotient;
    int truncatedValue;
    int flag = 0;

    printf("Enter dividend: ");
    scanf("%f", &dividend);

    printf("Enter divisor: ");
    scanf("%f", &divisor);

    if (divisor == 0) {
        printf("Division by zero is undefined.\n");
        return 1;
    }

    quotient = dividend / divisor;
    if (quotient > 2147483647) {
        printf("Overflow detected.\n");
        return 1;
    } else if (quotient < -2147483648) {
        printf("Underflow detected.\n");
        return 1;
    } else {
        truncatedValue = (int)quotient;
    }
    printf("Truncated value: %d\n", truncatedValue);

    return 0;
}
