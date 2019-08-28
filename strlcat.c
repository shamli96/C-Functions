#include<stdio.h>
#include<string.h>
#include <bsd/string.h>

int main()
{	
	const char somestring[] = "bar";
	char buf[5] = "foo";
	size_t len;

	len=strlcat(buf, somestring, sizeof(buf)) ;
	if (len >= sizeof(buf)){
		printf("somestring was truncated, when concatenating to buf.\n");
		printf("String stored is :%s\n",buf);
	}	
	else
		printf("String is concatenated properly. Resultant string is :%s\n",buf);
	printf("strlcat has returned = %zd bytes\n",len);
	printf("Size of the destination string is :%zd",strlen(buf));
	return 0;
}
