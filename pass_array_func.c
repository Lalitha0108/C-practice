#include <stdio.h>

void func(int arr[]) {
    printf("size of the array is: %ld\n", sizeof(arr[0]));
}

int main() {
    int arr[4] = {1, 2, 3, 4};
    int* p = &arr;

    func(arr);

    return 0;
}
