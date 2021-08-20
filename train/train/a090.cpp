#include <iostream>
using namespace std;
int main()
{
	int N;
	int d1,d2,m1,m2,y1,y2,a;
	char c;
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		cin>>d1>>c>>m1>>c>>y1;
		cin>>d2>>c>>m2>>c>>y2;
		cout<<"Case #"<<i<<": ";
		if((m1<m2) || ((m1==m2) && (d1<d2)))
			a=y1-y2-1;
		else
			a=y1-y2;
		if(a<0)
			cout<<"Invalid birth date"<<endl;
		else if(a>130)
			cout<<"Check birth date"<<endl;
		else
			cout<<a<<endl;
			
			
	}
}
