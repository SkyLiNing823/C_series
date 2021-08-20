#include<iostream>

using namespace std;

int main()
{
	int N,n,s=0;
	int f[40];
	f[0] = 1;
	f[1] = 2;
	for(int i = 2; i<39; i++)
		f[i] = f[i-1] + f[i-2];
	cin>>N;
	for(int i = 0; i<N; i++)
	{
		cin>>n;
		cout<<n<<" = ";
		s = 0;
		for(int j = 38; j>=0; j--)
		{
			if(n - f[j] >=0)
			{
				n = n - f[j];
				s = 1;
				cout<<"1";
			}
			else if(s == 1)
				cout<<"0";	
				 
		}
		cout<<" (fib)"<<endl;	
	}
		
}
