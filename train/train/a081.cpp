#include <iostream>
using namespace std;
int main(){
	char a[100];
	int x;
	while(cin>>a){
		for(int i=0;a[i]!='\0';i++){
			x=(int)a[i]-7;
			cout<<(char)x;
		}
		cout<<endl;
	}
}
