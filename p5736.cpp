//p5736
#include <iostream>
#include <math.h>
using namespace std;
bool isprime(int n){
	if(n==1)return false;
	int p=sqrt(n+0.5);
	for(int k=2;k<=p;k++)if(n%k==0)return false;
	return true;
}
int main(){
	int n;cin>>n;
	int num[n];
	for(int k=0;k<n;k++)cin>>num[k];
	for(int k=0;k<n;k++){
		if(isprime(num[k]))cout<<num[k]<<" ";
	}
	return 0;
}
