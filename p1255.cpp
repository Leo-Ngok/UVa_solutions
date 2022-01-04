//p1255
#include <cstdio>
#include <cstring>
#define N 1100
int a[N],b[N],c[N],n;
void fib(int n){
	for(int k=2;k<=n;k++){
		for(int i=0;i<N-4;i++)c[i]=a[i]+b[i];
		for(int i=0;i<N-4;i++)c[i+1]+=c[i]/10,c[i]%=10;		
		for(int i=0;i<N-4;i++)a[i]=b[i],b[i]=c[i];
	}
}
int main(){
	scanf("%d",&n);
	if(n==0){
		printf("0");
		return 0;
	}
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	b[0]=c[0]=1;
	fib(n+1);
	bool flg=0;
	for(int i=N-4;i>=0;i--){
		if(c[i]!=0)flg=1;
		if(flg)printf("%d",c[i]);
	}
	return 0;
}
