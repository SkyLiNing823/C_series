#include<iostream>
using namespace std;
int main (){
	int a,b,c,d,sum;
	while(cin>>a>>b>>c>>d){
		if(a==0 && b==0 && c==0 && d==0)
		break;
		sum=720;
		sum+=((a-b+40)%40)*9;
		sum+=360;
		sum+=((c-b+40)%40)*9;
		sum+=((c-d+40)%40)*9;
	cout<<sum<<endl;	
	}

}
