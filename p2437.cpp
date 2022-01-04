//p2437 
#include <cstdio>
#include <cstring>
int a[300],b[300],c[300],m,n;
void fib(int n){
	for(int k=2;k<=n;k++){
		for(int i=0;i<220;i++)c[i]=a[i]+b[i];
		for(int i=0;i<220;i++)c[i+1]+=c[i]/10,c[i]%=10;		
		for(int i=0;i<220;i++)a[i]=b[i],b[i]=c[i];
	}
}
int main(){
	scanf("%d%d",&m,&n);
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	b[0]=1;
	fib(n-m+1);
	bool flg=0;
	for(int i=220;i>=0;i--){
		if(c[i]!=0)flg=1;
		if(flg)printf("%d",c[i]);
	}
	return 0;
}
