#include <iostream>
using namespace std;


int main()
{
	int c,i,a,b,j,k,num,first[33]={0},n,suma=1;
 	cin>>c;
 	for(i=1;i<=c;i++)
 	{
  		cin>>a>>b;
  		for(j=1;j<=b;j++)
  		{
   			for(k=1;k<=a;k++)
   			{
    			cin>>num;
    			if(num==1)
     				first[k]++;
   			}		
  		}
  		for(n=1;n<=k;n++)
 		{
   			if(first[n]>=1)
    			suma*=first[n];
   			first[n]=0;
  		}
  		cout<<suma<<endl;
  		suma=1;
 	} 
 	return 0;
 }
