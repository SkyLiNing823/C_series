#include <iostream>
using namespace std;
int main()
{
	int N;
	int i,j;
	cin>>N;
	for(i=1;i<=N;i++)
	{
		int s,a,b,h=0,l=0;
		cin>>s;
		for(j=0;j<s;j++)
		{
			if(j==0)
				cin>>b;
			else
			{
				cin>>a;
				if(a>b)
					h++;
				else if(a<b)
					l++;
				b=a;
			}
				
		}
		cout<<"Case "<<i<<": "<<h<<" "<<l<<endl;
	}
}
