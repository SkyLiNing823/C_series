#include <iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int a,b;
		int i,j;
		cin>>a>>b;
		while(b--)
		{
			for(i=1;i<=a;i++)
			{
				for(j=1;j<=i;j++)
					cout<<i;
				cout<<endl;
			}
			for(i=a-1;i>0;i--)
			{
				for(j=1;j<=i;j++)
					cout<<i;
				cout<<endl;
			}
			if(b!=0)
				cout<<endl;	
		}
		if(N!=0)
			cout<<endl;
	}
}
