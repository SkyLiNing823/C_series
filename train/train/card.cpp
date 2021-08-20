#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void init(int x[]){
	for(int i=0;i<52;i++)
		x[i]=i;
}
void shuffle(int x[]){
	int count,p1,p2,tmp;
	for(count=0;count<100000;count++){
		p1=rand()%52;
		p2=rand()%52;
		tmp=x[p1];
		x[p1]=x[p2];
		x[p2]=tmp;
	}
}
void sort(int x[]){
	int tmp;
	for(int i=0;i<13;i++){
		for(int j=i+1;j<13;j++){
			if(x[i]>x[j]){
				tmp=x[i];
				x[i]=x[j];
				x[j]=tmp;
			}
		}
	}
}
void printcard(int n){
	switch(n/13){
		case 0:
			cout<<"S";
			break;
		case 1:
			cout<<"H";
			break;
		case 2:
			cout<<"D";
			break;
		case 3:
			cout<<"C";
			break;
	}
	switch(n%13+1){
		case 1:
			cout<<"A ";
			break;
		case 11:
			cout<<"J ";
			break;
		case 12:
			cout<<"Q ";
			break;
		case 13:
			cout<<"K ";
			break;
		default:
			cout<<n%13+1<<" ";
			break;
			
	}	
	}
int main(){
	int cards[52],mycard[13];
	srand(time(NULL));
	init(cards);
	shuffle(cards);
	for(int i=0;i<13;i++){
		mycard[i]=cards[i];
	sort(mycard);
	for(i=0;i<13;i++)
		printcard(mycard[i]);
	cout<<endl;
	}
} 
