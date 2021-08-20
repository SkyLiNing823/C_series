#include <iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long g,l,a,b;
		cin>>g>>l;
		if(g>l)
		{
			cout<<"-1"<<endl;
			continue;
		}
		a=g;
		b=l;
		if(b%a!=0)
		{
			cout<<"-1"<<endl;
			continue;
		}
		cout<<a<<" "<<b<<endl;
	}
}
