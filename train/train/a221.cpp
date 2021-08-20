#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	int N;
	string a,b,str="\n";
	cin>>N;
	getline(cin,str);  //在先使用cin後再用getline，需要先清空 
	for(int i = 0 ; i<N ;i++)
	{
		getline(cin,a);
		getline(cin,b);
		if(a.compare(b) == 0) //str用.compare() 不要用strcmp 
			cout<<"Case "<<i+1<<": Yes"<<endl;
		else
		{
			for(int j = 0 ; j<sizeof(a) ; j++)
				if(a[j] == ' ')
				{
					a.erase(j, 1); //erase(位置，刪除幾個字元)
					j--;	 //確保每格都被檢查到 
				}
			if(a.compare(b) == 0)
				cout<<"Case "<<i+1<<": Output Format Error"<<endl;
			else
				cout<<"Case "<<i+1<<": Wrong Answer"<<endl;
							
		}
	}
}
