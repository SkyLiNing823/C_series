#include <iostream>
using namespace std;
int main()
{
	long long N;
	while(cin>>N)
	{
		long long t,i,sum;
		t=0,sum=0;
		for(i=N;i>0;i-=2)
			t+=i;
		t=2*t-1;
		sum=t+t-2+t-4;
		cout<<sum<<endl;	
	}
}
