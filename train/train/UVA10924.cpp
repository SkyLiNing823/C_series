#include <iostream>
#include <string.h>
using namespace std;

int val(char c)
{
	if(c>='a'&&c<='z')
		return c-'a'+1;
	else
		return c-'A'+27;
}

int main()
{
	int prime[1041];
	int i,j,sum;
	for(i=1;i<=1040;i++)
		prime[i] = 1;
	for(i=2;i<=1040;i++)
	{
		if(prime[i]==1)
		{
			for(j=i*2;j<=1040;j+=i)
				prime[j]=0;
		}
	}
	char S[50];
	while(cin>>S)
	{
		sum = 0;
		for(i=0;i<strlen(S);i++)
			sum+=val(S[i]);
		cout<<sum;
		if(prime[sum]==1)
			cout << "It is a prime word." << endl;
		else
			cout << "It is not a prime word." << endl; 
	}
	return 0;
}








