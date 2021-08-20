#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0),cin.tie(0); //C++為了讓cin cout和scanf printf 同時使用時不產生混亂，所以c++用一個緩衝區來同步c的標準流，而std::ios::sync_with_stdio(0)可以關閉這一個同步，讓cin和cout不經過緩衝區；
	int N,num,ans,i,j;
	int a[100];
	string s;
	cin>>N;
	cin.ignore(); //str = "\n"; getline(cin,str);
	while(N--)
	{
		getline(cin,s);
		stringstream ss;
		ss << s;
		for(i = 0 ; ss >> num ; i++)
		{
			a[i] = num;
		}
		ans = 1;
		for(j = 0 ; j<(i-1) ; j++)
			for(int k = j+1 ; k<i ; k++)
				ans = max(ans,__gcd(a[j],a[k])); //__gcd 在  #include<algorithm> 
		cout << ans << endl;
	}
	
}
