#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	int N;
	string a,b,str="\n";
	cin>>N;
	getline(cin,str);  //�b���ϥ�cin��A��getline�A�ݭn���M�� 
	for(int i = 0 ; i<N ;i++)
	{
		getline(cin,a);
		getline(cin,b);
		if(a.compare(b) == 0) //str��.compare() ���n��strcmp 
			cout<<"Case "<<i+1<<": Yes"<<endl;
		else
		{
			for(int j = 0 ; j<sizeof(a) ; j++)
				if(a[j] == ' ')
				{
					a.erase(j, 1); //erase(��m�A�R���X�Ӧr��)
					j--;	 //�T�O�C�泣�Q�ˬd�� 
				}
			if(a.compare(b) == 0)
				cout<<"Case "<<i+1<<": Output Format Error"<<endl;
			else
				cout<<"Case "<<i+1<<": Wrong Answer"<<endl;
							
		}
	}
}
