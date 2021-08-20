#include <iostream>
#include <string.h>

using namespace std;

int char2int(char c)
{
	if(c>='0'&&c<='9')
		return c-'0';
	if(c>='A'&&c<='Z')
  		return c-'A'+10;
 	else 
		return c-'a'+36;
}

char int2char(int num)
{
	if(num<10)
  		return '0'+num;
 	else if(num>=10&&num<36)
  		return 'A'+(num-10);
 	else 
  		return 'a'+(num-36);
}

int main()
{
	int prime[2002],i,j;
	for(i=0;i<2002;i++)
		prime[i]=1;
 	for(i=2;i<2002;i++)
 	{
  		for(j=i*2;j<2002;j+=i)
  		{
   			prime[j]=0;
  		}
 	}
 	int t,counter[62]={0};
 	char s[2001];
 	cin>>t;
 	for(i=1;i<=t;i++)
 	{
  		for(j=0;j<62;j++)
   			counter[j]=0;
  		cin>>s;
  		for(j=0;j<strlen(s);j++)
   			counter[char2int(s[j])]++;
  		int flag=0;
  		cout<<"Case "<<i<<": ";
  		for(j=0;j<62;j++)
  		{
   			if((counter[j]>1)&&prime[counter[j]]==1)
   			{
    			cout<<int2char(j);
    			flag=1; 
   			}
    
  		}  
  	if(flag==0)
  	{
   		cout<<"empty";
  	}
  	cout<<endl;
 	}
 	return 0;
 }
