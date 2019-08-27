#include <stdio.h> 
#include <string.h> 
int main() 
{ 
	char src[] = "Hello World!"; 

	// Here destination is not large enough to store the src. so the behaviour of strcpy is unspecified. program may crashed, but its printing Hello World!
	char dest[2]; 

	// copying src into dest. 
	strcpy(dest, src); 
	printf("Copied string: %s\n", dest); 

	return 0; 
} 
