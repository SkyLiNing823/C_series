#include<iostream>
#include<stdlib.h>
#include<string.h> 
using namespace std;

int dp[30][30][400]; //查詢表 
int sum[30][400];  

int main()
{
	memset(dp,0,sizeof(dp));
	dp[0][0][0] = 1;
	for(int l = 1; l <= 26; l++){ //　l = 長度 
		for(int e = 1; e <= 26; e++){ // 以e結尾的個數 
			for(int s = 0; s <= 351; s++){  //　s = 函數值 
				for(int t = 0; t < e; t++){
					dp[l][e][s+e] += dp[l-1][t][s];
				}
			}
		}
	}
	memset(sum, 0, sizeof(sum));
	for (int l = 1; l <= 26; l++) {
		for (int e = 1; e <= 26; e++) {
			for (int s = 0; s <= 351; s++) {
				sum[l][s] += dp[l][e][s];
			}
		}
	}
	int L, S, cases = 1;
	while(cin>>L>>S){
		if(L==0 && S==0)
			break;
		cout<<"Case "<<cases<<": ";
		cases++;
		if(L<=26 && S <= 351){
			cout<<sum[L][S]<<endl;
		}else{
			cout<<"0"<<endl; 
		}		
	}
		
}

