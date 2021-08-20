#include <iostream>
using namespace std;
int main()
{
	int n,k;
	while(cin>>n>>k)
	{
		int sum=0,used=0;
		sum+=n;
		used+=n;
		while(used>=k)
		{
			sum+=used/k;
			used=used/k+used%k;
		}
		cout<<sum<<endl;
	}
}
