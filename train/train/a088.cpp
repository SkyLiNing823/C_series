#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int G,N,M,i,j;
	char s[200];
	cin>>G;
	while(G>0)
	{
		cin>>s;
		N=strlen(s);
		M=N/G;
		for(i=0;i<N;i+=M)
		{
			for(j=M-1;j>=0;j--)
			{
				cout<<s[i+j];
			}
		}
		cout<<endl;
		cin>>G;
	}
}
