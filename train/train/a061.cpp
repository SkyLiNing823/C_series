#include <iostream>
using namespace std;
int main()
{
	long long x,sum,y;
	while(cin>>x)
	{
		sum=0;
		if(x==0)
			break;
		else
		{
			while(x>9)
			{
				y=x;
				while(y>0)
				{
					sum+=y%10;
					y/=10;
				}
				x=sum;
				sum=0;
			}
			cout<<x<<endl;
		}
	}
} 
