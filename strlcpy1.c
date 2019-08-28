#include<stdio.h>
#include<string.h>
#include <bsd/string.h>

int main()
{
char src[]="Hello World!";
char dest[5];
size_t length,src_length;
src_length=strlen(src);
length = strlcpy(dest,src,sizeof(dest));
printf("Copied string is:%s and strlcpy function has returned :%zd bytes\n",dest,length);
printf("Source string is:%s and its length is:%zd\n",src,src_length);
printf("size of dest string is :%zd\n",strlen(dest));
return 0;
}
