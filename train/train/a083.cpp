#include <iostream>
using namespace std;
int main()
{
	int N;
	int x[3000]={0},y[3000]={0},n[3000]={0};
	int i,j,tmp,s;
	while(cin>>N)
	{
		s=1;
		for(i=0;i<N;i++)
			cin>>x[i];
		for(i=0;i<N-1;i++)
			n[i]=i+1;
		for(i=0;i<N-1;i++)
		{
			y[i]=x[i]-x[i+1];
			if(y[i]<0)
				y[i]*=-1;
		} 
		for(i=0;i<N-1;i++)
			for(j=i;j<N-1;j++)
				if(y[i]>y[j])
				{
					tmp=y[i];
					y[i]=y[j];
					y[j]=tmp;
				}
		for(i=0;i<N-1;i++)
			if(y[i]!=n[i])
				s=0;
		if(s==0)
			cout<<"Not jolly"<<endl;
		else 
			cout<<"Jolly"<<endl;
		
	
	}
	
}
