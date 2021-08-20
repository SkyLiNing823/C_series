#include<iostream>
using namespace std;
long long ans(long long n,long long b,long long c)
{
	if(n<1)
		return c;
	else
	{
		ans(n-1,b+c,b);
	}
}

int main()
{
	long long N;
	while(cin>>N)
	{
		if(N==0)
			break;
		else
		{
			cout<<ans(N,1,1)<<endl;
		}
	}
	
}
