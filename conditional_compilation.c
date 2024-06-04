#include <stdio.h>

#define DEBUG

int main() {
    #ifdef DEBUG
        printf("Debug version\n");
    #else
        printf("Release version\n");
    #endif

    return 0;
}
