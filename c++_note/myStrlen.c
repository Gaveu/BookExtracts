#include<stdio.h>
#include<assert.h>

int myStrlen(const char *src)
{
	assert(src);
	char *tmp = src;
	while(*tmp++ != '\0');
	return tmp-src-1;
}



int main()
{
	printf("%s len is : %d\n","helloWorld",myStrlen("helloWorld"));
        printf("%s len is : %d\n","hello",myStrlen("hello"));
        printf("%s len is : %d\n","This is strTest",myStrlen("This is strTest"));
	printf("%s len is : %d\n","T",myStrlen("T"));

	return 0;
}
