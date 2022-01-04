//p1011
#include <cstdio>
int fib[20];
int main(){
	int a,n,m,x;scanf("%d%d%d%d",&a,&n,&m,&x);
	fib[0]=0;fib[1]=1;
	for(int k=2;k<=n;k++)fib[k]=fib[k-1]+fib[k-2];
	int k=(m-(fib[n-3]+1)*a)/(fib[n-2]-1);
	printf("%d",(fib[x-2]+1)*a+(fib[x-1]-1)*k);
	return 0;
}
