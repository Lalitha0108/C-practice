#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void countChars(char *s) {
    int length = strlen(s);
    int char_counts[256] = {0}; // Array to store counts for all ASCII characters

    for (int i = 0; i < length; i++) {
        char_counts[s[i]]++; // Increment count for the current character
    }

    printf("Character counts:\n");
    for (int ch = 0; ch < 256; ch++) {
        if (char_counts[ch] > 0) {
            printf(" '%c': %d\n", ch, char_counts[ch]);
        }
    }
}

int main() {
    char s[] = "hello";
    countChars(s);
    return 0;
}
