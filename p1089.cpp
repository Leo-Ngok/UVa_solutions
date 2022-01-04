//p1089
#include <iostream>
using namespace std;
int bg[12];
int main(){
	for(int k=0;k<12;k++)cin>>bg[k];
	int bank=0,balance=0;
	for(int k=0;k<12;k++){
		balance+=300-bg[k];
		if(balance<0){cout<<'-'<<k+1;return 0;}
		while(balance>=100){
			balance-=100;
			bank+=100;
		}
	}
	cout<<bank*1.2+balance;return 0;
}
