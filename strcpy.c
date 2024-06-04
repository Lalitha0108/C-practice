// C program to illustrate the use of strcpy() 
#include <stdio.h> 
#include <string.h> 

int main() 
{ 
	// defining strings 

	char source[] = "GeeksforGeeks"; 
	char dest[20]; 

	// Copying the source string to dest 
	strcpy(dest, source); 

	// printing result 
	printf("Source: %s\n", source); 
	printf("Destination: %s\n", dest); 

	return 0; 
}
