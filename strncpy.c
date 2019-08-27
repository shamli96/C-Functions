#include <stdio.h> 
#include <string.h> 
int main() 
{ 
	char src[] = "Hello World!!!"; 

	// The destination string size is 14. 
	char dest[15]; 

	// copying n bytes of src into dest. 
	strncpy(dest, src, 15); 
	printf("Copied string: %s\n", dest); 

	return 0; 
} 
