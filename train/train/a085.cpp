#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,k,i,s,s2,t,first=0,w[100],l[100];
	char move[100],move2[100];
	while(cin>>n){
		if(n==0)
			break;
		cin>>k;
		if(first!=0)
			cout<<endl;
		t=k*n*(n-1)/2;
		for(i=0;i<100;i++){
			w[i]=0;
			l[i]=0;
		}
		for(i=0;i<t;i++){
			cin>>s>>move>>s2>>move2;
			if(move[0]=='r'&& move2[0]=='s'){
				w[s]++;
				l[s2]++;
			}
			if(move[0]=='s'&& move2[0]=='p'){
				w[s]++;
				l[s2]++;
			}
			if(move[0]=='p'&& move2[0]=='r'){
				w[s]++;
				l[s2]++;
			}
			if(move[0]=='s'&& move2[0]=='r'){
				l[s]++;
				w[s2]++;
			}
			if(move[0]=='p'&& move2[0]=='s'){
				l[s]++;
				w[s2]++;
			}
			if(move[0]=='r'&& move2[0]=='p'){
				l[s]++;
				w[s2]++;
			}
		}
		for(i=1;i<=n;i++)
		{
			if(w[i]+l[i]==0)
				cout<<"-"<<endl;
			else	
				cout<<fixed<<setprecision(3)<<((float)w[i]/(w[i]+l[i]))<<endl;
		}
		first++;
	}
}
	
