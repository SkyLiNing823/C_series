#include<iostream>
using namespace std;

int main()
{
	int T,i,d1,m1,y1,d2,m2,y2,age;
	char c;
	cin>>T;
	for(i=1;i<=T;i++)
	{
		cin>>d1>>c>>m1>>c>>y1;
		cin>>d2>>c>>m2>>c>>y2;
		cout<<"Case #"<<i<<": ";
		if(m1<m2 || (m1==m2 && d1<d2))
			age=y1-y2-1;
		else 
			age=y1-y2;
		if(age<0)
			cout<<"Invalid birth date"<<endl;
		else if(age>130)
			cout<<"Check birth date"<<endl;
		else
			cout<<age<<endl;
	}
}
