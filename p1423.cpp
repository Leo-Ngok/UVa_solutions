#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double dist=0;
	cin>>dist;
	double sum=0;
	int count=0;
	while(sum<dist){
		count++;
		sum+=2*pow(0.98,count-1);
	}
	printf("%d",count);
	return 0;
}
