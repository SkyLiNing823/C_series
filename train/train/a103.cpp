#include <iostream>
using namespace std;
void t(int n[],int a)
{
	int i,j,tmp;
	for(i=0;i<a;i++)
			for(j=i;j<a;j++)
			{
				if(n[i]<n[j])
				{
					tmp=n[i];
					n[i]=n[j];
					n[j]=tmp;
				}
			}
}
int main()
{
	int N,a,i,j,ans=0,n[20000];
	cin>>N;
	while(N--)
	{
		cin>>a;
		for(i=0;i<a;i++)
		{
			cin>>n[i];
		}
		t(n,a);	
		if(a>=3)
		{
			while(n[2]!=0)
			{
				ans+=n[2];
				for(i=0;i<3;i++)
					n[i]=0;
				t(n,a); 
			}
		}
		else
			ans=0;	
		cout<<ans<<endl;
		ans=0;
	}
	
}
