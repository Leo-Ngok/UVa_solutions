#include <cstdio>
int ans,n;
int a[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int b[]={0,0,0,0,1,0,0,1,2,0,1,2,0,1,0,0,1,0,0,1};
int c[]={0,0,0,1,0,0,2,1,0,3,2,1,4,3,0,5,4,0,0,5};
int main(){
	scanf("%d",&n);
	if(n==1||n==2||n==5){
		printf("-1");return 0;
	}
	ans=n/14;n%=14;
	if(n==1||n==2||n==5)ans--,n+=14;
	printf("%d %d %d",ans+a[n],ans+b[n],ans+c[n]);
	return 0;
}
