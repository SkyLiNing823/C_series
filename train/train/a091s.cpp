#include <iostream>
#include <cstring>
using namespace std;
int b2d(int d[],int n)
{
	int i,base=1,ans=0;
	for(i=n-1;i>=0;i--)
	{
		ans+=d[i]*base;
		base*=2;
	}
	return ans;
}
int main()
{
	int flag,digits[30],i,n;
	char s[30];
	cin>>s;
	while(strcmp(s,"~")!=0)
	{
		n=0;
		while(strcmp(s,"#")!=0)
		{
			if(strcmp(s,"0")==0)
				flag=1;
			else if(strcmp(s,"00")==0)
				flag=0;
			else
			{
				for(i=2;i<strlen(s);i++)
				{
					digits[n]=flag;
					n++;
					
				}
			}
			cin>>s;
		}
		cout << b2d(digits,n) << endl;
		cin>>s;
	}

}
