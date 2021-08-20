#include <iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int x,i,a,b,c,sum=0;
		for(i=0;i<4;i++)
		{
			cin>>x;
			a=x/1000;
			b=(x/10)%10;
			c=(x/100)%10+x%10;
			a*=2;
			b*=2;
			sum+=a/10+a%10+b/10+b%10+c;	
		}
		if(sum%10!=0)
			cout<<"Invalid"<<endl;
		else
			cout<<"Valid"<<endl;
	}
}
