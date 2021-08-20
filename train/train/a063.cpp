#include <iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int a,b,c,bottle,sum=0;
		cin>>a>>b>>c;
		bottle=a+b;
		sum=bottle/c;
		bottle=sum+bottle%c;
		while(bottle>=c)
		{
			sum+=bottle/c;
			bottle=bottle/c+bottle%c;
		}
		cout<<sum<<endl;
	}
}
