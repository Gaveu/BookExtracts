#include<stdio.h>

void swap(char *a,char *b)
{
	char t = *a;
	*a = *b;
	*b = t;
}

void reStr(char *src)
{
	if(!src)
	{
		return ;
	}
	char *cur = src;
	char *end = NULL;
	char *fir = src;	

	do
	{
		cur++;
		if(*cur == ' '||*cur == '\0')
		{
			end = cur - 1;
			while(fir < end)
			{
				swap(fir++,end--);
			}	
			end = fir = cur + 1;
		}
	}while(*cur != '\0');

	
	end = cur - 1;
	fir = src;
	while(fir < end)
	{
		swap(fir++,end--);
	}
}



int main()
{
	char str[] = "This is a             string for reversing             ";
	reStr(str);
	printf("%s\n",str);

	return 0;
}


