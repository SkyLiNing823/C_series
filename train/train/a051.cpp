#include <iostream>
using namespace std;
int main()
{
	long long a,b,c,x=0,sum=0;
	while(cin>>a>>b)
	{
	if(a==0 && b==0)
		break;
	while(a>0 || b>0)
	{
		c=a%10+b%10+x;
		x=0;
		if(c>9)
		{
			sum++;
			x+=1;
		}
		a/=10;
		b/=10;
	}
	if(sum>1)
		cout<<sum<<" carry operations."<<endl;
	else if(sum==1)
		cout<<sum<<" carry operation." <<endl;
	else 
		cout<<"No carry operation."<<endl;
	sum=0;
	x=0; 
}
}
