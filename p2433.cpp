//p2433
#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int n;
double pi=3.141593;
int main(){
	scanf("%d",&n);
	//for(int n=1;n<=14;n++)
	switch(n){
		case 1:printf("I love Luogu!");break;
		case 2:printf("6 4");break;
		case 3:printf("3 12 2");break;
		case 4:printf("166.667");break;
		case 5:printf("15");break;
		case 6:cout<<sqrt(117);break;
		case 7:printf("110 90 0");break;
		case 8:cout<<25*pi;break;
		case 9:printf("22");break;
		case 10:printf("9");break;
		case 11:cout<<100.0/3.0;break;
		case 12:printf("13\nR");break;
		case 13:cout<<floor(pow(4256*pi/3,1/3));break;
		case 14:printf("50");break;
	}
	return 0;
}
