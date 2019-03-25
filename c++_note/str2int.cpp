#include<iostream>
using namespace std;

void str2int(const char *src,int *dst)
{
	if(!src||!dst)
	{
		return ;
	}
	bool isMinus = false;
	int tmp = 0;
	int i;

	for(i=0;src[i]!='\0';++i)
	{
		if(src[i] == '-' && 0 == i)
		{
			isMinus = true;
			continue;		
		}
		else if(src[i] == '+' && 0 == i)
		{
			isMinus = false;
			continue;
		}
		else if(src[i] >= '0'&&src[i] <= '9')
		{
			tmp = tmp*10 + (src[i] - '0');
		}
		else
		{
			break;
		}
	}
	
	if(isMinus == true)
	{
		*dst = -tmp;
	}
	else
	{
		*dst = tmp;
	}

}


int main()
{
	int data = 44352;
	str2int("0",&data);
	cout<<data<<endl;

        str2int("+0",&data);
        cout<<data<<endl;

        str2int("-0",&data);
        cout<<data<<endl;

        str2int("+113546",&data);
        cout<<data<<endl;

        str2int("-135215",&data);
        cout<<data<<endl;

        str2int("13a15",&data);
        cout<<data<<endl;

        str2int("-1b3a15",&data);
        cout<<data<<endl;

        str2int("-1 ",&data);
        cout<<data<<endl;

        str2int("+1",&data);
        cout<<data<<endl;

        str2int(" -1",&data);
        cout<<data<<endl;


	return 0;
}

