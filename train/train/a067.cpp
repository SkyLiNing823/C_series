#include <iostream>
using namespace std;
int main()
{
	int N,i,j;
	cin>>N;
	while(N!=0)
	{
		int sum;
		sum=N*(N+1)*(2*N+1)/6;
		cout<<sum<<endl;
		cin>>N;
	}
}
