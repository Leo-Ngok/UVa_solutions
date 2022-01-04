//p2626
#include <cstdio>
typedef long long LL;
LL fib[50];
int main(){
	int n;scanf("%d",&n);
	fib[0]=0;fib[1]=1;
	for(int k=2;k<=n;k++)fib[k]=fib[k-1]+fib[k-2];
	n%=2147483648;
	printf("%d=",fib[n]);
	int g=fib[n];
	int k=2;bool inited=0;
	while(g>1){
		if(g%k==0){
			if(inited)printf("*");
			else inited=1;
			printf("%d",k);
			g/=k;
		}else k++;
	}
	if(!inited)printf("%d",fib[n]);
	return 0;
}
