#include<iostream>
using namespace std;
int main()
{
	int N;
	while(cin>>N)
	{
		if(N==0)
			break;
		int bottom,empty;
		bottom=N/3;
		empty=N/3+N%3;
		while(empty>=3)
		{
			bottom+=empty/3;
			empty=empty/3+empty%3;
		}
		if(empty==2)
			bottom++;
		cout<<bottom<<endl;
	}
}
