#include <iostream>
using namespace std;
int main()
{
	long long N,i,sum;
	while(cin>>N)
	{
		if(N==0)
			break;
		else
		{
			sum=0;
			for(i=1;sum<=N;i++)
				sum+=i;
			cout<<sum-N<<" "<<i-1<<endl;
		}
	}
}
