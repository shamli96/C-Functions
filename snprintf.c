#include<stdio.h>
#include<string.h>

int main()
{
	char *src="Hello World!!!";
	char dest[6];
	size_t size;
	size=snprintf(dest,6,"%s",src);
	printf("%s\n",dest);
	printf("Size of the string is :%zd\n",size);
	return 0;
}
