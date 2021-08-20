#include<iostream>
using namespace std;
int main(){
	long long x,y,t,a;
	while(cin>>x>>y){
		if(y>x){
			t=x;
			x=y;
			y=t;
		}
		a=x-y;
		cout<<a<<endl;		
	}
	
}
