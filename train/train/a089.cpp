#include <iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int a,b;
		cin>>a>>b;
		int i,j,s,sum=1;
		int k[100]={0};
		for(i=0;i<b;i++)
			for(j=0;j<a;j++)
			{
				cin>>s;
				if(s==1)
					k[j]++;
			}
		for(i=0;i<a;i++)
			if(k[i]>1)
				sum*=k[i];
		cout<<sum<<endl;
	}
}
