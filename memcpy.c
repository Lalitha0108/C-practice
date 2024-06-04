#include<stdio.h>
#include<string.h>
int main(){
    char source[] = "Hello, world!";
    char destination[20]; // Ensure enough space

    memcpy(destination, source, sizeof(source));  // Copy the entire string

    printf("Copied string: %s\n", destination);
    return 0;
}
Copied string: Hello, world!
