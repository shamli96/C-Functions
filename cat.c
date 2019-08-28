/*C program to demonstrate the function of strcat and strncat*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[ 20 ] = "Hello "; //initialize str1
	char str2[ ] = "World !!! "; //initialize str2
	char str3[ 50 ] = ""; //initialize str3 to empty

	printf("str1 = %s\n\n"
			"str2 = %s\n\n", str1, str2);

	//concatenate str2 to str1
	printf("strcat(str1, str2) = %s\n\n", strcat(str1, str2));

	//concatenate first 6 characters of str2 to str3
	printf("strncat(str3, str2, 6) = %s\n\n", strncat(str3, str2, 6));

	//concatenate str1 to str3
	printf("strcat(str3, str1) = %s\n\n", strcat(str3, str1));

	return 0;
}
