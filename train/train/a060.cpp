#include<iostream>
using namespace std;
int main(){
	long long N,x,y;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>x>>y;
		if(x>y)cout<<">"<<endl;
		else if(x<y)cout<<"<"<<endl;
		else cout<<"="<<endl;
	}
}	
