#include <iostream>
#include <string.h>
using namespace std;
int reverse(int num)
{
	int sum=0;
	while(num)
	{
		sum=sum*10+num%10;
		num/=10;
	}
	return sum;
}

int main(){
	int N;
	cin>>N;
	while(N--)
	{
		int i,a,b,t=0;
		cin>>a;
		b=reverse(a);
		a=a+b;
		b=reverse(a);
		t++;
		while(a!=b)
		{
			t++;
			a=a+b;
			b=reverse(a);
		}
		cout<<t<<" "<<a<<endl;	
	}
}
