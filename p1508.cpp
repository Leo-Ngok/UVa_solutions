//p1508
#include <cstdio>
int a[220][220],n,m;
int maxn(int x,int y){
	return (x>y)?x:y;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	scanf("%d",&a[i][j]);
	for(int i=2;i<=n;i++)
	for(int j=1;j<=m;j++){
		
		if(j==1)a[i][j]+=maxn(a[i-1][j],a[i-1][j+1]);
		else if(j==m)a[i][j]+=maxn(a[i-1][j],a[i-1][j-1]);
		else a[i][j]+=maxn(maxn(a[i-1][j],a[i-1][j+1]),a[i-1][j-1]);
	}
	int q=(m+1)/2;
	printf("%d",maxn(maxn(a[n][q-1],a[n][q]),a[n][q+1]));
	return 0;
}
