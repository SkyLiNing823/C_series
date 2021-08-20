#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void lottery_generator(int n[]){
	n[0]=rand()%38+1;
	do{
		n[1] = rand()%38+1;
	}while(n[1]==n[0]);
	do{
		n[2] = rand()%38+1;
	}while(n[2]==n[0] || n[2]==n[1]);
	do{
		n[3] = rand()%38+1;
	}while(n[3]==n[0] || n[3]==n[1] || n[3]==n[2]);
	do{
		n[4] = rand()%38+1;
	}while(n[4]==n[0] || n[4]==n[1] || n[4]==n[2] || n[4]==n[3]);
	do{
		n[5] = rand()%38+1;
	}while(n[5]==n[0] || n[5]==n[1] || n[5]==n[2] || n[5]==n[3] || n[5]==n[4]);
	n[6]=rand()%8+1;
}

long long check(int a[],int b[]){
	int m,n,A=0;
	for(m=0;m<6;m++){
		for(n=0;n<6;n++){
			if(a[m]==b[n])
				A++;
		}
	}
	switch(A){
		case 6:
			if(a[6]==b[6])
				return 1;
			else
				return 2;
		case 5:
			if(a[6]==b[6])
				return 3;
			else
				return 4;
		case 4:
			if(a[6]==b[6])
				return 5;
			else
				return 6;
		case 3:
			if(a[6]==b[6])
				return 7;
			else
				return 9;
		case 2:
			if(a[6]==b[6])
				return 8;
			else
				return 0;
		case 1:
			if(a[6]==b[6])
				return 10;
			else
				return 0;
		default:
			return 0;			
	}
}

int main(){
	int lottery[10000][7];
	srand(time(NULL));
	int i,j,k,lottery1[7],bingo[7],p;
	long long money;
	for(i=0;i<10000;i++){
		lottery_generator(lottery1);
		for(j=0;j<7;j++)
			lottery[i][j]=lottery1[j];
	}
	money=0;
	long long jackpot[]={0,331112362,2836794,150000,20000,4000,800,400,200,100,100};
	for(i=0;i<10000;i++){
		lottery_generator(bingo);
		for(j=0;j<100;j++){
			for(k=0;k<7;k++){
				lottery1[k] = lottery[j][k];
			p=check(lottery1,bingo);
			money+=jackpot[p];
			}
		}
	}
	cout<<money/10000<<endl;
	return 0;	
}
