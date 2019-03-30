#include<stdio.h>

const char *strstr(const char *src,const char *sub)
{
	if(!src||!sub)
	{
		return src;
	}
	const char *sptr = NULL;
	const char *bptr = NULL;

	do
	{
		sptr = src;
		bptr = sub;
		do
		{
			if(!*sptr)
				return src;
		}while(*bptr++ == *sptr++);
	
		src++;
	}while(*src++ != '\0');
	return NULL;
}

int main()
{
	char p[] = "hello";
	char q[] = "llo";
	
	const char *s = strstr(p,q);
	printf("s: %s\n",s);

	return 0;
}
