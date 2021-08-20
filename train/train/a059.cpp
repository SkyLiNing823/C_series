#include <iostream>
using namespace std;
int main()
{
	long long x,sum1,sum2,total,y;
	while(cin>>x)
	{
		sum1=0,sum2=0;
		if(x==0)
			break;
		else
		{
			y=x;
			while(x>0)
			{
				sum1+=x%10;
				x/=10;
				sum2+=x%10;
				x/=10;
			}
			if(sum1-sum2<0)
				total=sum2-sum1;
			else
				total=sum1-sum2;
			if(total%11==0)
				cout<<y<<" is a multiple of 11."<<endl;
			else
				cout<<y<<" is not \a multiple of 11."<<endl;
		} 
	}
}
