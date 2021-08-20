#include<iostream>
using namespace std;

int main()
{
	int c,T,x1,y1,x2,y2,dx,dy,s;
	long long N;
	cin>>c;
	while(c--)
	{
		cin>>T>>N;
		while(T--)
		{
			s=0;
			cin>>x1>>y1>>x2>>y2;
			if(x1>x2)
				dx=x1-x2;
			else
				dx=x2-x1;
			if(y1>y2)
				dy=y1-y2;
			else
				dy=y2-y1;
			if((dx%2)==(dy%2))
			{
				s+=2;
				if(dx==dy)
					s--;
				if(dx==0 && dy==0)
					s=0;	
				cout<<s<<endl;	
			}
			else
				cout<<"no move"<<endl;
			
		}
	}
	
}
