#include <iostream>
using namespace std;
int main()
{
	int a,b,x,y;
	while(cin>>a>>b)
	{
		if(a==-1 && b==-1)
			break;
		x=b-a;
		if(x<0)
			x*=-1;
		y=100-x;
		if(y<0)
			y*=-1;
		if(x<y)
			cout<<x<<endl;
		else if(x==y)
			cout<<"0"<<endl;
		else
			cout<<y<<endl;
	}
 } 
