#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0),cin.tie(0); //C++���F��cin cout�Mscanf printf �P�ɨϥήɤ����ͲV�áA�ҥHc++�Τ@�ӽw�İϨӦP�Bc���зǬy�A��std::ios::sync_with_stdio(0)�i�H�����o�@�ӦP�B�A��cin�Mcout���g�L�w�İϡF
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
				ans = max(ans,__gcd(a[j],a[k])); //__gcd �b  #include<algorithm> 
		cout << ans << endl;
	}
	
}
