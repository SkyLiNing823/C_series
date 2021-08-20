#include<iostream>

using namespace std;

int main()
{
	long long fib[81] = {1, 1};
	for(int i = 2; i < 81; i++)
		fib[i] = fib[i-1] + fib[i-2];
	int N;
	while(cin>>N && N!=0)
	{
		cout << fib[N] << endl;	
	}
}
