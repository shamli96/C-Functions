/*C program to demonstrate the function of strcat and strncat when dest size is smaller*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[ 6 ] = "Hello"; //initialize str1
	char str2[ ] = "World !!! "; //initialize str2
	char str3[ 5 ] = ""; //initialize str3 to empty

	printf("str1 = %s\n\n"
			"str2 = %s\n\n", str1, str2);

	//concatenate str2 to str1
	printf("strcat(str1, str2) = %s and str1 has stored = %zd bytes\n", strcat(str1, str2),strlen(str1));  //gives an undefined output

	//concatenate first 6 characters of str2 to str3
	printf("strncat(str3, str2, 6) = %s and str3 has stored :%zd bytes\n", strncat(str3, str2, 6), strlen(str3));

	return 0;
}
