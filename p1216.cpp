//p1216
#include <cstdio>
#include <cstring>
int tri[1010][1010],n,maxn=0,s=0;
int maxnum(int x,int y){
	return x>y?x:y;
}
int main(){
	memset(tri,0,sizeof(tri));
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=i;j++)
	scanf("%d",tri[i]+j);
	for(int i=n-1;i>=1;i--)
	for(int j=1;j<=i;j++)
	tri[i][j]+=maxnum(tri[i+1][j],tri[i+1][j+1]);
	printf("%d",tri[1][1]);
	return 0;
}
