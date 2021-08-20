#include <iostream>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int ca = 1;
		int re = 1;
		while(re%n)
		{
			re = (re*10+1)%n;
			cout << re << endl;
			ca++;
		}
		cout << ca << endl;
	}
}
