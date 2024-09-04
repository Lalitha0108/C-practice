#include <stdio.h>

int main() {
    int arr1[100], arr2[100], result[100], numElements;

    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &numElements);

    printf("Enter elements in 1st array:\n");
    for (int i = 0; i < numElements; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements in 2nd array:\n");
    for (int i = 0; i < numElements; i++) {
        scanf("%d", &arr2[i]);
    }

    // Add corresponding elements and store in result array
    for (int i = 0; i < numElements; i++) {
        result[i] = arr1[i] + arr2[i];
    }

    printf("Sum of corresponding elements in arrays:\n");
    for (int i = 0; i < numElements; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
