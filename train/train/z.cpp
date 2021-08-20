#include <iostream>
using namespace std;
int main()
{
    int m,n,t,sum=0,ans=0,i,j;
    while(cin>>m>>n>>t)
    {
        if(m>n)
        {
        	int temp = m;
        	m = n;
        	n = temp;
		}
		int time = t;
		for(i = 0;t>=i*n;i++)
		{
			t-=i*n;
			for(j = 0;t>=m;j++)
			{
				t-=m;				
			}
			sum=i+j;
			if(sum>ans)
			{
				ans = sum;
			}
			sum = 0;
			t = time;
			//cout<<j<<" "<<i<<endl;
		}
		cout<<ans<<endl;
    }
    
    
}
