#include<iostream>
#include<string.h>
using namespace std;
int char2int(char c)
{
	if(c>='0' && c<='9')
		return c-'0';
	else if(c>='A' && c<='Z')
		return c-'A'+10;
	else
		return c-'a'+36;
}

char int2char(int i)
{
	if(i>=0 && i<=9)
		return i+'0';
	else if(i>=10 && i<=35)
		return i+'A'-10;
	else
		return i+'a'-36;
}

int main()
{
	int N;
	cin >> N;
	int i,j,flag=0;
	int prime[2002],x[62];
	char a[2002];
	for(i=2;i<2002;i++)
		prime[i]=1;
	for(i=2;i<2002;i++)
		for(j=2*i;j<2002;j+=i)
			prime[j]=0;
	for(i=1;i<=N;i++)
	{
		for(j=0;j<62;j++)
			x[j]=0;
		flag=0;
		cin>>a;
		cout<<"Case "<<i<<": ";
		for(j=0;j<strlen(a);j++)
		{
			x[char2int(a[j])]++;
		}
			
		for(j=0;j<62;j++)
			if(prime[x[j]]==1 && x[j]>1)
			{
				cout<<int2char(j);
				flag=1;
			}
		if(flag==0)
			cout<<"empty";
		cout<<endl;
	}
	
}
