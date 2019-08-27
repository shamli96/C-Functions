#include <stdio.h> 
#include <string.h> 
int main() 
{ 
	char src[] = "geeksforgeeks"; 

	char dest[2]; 

	// copying src into dest. 
	strcpy(dest, src); 
	printf("Copied string: %s\n", dest); 

	return 0; 
} 
