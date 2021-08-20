#include<iostream>
using namespace std;
int main()
{
	int N,i,a,b,c;
	cin>>N;
	for(i=1;i<=N;i++)
	{
		cin>>a>>b>>c;
		if((a+b<c) || (a+c<b) || (b+c<a) || a==0 || b==0 || c==0)
			cout<<"Case "<<i<<": Invalid"<<endl;
		else if(a==b && b==c && c==a)
			cout<<"Case "<<i<<": Equilateral"<<endl;
		else if(a==b || b==c || c==a)
			cout<<"Case "<<i<<": Isosceles"<<endl;
		else
			cout<<"Case "<<i<<": Scalene"<<endl;
	}
}
