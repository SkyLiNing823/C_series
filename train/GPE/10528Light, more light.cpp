/*nΤㄤ计砆ち传狦计计案计ê或程琌穞はぇ狦计玥獹τΤ砆秨キよ计计穦计*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	int s;
    while(cin>>n)
    {
    	if(n==0)
    		break;
    	s = sqrt(n);	
		if(s*s==n)
		 	cout<<"yes\n";
		else
			cout<<"no\n";
	}
}
