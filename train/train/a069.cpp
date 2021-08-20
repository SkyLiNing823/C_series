#include<iostream>
using namespace std;
int main(){
	long long N,S,i;
	cin>>N;
	while(N--){
		cin>>S;
		i=(S+1)*(S+1);
		cout<<(i-1)<<endl;
	}
	return 0;
}
