#include <iostream>
using namespace std;
int a,x1,y1;
void t(int N,int x,int y)
{
	int i ,j;
	if(N==0)
		return;
	if(x-N<=x1 && x+N>=x1 && y+N>=y1 && y-N<=y1)
		a++;
	t(N/2,x+N,y+N);
	t(N/2,x+N,y-N);
	t(N/2,x-N,y+N);
	t(N/2,x-N,y-N);
}

int main()
{
	int N;
	while(cin>>N>>x1>>y1)
	{
		if(N==0 && x1==0 && y1==0)
			break;
		a=0;
		t(N,1024,1024);
		printf("%3d\n",a);
	}
}
