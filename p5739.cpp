//p5739
#include <cstdio>
int factorial(int n){
	if(n==0)return 1;
	return n*factorial(n-1);
}
int main(){
	int n;scanf("%d",&n);
	printf("%d",factorial(n));
	return 0;
}
