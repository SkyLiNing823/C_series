#include<iostream>
using namespace std;
int main()
{
	char c;
	int k=0;
	while(cin.get(c))
	{
		if(c!='"')
		{
			cout<<c;	
		}	
		else if(k%2==0)
		{
			cout<<"``";
			k++;
		}
		else
		{
			cout<<"''";
			k++;
		}
	}
}
