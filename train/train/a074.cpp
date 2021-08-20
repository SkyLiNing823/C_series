#include <iostream>
using namespace std;
int main()
{
	long long a,b,i;
	while(cin>>a>>b)
	{
		if(a==0 && b==0)
			break;
		int sum=0;
		for(i=1;i*i<=b;i++)
			if(i*i>=a)
				sum++;
		cout<<sum<<endl;
	}
}
