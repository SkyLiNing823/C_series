#include <iostream>
#include <cstring>
using namespace std;
int b2d(int d[],int n)
{
	int i,z=1,ans=0;
	for(i=n-1;i>=0;i--)
	{
		ans+=d[i]*z;
		z*=2;
	}
	return ans;
}
int main()
{
	int d[30]={0},flag,i,n=0;
	char s[30];
	cin>>s;
	while(strcmp(s,"~")!=0)
	{
		n=0;
		d[30]={0};
		while(strcmp(s,"#")!=0)
		{
			if(strcmp(s,"00")==0)
				flag=0;
			else if(strcmp(s,"0")==0)
				flag=1;
			else
			{
				for(i=2;i<strlen(s);i++)
				{
					d[n]=flag;
					n++;
				}		
			}
			cin>>s;
		}
			cout<< b2d(d,n)<<endl;
			cin>>s;
    }
}
