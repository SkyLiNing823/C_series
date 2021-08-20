#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
	long long I,b;
	int i,j,t,ans;
	int s[100];
	while(cin>>I&&I!=0){
		t = 0;
		memset(s,'\0',sizeof(s));
		for(i=0;I>0;i++)
		{
			s[i] = I%2;
			I = I/2;
		}
		for(j=i-1 ;j>=0 ;j--)
			if(s[j] ==1)
			 t++;		
		cout<<"The parity of ";
		for(i=i-1 ;i>=0 ;i--)    
        	cout<<s[i];  
		cout<<" is "<<t<<"(mod 2)."<<endl;
	}
	
	
}
