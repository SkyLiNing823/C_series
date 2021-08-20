#include <iostream>
using namespace std;
int main(){
	int N,n,A[10];
	cin>>N;
	for(int i=1;i<=N;i++){
		cin>>n;
		for(int j=0;j<n;j++)
			cin>>A[j];
		cout<<"Case "<<i<<": "<<A[n/2]<<endl;
	}
}
