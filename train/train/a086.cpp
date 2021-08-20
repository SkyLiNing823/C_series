#include <iostream>
#include <string.h>
using namespace std;
int f(char c)
{
	if(c>='a' && c<='z')
		return c-'a'+1;
	else
		return c-'A'+27;
}
int main()
{
	char a[20];
	while(cin>>a)
	{
		int i,s=0;
		int sum=0;
		for(i=0;i<strlen(a);i++)
		{
			sum+=f(a[i]);
		}
		for(i=1;i<=sum;i++)
		{
			if(sum%i==0)
				s++;
		}
		if(s==2 || sum==1)
			cout<<"It is a prime word."<<endl;
		else
			cout<<"It is not a prime word."<<endl;
		
	}
}
