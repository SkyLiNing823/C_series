#include<iostream>
using namespace std;
int main(){
	int n,i,j,a,b,x,y;
	float k;
	while(cin>>n){
		a=0,y=0;
		k=n-0.5;
		for(i=1;i<=(n-1);i++){
			j=1;
			x=(k*k)-(i*i);
			while((j+1)*(j+1)<=x)
				j++;
			a+=j;
		}
		for(i=0;i<=n-1;i++){
			j=1;
			x=(k*k)-(i*i);
			while(j*j<=x)
				j++;
			if(j*j==x)
				j-=1;
			y+=j;
		}
		b=y-a;
		a*=4;
		b*=4;
		cout<<"In the case n = "<<n<<", "<<b<<" cells contain segments of the circle."<<endl;
		cout<<"There are "<<a<<" cells completely contained in the circle."<<endl;
        } 
}  

