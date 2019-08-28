#include<stdio.h>
#include<string.h>
#include <bsd/string.h>

int main()
{
char src[]="Hello World!";
char dest[13];
size_t length,src_length;
src_length=strlen(src);
length = strlcpy(dest,src,sizeof(dest));
printf("Copied string is:%s whose length is :%zd\n",dest,length);
printf("Source string is:%s and strlcpy has returned :%zd bytes\n",src,src_length);
printf("size of dest string is :%zd\n",strlen(dest));
return 0;
}
