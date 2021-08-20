#include <iostream>
using namespace std;
int main()
{
	int N,i,j;
	cin>>N;
	for(i=1;i<=N;i++)
	{
		int m,d,a;
		cin>>m>>d;
		switch(m){
			case 1:
				a=d-10;
				break;
			case 2:
				a=d-21;
				break;
			case 3:
				a=d-7;
				break;
			case 4:
				a=d-4;
				break;
			case 5:
				a=d-9;
				break;
			case 6:
				a=d-6;
				break;
			case 7:
				a=d-11;
				break;
			case 8:
				a=d-8;
				break;
			case 9:
				a=d-5;
				break;
			case 10:
				a=d-10;
				break;
			case 11:
				a=d-7;
				break;
			case 12:
				a=d-12;
				break;
		}
		if(a<0)
		{
			while(a<0)
			{
				a+=7;
			}
		}
		a=a%7;
		switch(a){
			case 0:
				cout<<"Monday"<<endl;
				break;
			case 1:
				cout<<"Tuesday"<<endl;
				break;
			case 2:
				cout<<"Wednesday"<<endl;
				break;
			case 3:
				cout<<"Thursday"<<endl;
				break;
			case 4:
				cout<<"Friday"<<endl;
				break;
			case 5:
				cout<<"Saturday"<<endl;
				break;
			case 6:
				cout<<"Sunday"<<endl;
				break;
		}
		
	}
}
