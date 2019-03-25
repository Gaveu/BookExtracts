#include<iostream>
#include<memory.h>
using namespace std;

void IntToString(int num,char *dst)
{
	int i;
	int len;
	int temp;
	char numStr[16] = {0};

	if(!dst)
	{
		return;
	}
	
	temp = num > 0 ? num : -num;
	len = 0;
	do
	{
		numStr[len] = '0' + temp % 10;
		temp /= 10;
		len++;	
	}while(temp);
	
	if(num < 0)
	{
		numStr[len] = '-';
		len++;
	}
	
	i = 0;
	
	dst[len] = '\0';
	while(len > 0)
	{
		dst[i] = numStr[len-1];
		i++;
		len--;
	}
}

int main()
{
	int data1 = 66452;
	int data2 = -6542;
	int data3 = -1;
	int data4 = 0;
	int data5 = 1;

	char dataStr[16] = {0};
	
	IntToString(data1,dataStr);
	cout << dataStr << endl;
	memset(dataStr,0,sizeof(dataStr));


	IntToString(data2,dataStr);
        cout << dataStr << endl;
        memset(dataStr,0,sizeof(dataStr));
	
	IntToString(data3,dataStr);
        cout << dataStr << endl;
        memset(dataStr,0,sizeof(dataStr));

        IntToString(data4,dataStr);
        cout << dataStr << endl;
        memset(dataStr,0,sizeof(dataStr));

        IntToString(data5,dataStr);
        cout << dataStr << endl;
        memset(dataStr,0,sizeof(dataStr));


}


