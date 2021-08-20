#include<iostream>
using namespace std;
int main(){
	long long N,x,y,a,b,c=0,ans;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>x>>y;
		a,b=0;
		if(y>x){
			cout<<"impossible"<<endl;
			continue;
		}
		else if((x+y)%2==1 || (x-y)%2==1){
			cout<<"impossible"<<endl;
			continue;
		}
		a=(x+y)/2;
		b=(x-y)/2;
		cout<<a<<" "<<b<<endl;
		}
			
}
