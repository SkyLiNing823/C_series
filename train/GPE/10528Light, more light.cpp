/*n�u���b��]�ƪ��ɭԳQ�����A�]���p�G�]�ƭӼƬ����ơA����̫�O�t���A�Ϥ��p�G���_�ƫh���G���A�ӥu����Q�}����ڪ��ɭԦ]�ƭӼƤ~�|���_�ơC*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	int s;
    while(cin>>n)
    {
    	if(n==0)
    		break;
    	s = sqrt(n);	
		if(s*s==n)
		 	cout<<"yes\n";
		else
			cout<<"no\n";
	}
}
