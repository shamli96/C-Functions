#include<stdio.h>
#include<string.h>

int main()
{
	char *src="Hello";
	char dest[6];
	snprintf(dest,4,"%s",src);
	printf("%s\n",dest);
	return 0;
}
