//p5723
#include <cstdio>
#include <math.h>
bool isprime(int n){
	for(int k=2;k<=sqrt(n+0.5);k++){
		if(n%k==0)return false;
	}
	return true;
}
int main(){
	int n;scanf("%d",&n);
	int c=0;
	int s=0;
	for(int k=2;s+k<=n;k++){
		if(isprime(k)){
			printf("%d\n",k);
			s+=k;
			c++;
		}
	}
	printf("%d",c);return 0;
}
