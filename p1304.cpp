//p1304
#include <cstdio>
#include <math.h>
bool isprime(int n){
	if(n==1)return 0;
	for(int k=2;k<=sqrt(n);k++)if(n%k==0)return 0;
	return 1;
}
int main(){
	int n;scanf("%d",&n);
	for(int k=4;k<=n;k+=2){
		for(int j=2;j<=k/2;j++){
			if(isprime(j)&&isprime(k-j)){
				printf("%d=%d+%d\n",k,j,k-j);
				break;
			}
		}
	}
	return 0;
} 
