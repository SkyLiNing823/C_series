#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
	char a[14];
	int t=0;
	while(cin>>a && strcmp(a,"#") != 0)
	{
		if(strcmp(a,"HELLO") == 0)
			cout<<"Case "<<++t<<": ENGLISH"<<endl;
		else if(strcmp(a,"HOLA") == 0)
			cout<<"Case "<<++t<<": SPANISH"<<endl;
		else if(strcmp(a,"HALLO") == 0)
			cout<<"Case "<<++t<<": GERMAN"<<endl;
		else if(strcmp(a,"BONJOUR") == 0)
			cout<<"Case "<<++t<<": FRENCH"<<endl;
		else if(strcmp(a,"CIAO") == 0)
			cout<<"Case "<<++t<<": ITALIAN"<<endl;
		else if(strcmp(a,"ZDRAVSTVUJTE") == 0)
			cout<<"Case "<<++t<<": RUSSIAN"<<endl;
		else
			cout<<"Case "<<++t<<": UNKNOWN"<<endl;
	}
}
